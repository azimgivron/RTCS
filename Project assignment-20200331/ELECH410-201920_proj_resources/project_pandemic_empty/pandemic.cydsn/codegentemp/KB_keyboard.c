/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "CyLib.h"

//#include "KB_KeyboardPort.h"
//#include "KB_KeyboardCol0.h"
#include "KB_KeyboardCol1.h"
#include "KB_KeyboardCol2.h"
#include "KB_KeyboardCol3.h"

#include "KB_KeyboardRow0.h"
#include "KB_KeyboardRow1.h"
#include "KB_KeyboardRow2.h"
#include "KB_KeyboardRow3.h"

//#define LED_Write KB_KeyboardPort_Write

//#define COL0_Write KB_KeyboardCol0_Write
#define COL1_Write KB_KeyboardCol1_Write
#define COL2_Write KB_KeyboardCol2_Write
#define COL3_Write KB_KeyboardCol3_Write

#define ROW0_Read KB_KeyboardRow0_Read
#define ROW1_Read KB_KeyboardRow1_Read
#define ROW2_Read KB_KeyboardRow2_Read
#define ROW3_Read KB_KeyboardRow3_Read

#define KBD_DELAY   5

void KB_Test(void){
    //LED_Write(1);
    //Kb_KeaboardPort_Write(1);
}

void KB_Start(void){
    COL1_Write(1);
    COL2_Write(1);
    COL3_Write(1);
}

uint8_t KB_Scan(void){
    COL1_Write(0);
    CyDelay(KBD_DELAY);
    if (!ROW0_Read()) {
        COL1_Write(1);
        return('#');
    }
    if (!ROW1_Read()) {
        COL1_Write(1);
        return('9');
    }
    if (!ROW2_Read()) {
        COL1_Write(1);
        return('6');
    }
    if (!ROW3_Read()) {
        COL1_Write(1);
        return('3');
    }
    COL1_Write(1);
    
    COL2_Write(0);
    CyDelay(KBD_DELAY);
    if (!ROW0_Read()) {
        COL2_Write(1);
        return('0');
    }
    if (!ROW1_Read()) {
        COL2_Write(1);
        return('8');
    }
    if (!ROW2_Read()) {
        COL2_Write(1);
        return('5');
    }
    if (!ROW3_Read()) {
        COL2_Write(1);
        return('2');
    }
    COL2_Write(1);

    COL3_Write(0);
    CyDelay(KBD_DELAY);
    if (!ROW0_Read()) {
        COL3_Write(1);
        return('*');
    }
    if (!ROW1_Read()) {
        COL3_Write(1);
        return('7');
    }
    if (!ROW2_Read()) {
        COL3_Write(1);
        return('4');
    }
    if (!ROW3_Read()) {
        COL3_Write(1);
        return('1');
    }
    COL3_Write(1);
    
    return('z');
}

/* [] END OF FILE */
