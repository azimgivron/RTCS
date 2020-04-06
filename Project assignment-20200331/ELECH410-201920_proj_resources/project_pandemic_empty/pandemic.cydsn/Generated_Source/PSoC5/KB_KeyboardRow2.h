/*******************************************************************************
* File Name: KB_KeyboardRow2.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_KB_KeyboardRow2_H) /* Pins KB_KeyboardRow2_H */
#define CY_PINS_KB_KeyboardRow2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "KB_KeyboardRow2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 KB_KeyboardRow2__PORT == 15 && ((KB_KeyboardRow2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    KB_KeyboardRow2_Write(uint8 value);
void    KB_KeyboardRow2_SetDriveMode(uint8 mode);
uint8   KB_KeyboardRow2_ReadDataReg(void);
uint8   KB_KeyboardRow2_Read(void);
void    KB_KeyboardRow2_SetInterruptMode(uint16 position, uint16 mode);
uint8   KB_KeyboardRow2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the KB_KeyboardRow2_SetDriveMode() function.
     *  @{
     */
        #define KB_KeyboardRow2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define KB_KeyboardRow2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define KB_KeyboardRow2_DM_RES_UP          PIN_DM_RES_UP
        #define KB_KeyboardRow2_DM_RES_DWN         PIN_DM_RES_DWN
        #define KB_KeyboardRow2_DM_OD_LO           PIN_DM_OD_LO
        #define KB_KeyboardRow2_DM_OD_HI           PIN_DM_OD_HI
        #define KB_KeyboardRow2_DM_STRONG          PIN_DM_STRONG
        #define KB_KeyboardRow2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define KB_KeyboardRow2_MASK               KB_KeyboardRow2__MASK
#define KB_KeyboardRow2_SHIFT              KB_KeyboardRow2__SHIFT
#define KB_KeyboardRow2_WIDTH              1u

/* Interrupt constants */
#if defined(KB_KeyboardRow2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in KB_KeyboardRow2_SetInterruptMode() function.
     *  @{
     */
        #define KB_KeyboardRow2_INTR_NONE      (uint16)(0x0000u)
        #define KB_KeyboardRow2_INTR_RISING    (uint16)(0x0001u)
        #define KB_KeyboardRow2_INTR_FALLING   (uint16)(0x0002u)
        #define KB_KeyboardRow2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define KB_KeyboardRow2_INTR_MASK      (0x01u) 
#endif /* (KB_KeyboardRow2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define KB_KeyboardRow2_PS                     (* (reg8 *) KB_KeyboardRow2__PS)
/* Data Register */
#define KB_KeyboardRow2_DR                     (* (reg8 *) KB_KeyboardRow2__DR)
/* Port Number */
#define KB_KeyboardRow2_PRT_NUM                (* (reg8 *) KB_KeyboardRow2__PRT) 
/* Connect to Analog Globals */                                                  
#define KB_KeyboardRow2_AG                     (* (reg8 *) KB_KeyboardRow2__AG)                       
/* Analog MUX bux enable */
#define KB_KeyboardRow2_AMUX                   (* (reg8 *) KB_KeyboardRow2__AMUX) 
/* Bidirectional Enable */                                                        
#define KB_KeyboardRow2_BIE                    (* (reg8 *) KB_KeyboardRow2__BIE)
/* Bit-mask for Aliased Register Access */
#define KB_KeyboardRow2_BIT_MASK               (* (reg8 *) KB_KeyboardRow2__BIT_MASK)
/* Bypass Enable */
#define KB_KeyboardRow2_BYP                    (* (reg8 *) KB_KeyboardRow2__BYP)
/* Port wide control signals */                                                   
#define KB_KeyboardRow2_CTL                    (* (reg8 *) KB_KeyboardRow2__CTL)
/* Drive Modes */
#define KB_KeyboardRow2_DM0                    (* (reg8 *) KB_KeyboardRow2__DM0) 
#define KB_KeyboardRow2_DM1                    (* (reg8 *) KB_KeyboardRow2__DM1)
#define KB_KeyboardRow2_DM2                    (* (reg8 *) KB_KeyboardRow2__DM2) 
/* Input Buffer Disable Override */
#define KB_KeyboardRow2_INP_DIS                (* (reg8 *) KB_KeyboardRow2__INP_DIS)
/* LCD Common or Segment Drive */
#define KB_KeyboardRow2_LCD_COM_SEG            (* (reg8 *) KB_KeyboardRow2__LCD_COM_SEG)
/* Enable Segment LCD */
#define KB_KeyboardRow2_LCD_EN                 (* (reg8 *) KB_KeyboardRow2__LCD_EN)
/* Slew Rate Control */
#define KB_KeyboardRow2_SLW                    (* (reg8 *) KB_KeyboardRow2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define KB_KeyboardRow2_PRTDSI__CAPS_SEL       (* (reg8 *) KB_KeyboardRow2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define KB_KeyboardRow2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) KB_KeyboardRow2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define KB_KeyboardRow2_PRTDSI__OE_SEL0        (* (reg8 *) KB_KeyboardRow2__PRTDSI__OE_SEL0) 
#define KB_KeyboardRow2_PRTDSI__OE_SEL1        (* (reg8 *) KB_KeyboardRow2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define KB_KeyboardRow2_PRTDSI__OUT_SEL0       (* (reg8 *) KB_KeyboardRow2__PRTDSI__OUT_SEL0) 
#define KB_KeyboardRow2_PRTDSI__OUT_SEL1       (* (reg8 *) KB_KeyboardRow2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define KB_KeyboardRow2_PRTDSI__SYNC_OUT       (* (reg8 *) KB_KeyboardRow2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(KB_KeyboardRow2__SIO_CFG)
    #define KB_KeyboardRow2_SIO_HYST_EN        (* (reg8 *) KB_KeyboardRow2__SIO_HYST_EN)
    #define KB_KeyboardRow2_SIO_REG_HIFREQ     (* (reg8 *) KB_KeyboardRow2__SIO_REG_HIFREQ)
    #define KB_KeyboardRow2_SIO_CFG            (* (reg8 *) KB_KeyboardRow2__SIO_CFG)
    #define KB_KeyboardRow2_SIO_DIFF           (* (reg8 *) KB_KeyboardRow2__SIO_DIFF)
#endif /* (KB_KeyboardRow2__SIO_CFG) */

/* Interrupt Registers */
#if defined(KB_KeyboardRow2__INTSTAT)
    #define KB_KeyboardRow2_INTSTAT            (* (reg8 *) KB_KeyboardRow2__INTSTAT)
    #define KB_KeyboardRow2_SNAP               (* (reg8 *) KB_KeyboardRow2__SNAP)
    
	#define KB_KeyboardRow2_0_INTTYPE_REG 		(* (reg8 *) KB_KeyboardRow2__0__INTTYPE)
#endif /* (KB_KeyboardRow2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_KB_KeyboardRow2_H */


/* [] END OF FILE */
