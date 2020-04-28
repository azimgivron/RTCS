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
#define VACCINE_PRODUCER_TASK_NAME ("vaccine_producer_task")
#define SCREEN_UPDATE_TASK_NAME ("screen_update_task")
#define MEDICINE_PRODUCER_TASK_NAME ("medicine_producer_task")

/* Task priority */
#define GAME_PRIORITY (20)
#define QUARANTINE_PRIORITY (18)
#define SCREEN_UPDATE_PRIORITY (16)
#define VACCINE_PRODUCER_PRIORITY (14)
#define MEDICINE_PRODUCER_PRIORITY (12)  

/* Semaphore */
SemaphoreHandle_t labMutex, contaminationSemaphore;
QueueHandle_t clueQueue;

/* Task handlers */
TaskHandle_t gameHandler, quarantineHandler, vaccineProducerHandler,
screenUpdateHandler, medicineProducerHandler;

/*
 * Installs the RTOS interrupt handlers.
 */
static void freeRTOSInit( void );

/* Task declarations */
void quarantineTask();
void vaccineProducerTask();
void screenUpdateTask();
void medicineProducerTask();

/* Other functions declarations */
void printCounter(char* numberAsChar, uint8_t lowerBound, uint8_t charNbr);
void convertPercentage(uint8_t number, char* numberAsChar);
void putCntrOnLCD(uint8_t cntr, uint8_t* lowerBound);
void putSpaceOnLCD(uint8_t lowerBound);

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
    xTaskCreate( vaccineProducerTask, VACCINE_PRODUCER_TASK_NAME, TASK_STACK_SIZE, NULL, VACCINE_PRODUCER_PRIORITY, &vaccineProducerHandler );
    xTaskCreate( screenUpdateTask, SCREEN_UPDATE_TASK_NAME, TASK_STACK_SIZE, NULL, SCREEN_UPDATE_PRIORITY, &screenUpdateHandler );
    xTaskCreate( medicineProducerTask, MEDICINE_PRODUCER_TASK_NAME, TASK_STACK_SIZE, NULL, MEDICINE_PRODUCER_PRIORITY, &medicineProducerHandler );
    
    contaminationSemaphore = xSemaphoreCreateBinary();
    labMutex = xSemaphoreCreateMutex();
    clueQueue = xQueueCreate(1, sizeof(Token));

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
 * Notify the quarantine task thatthe contamination has been released
 * 
 */
void releaseContamination( void )
{
    xSemaphoreGive(contaminationSemaphore);
}

/*
 * Notify the vaccine producer that a clue has been released
 * 
 */
void releaseClue( Token clue )
{
    xQueueSendToBack(clueQueue, (void*)&clue, 0);
}

/*
 * Wait for contamination and put quarantine in place
 * 
 */
void quarantineTask()
{
    for(;;)
    {
        xSemaphoreTake(contaminationSemaphore, portMAX_DELAY);
        quarantine();
    }
}

/*
 * Wait for clues and process them
 * 
 */
void vaccineProducerTask()
{
    Token clue, vaccine;
    for(;;)
    {
        xQueueReceive(clueQueue, (void*)&(clue), portMAX_DELAY);
        xSemaphoreTake(labMutex, portMAX_DELAY);
        vaccine = assignMissionToLab(clue);
        xSemaphoreGive(labMutex);
        shipVaccine(vaccine);
    }
}

/*
 * Update counters on LCD
 * 
 */
void screenUpdateTask()
{
    
    uint8_t lowerBound;
    for(;;)
    {
        lowerBound=0; //init.
        
        putCntrOnLCD(getPopulationCntr(), &lowerBound); //print population cntr
        lowerBound++;
        
        putCntrOnLCD(getVaccineCntr(), &lowerBound);
        lowerBound++;
        
        putCntrOnLCD(getMedicineCntr(), &lowerBound);
        
        vTaskDelay(200u);
    }
}

/*
 * Put counter chararcter on the LCD at position @lowerBound
 * 
 */
void putCntrOnLCD(uint8_t cntr, uint8_t* lowerBound)
{   
    char numberAsChar[3];
    uint8_t charNbr;
    
    convertPercentage(cntr, numberAsChar);
    if(cntr>=100) charNbr=2u;
    else if(cntr>=10) charNbr=1u;
    else charNbr=0u;
    printCounter(numberAsChar, *lowerBound, charNbr);
    *lowerBound += charNbr+1;
    putSpaceOnLCD(*lowerBound); //put space
}

/*
 * Put space chararcter on the LCD at position @lowerBound
 * 
 */
void putSpaceOnLCD(uint8_t lowerBound)
{
    LCD_Position(0u, lowerBound);
    LCD_PutChar(' ');
}

/*
 * Put the chararcter in @numberAsChar on the LCD at position @lowerBound
 * 
 */
void printCounter(char* numberAsChar, uint8_t lowerBound, uint8_t charNbr)
{
    uint8_t i, startAtZero=2-charNbr;
    for(i=0 ; i<charNbr+1; i++)
    {
        LCD_Position(0u, lowerBound+i);
        LCD_PutChar(numberAsChar[i+startAtZero]);
    }
}

/*
 * Convert a percentage into a string
 * 
 */
void convertPercentage(uint8_t number, char* numberAsChar)
{
    numberAsChar[0] = number/100+'0'; //hundreds
    numberAsChar[1] = (number%100)/10+'0'; //dozens
    numberAsChar[2] = number%10+'0'; //unit
}

/*
 * Produce and ship 5pills at a time
 * 
 */
void medicineProducerTask()
{
    Token medicine[5];
    uint8_t i;
    for(;;)
    {
        for(i=0; i<5; i++)
        {//produce 5pills at a time
            xSemaphoreTake(labMutex, portMAX_DELAY);
            medicine[i] = assignMissionToLab(0);
            xSemaphoreGive(labMutex);
        }//ship the 5pills at a time
        for(i=0; i<5; i++)
        {
            shipMedicine(medicine[i]);
            if(getVaccineCntr()>=100)
            {//end game so terminate the tasks
                vTaskDelete(medicineProducerHandler);
                vTaskDelete(vaccineProducerHandler);
                vTaskDelete(quarantineHandler);
            }
        }
    }
}

/* [] END OF FILE */
