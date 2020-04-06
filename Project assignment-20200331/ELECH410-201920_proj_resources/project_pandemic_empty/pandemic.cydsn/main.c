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

#define GAME_PRIORITY (20)
#define QUARANTINE_PRIORITY (3)
#define VACCINE_PRIORITY (2)
#define SCREEN_UPDATE_PRIORITY (1)
#define MEDICINE_PRIORITY (0)


/* Semaphore */
SemaphoreHandle_t s1, s2;
QueueHandle_t q;

/* Task handlers */
TaskHandle_t gameHandler, quarantineHandler, vaccineHandler,
screenUpdateHandler, medicineHandler;

/*
 * Installs the RTOS interrupt handlers.
 */
static void freeRTOSInit( void );

/* functions declarations */
void quarantineTask();
void vaccineTask();
void screenUpdateTask();
void medicineTask();

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
void releaseContamination( void ){
    xSemaphoreGive(s1);
}

/*
 * When gameTask releases a vaccine clue it calls this function.
 * 
 */
void releaseClue( Token clue ){
    xQueueSendToBack(q, (void*)&clue, portMAX_DELAY);
}

/*
 * 
 * 
 */
void quarantineTask(){
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
void vaccineTask(){
    Token vaccine, clue;
    for(;;)
    {
        xQueueReceive(q, (void*)&clue, portMAX_DELAY);
        
        xSemaphoreTake(s2, portMAX_DELAY);
        vaccine = assignMissionToLab(clue);
        shipVaccine(vaccine); 
        xSemaphoreGive(s2);
    }
}

/*
 * 
 * 
 */
void screenUpdateTask(){
    for(;;)
    {
        LCD_Position(0u, 0u);
        //LCD_PutChar(getPopulationCntr());
        vTaskDelay(200u);
    }
}

/*
 * 
 * 
 */
void medicineTask(){
    Token medicine;
    for(;;)
    {
        xSemaphoreTake(s2, portMAX_DELAY);
        medicine = assignMissionToLab(0);
        shipVaccine(medicine); 
        xSemaphoreGive(s2);
    }
}




/* [] END OF FILE */
