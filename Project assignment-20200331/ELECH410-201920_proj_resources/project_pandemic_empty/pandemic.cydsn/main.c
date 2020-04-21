/* ========================================
 *
 *              ELECH410 labs
 *          FreeRTOS pandemic project
 * 
 *                   2020
 *
 * ========================================
*/
#include "project.h"

/* RTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "queue.h"
#include "semphr.h"

#include "pandemic.h"

#define TASK_STACK_SIZE (1024)

/* Task definitions */
#define GAME_TASK_NAME ("game_task")
#define QUARANTINE_TASK_NAME ("quarantine_task")
#define VACCINE_TASK_NAME ("vaccine_task")
#define SCREEN_UPDATE_TASK_NAME ("screen_update_task")
#define MEDICINE_TASK_NAME ("medicine_task")

/* Task priority */
#define GAME_PRIORITY (20)
#define QUARANTINE_PRIORITY (18)
#define SCREEN_UPDATE_PRIORITY (16)
#define MEDICINE_PRIORITY (14)
#define VACCINE_PRIORITY (12)

/* Task period */
#define MEDICINE_TASK_PERIOD (5000)   

/* Timer definitions */
#define MEDICINE_TIMER_NAME ("medicine_timer_task")   

/* Semaphore */
SemaphoreHandle_t s1, s2;
QueueHandle_t q;

/* Task handlers */
TaskHandle_t gameHandler, quarantineHandler, vaccineHandler,
screenUpdateHandler, medicineHandler;

TimerHandle_t medecineTimerHandler;

/*
 * Installs the RTOS interrupt handlers.
 */
static void freeRTOSInit( void );

/* functions declarations */
void quarantineTask();
void vaccineTask();
void screenUpdateTask();
void medicineTask();
void printCounter(char* numberAsChar, uint8_t lowerBound, uint8_t charNbr);
void convertPercentage(uint8_t number, char* numberAsChar);
void medicineTimerCallback();


uint8_t md=0;

int main(void)
{
    /* Enable global interrupts. */
    CyGlobalIntEnable; 
    
    freeRTOSInit();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    KB_Start();
    
    // Create tasks
    xTaskCreate( gameTask, GAME_TASK_NAME, TASK_STACK_SIZE, NULL, GAME_PRIORITY, &gameHandler );
    xTaskCreate( quarantineTask,QUARANTINE_TASK_NAME, TASK_STACK_SIZE, NULL, QUARANTINE_PRIORITY, &quarantineHandler );
    xTaskCreate( vaccineTask, VACCINE_TASK_NAME, TASK_STACK_SIZE, NULL, VACCINE_PRIORITY, &vaccineHandler );
    xTaskCreate( screenUpdateTask, SCREEN_UPDATE_TASK_NAME, TASK_STACK_SIZE, NULL, SCREEN_UPDATE_PRIORITY, &screenUpdateHandler );
    xTaskCreate( medicineTask, MEDICINE_TASK_NAME, TASK_STACK_SIZE, NULL, MEDICINE_PRIORITY, &medicineHandler );
    
    medecineTimerHandler = xTimerCreate(MEDICINE_TIMER_NAME, MEDICINE_TASK_PERIOD, pdTRUE, NULL, medicineTimerCallback);
    
    s1 = xSemaphoreCreateBinary();
    s2 = xSemaphoreCreateMutex();
    q = xQueueCreate(1, sizeof(Token));
    
    // Launch freeRTOS
    vTaskStartScheduler();
    
    for(;;)
    {
    }
}

void freeRTOSInit( void )
{
    /* Port layer functions that need to be copied into the vector table. */
    extern void xPortPendSVHandler( void );
    extern void xPortSysTickHandler( void );
    extern void vPortSVCHandler( void );
    extern cyisraddress CyRamVectors[];

	/* Install the OS Interrupt Handlers. */
	CyRamVectors[ 11 ] = ( cyisraddress ) vPortSVCHandler;
	CyRamVectors[ 14 ] = ( cyisraddress ) xPortPendSVHandler;
	CyRamVectors[ 15 ] = ( cyisraddress ) xPortSysTickHandler;
}

/*
 * When a contamination occurs gameTask calls this function.
 * 
 */
void releaseContamination( void )
{
    xSemaphoreGive(s1);
}

/*
 * When gameTask releases a vaccine clue it calls this function.
 * 
 */
void releaseClue( Token clue )
{
    xQueueSendToBack(q, (void*)&clue, portMAX_DELAY);
}

/*
 * 
 * 
 */
void quarantineTask()
{
    for(;;)
    {
        xSemaphoreTake(s1, portMAX_DELAY);
        quarantine();
    }
}

/*
 * 
 * 
 */
void vaccineTask()
{
    Token vaccine, clue;
    for(;;)
    {
        xQueueReceive(q, (void*)&clue, portMAX_DELAY);
        xSemaphoreTake(s2, portMAX_DELAY);
        vaccine = assignMissionToLab(clue);
        xSemaphoreGive(s2);
        shipVaccine(vaccine); 
    }
}

/*
 * 
 * 
 */
void screenUpdateTask()
{
    char numberAsChar[3];
    uint8_t charNbr, lowerBound, cntr;
    for(;;)
    {
        //init.
        lowerBound=0;
        
        //print population cntr
        cntr = getPopulationCntr();
        convertPercentage(cntr, numberAsChar); //convert int to char
        charNbr = (cntr==100)? 2u : 1u; //cntr on 3 or 2 char?
        printCounter(numberAsChar, lowerBound, charNbr); //print cntr
       
        //put space
        lowerBound+=charNbr+1;
        LCD_Position(0u, lowerBound);
        LCD_PutChar(' ');
        
        //print vaccine cntr
        lowerBound++;
        cntr = getVaccineCntr();
        convertPercentage(cntr, numberAsChar);
        charNbr = (cntr==100)? 2u : 1u;
        printCounter(numberAsChar, lowerBound, charNbr);
        
        //put space
        lowerBound+=charNbr+1;
        LCD_Position(0u, lowerBound);
        LCD_PutChar(' ');
        
        //print medecine cntr
        lowerBound++;
        cntr = md;
        convertPercentage(cntr, numberAsChar);
        charNbr = (cntr==100)? 2u : 1u;
        printCounter(numberAsChar, lowerBound, charNbr);
        
        //put space
        lowerBound+=charNbr+1;
        LCD_Position(0u, lowerBound);
        LCD_PutChar(' ');
        
        //LCD_PutChar(getPopulationCntr());
        vTaskDelay(200u);
    }
}

void printCounter(char* numberAsChar, uint8_t lowerBound, uint8_t charNbr)
{
    uint8_t i, startAtZero=(charNbr==2)?0:1;
    for(i=0 ; i<charNbr+1; i++)
    {
        LCD_Position(0u, lowerBound+i);
        LCD_PutChar(numberAsChar[i+startAtZero]);
    }
}

void convertPercentage(uint8_t number, char* numberAsChar)
{
    numberAsChar[0] = number/100+'0'; //hundreds
    numberAsChar[1] = (number%100)/10+'0'; //dozens
    numberAsChar[2] = number%10+'0'; //unit
}

/*
 * 
 * 
 */
void medicineTask()
{
    Token medicine;
    uint8_t i;
    for(;;)
    {
        for(i=0; i<2; i++)
        {
            xSemaphoreTake(s2, portMAX_DELAY);
            medicine = assignMissionToLab(0);
            xSemaphoreGive(s2);
            shipVaccine(medicine);
            md++;
        }
        vTaskSuspend(medicineHandler);
    }
}

void medicineTimerCallback()
{
    vTaskResume(medicineHandler);
}


/* [] END OF FILE */
