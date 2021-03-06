/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.3
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2019 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* KB */
.set KB_KeyboardCol1__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set KB_KeyboardCol1__0__MASK, 0x01
.set KB_KeyboardCol1__0__PC, CYREG_PRT3_PC0
.set KB_KeyboardCol1__0__PORT, 3
.set KB_KeyboardCol1__0__SHIFT, 0
.set KB_KeyboardCol1__AG, CYREG_PRT3_AG
.set KB_KeyboardCol1__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardCol1__BIE, CYREG_PRT3_BIE
.set KB_KeyboardCol1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardCol1__BYP, CYREG_PRT3_BYP
.set KB_KeyboardCol1__CTL, CYREG_PRT3_CTL
.set KB_KeyboardCol1__DM0, CYREG_PRT3_DM0
.set KB_KeyboardCol1__DM1, CYREG_PRT3_DM1
.set KB_KeyboardCol1__DM2, CYREG_PRT3_DM2
.set KB_KeyboardCol1__DR, CYREG_PRT3_DR
.set KB_KeyboardCol1__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardCol1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardCol1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardCol1__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardCol1__MASK, 0x01
.set KB_KeyboardCol1__PORT, 3
.set KB_KeyboardCol1__PRT, CYREG_PRT3_PRT
.set KB_KeyboardCol1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardCol1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardCol1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardCol1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardCol1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardCol1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardCol1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardCol1__PS, CYREG_PRT3_PS
.set KB_KeyboardCol1__SHIFT, 0
.set KB_KeyboardCol1__SLW, CYREG_PRT3_SLW
.set KB_KeyboardCol2__0__INTTYPE, CYREG_PICU3_INTTYPE1
.set KB_KeyboardCol2__0__MASK, 0x02
.set KB_KeyboardCol2__0__PC, CYREG_PRT3_PC1
.set KB_KeyboardCol2__0__PORT, 3
.set KB_KeyboardCol2__0__SHIFT, 1
.set KB_KeyboardCol2__AG, CYREG_PRT3_AG
.set KB_KeyboardCol2__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardCol2__BIE, CYREG_PRT3_BIE
.set KB_KeyboardCol2__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardCol2__BYP, CYREG_PRT3_BYP
.set KB_KeyboardCol2__CTL, CYREG_PRT3_CTL
.set KB_KeyboardCol2__DM0, CYREG_PRT3_DM0
.set KB_KeyboardCol2__DM1, CYREG_PRT3_DM1
.set KB_KeyboardCol2__DM2, CYREG_PRT3_DM2
.set KB_KeyboardCol2__DR, CYREG_PRT3_DR
.set KB_KeyboardCol2__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardCol2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardCol2__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardCol2__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardCol2__MASK, 0x02
.set KB_KeyboardCol2__PORT, 3
.set KB_KeyboardCol2__PRT, CYREG_PRT3_PRT
.set KB_KeyboardCol2__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardCol2__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardCol2__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardCol2__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardCol2__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardCol2__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardCol2__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardCol2__PS, CYREG_PRT3_PS
.set KB_KeyboardCol2__SHIFT, 1
.set KB_KeyboardCol2__SLW, CYREG_PRT3_SLW
.set KB_KeyboardCol3__0__INTTYPE, CYREG_PICU3_INTTYPE3
.set KB_KeyboardCol3__0__MASK, 0x08
.set KB_KeyboardCol3__0__PC, CYREG_PRT3_PC3
.set KB_KeyboardCol3__0__PORT, 3
.set KB_KeyboardCol3__0__SHIFT, 3
.set KB_KeyboardCol3__AG, CYREG_PRT3_AG
.set KB_KeyboardCol3__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardCol3__BIE, CYREG_PRT3_BIE
.set KB_KeyboardCol3__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardCol3__BYP, CYREG_PRT3_BYP
.set KB_KeyboardCol3__CTL, CYREG_PRT3_CTL
.set KB_KeyboardCol3__DM0, CYREG_PRT3_DM0
.set KB_KeyboardCol3__DM1, CYREG_PRT3_DM1
.set KB_KeyboardCol3__DM2, CYREG_PRT3_DM2
.set KB_KeyboardCol3__DR, CYREG_PRT3_DR
.set KB_KeyboardCol3__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardCol3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardCol3__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardCol3__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardCol3__MASK, 0x08
.set KB_KeyboardCol3__PORT, 3
.set KB_KeyboardCol3__PRT, CYREG_PRT3_PRT
.set KB_KeyboardCol3__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardCol3__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardCol3__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardCol3__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardCol3__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardCol3__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardCol3__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardCol3__PS, CYREG_PRT3_PS
.set KB_KeyboardCol3__SHIFT, 3
.set KB_KeyboardCol3__SLW, CYREG_PRT3_SLW
.set KB_KeyboardRow0__0__INTTYPE, CYREG_PICU3_INTTYPE4
.set KB_KeyboardRow0__0__MASK, 0x10
.set KB_KeyboardRow0__0__PC, CYREG_PRT3_PC4
.set KB_KeyboardRow0__0__PORT, 3
.set KB_KeyboardRow0__0__SHIFT, 4
.set KB_KeyboardRow0__AG, CYREG_PRT3_AG
.set KB_KeyboardRow0__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardRow0__BIE, CYREG_PRT3_BIE
.set KB_KeyboardRow0__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardRow0__BYP, CYREG_PRT3_BYP
.set KB_KeyboardRow0__CTL, CYREG_PRT3_CTL
.set KB_KeyboardRow0__DM0, CYREG_PRT3_DM0
.set KB_KeyboardRow0__DM1, CYREG_PRT3_DM1
.set KB_KeyboardRow0__DM2, CYREG_PRT3_DM2
.set KB_KeyboardRow0__DR, CYREG_PRT3_DR
.set KB_KeyboardRow0__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardRow0__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardRow0__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardRow0__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardRow0__MASK, 0x10
.set KB_KeyboardRow0__PORT, 3
.set KB_KeyboardRow0__PRT, CYREG_PRT3_PRT
.set KB_KeyboardRow0__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardRow0__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardRow0__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardRow0__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardRow0__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardRow0__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardRow0__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardRow0__PS, CYREG_PRT3_PS
.set KB_KeyboardRow0__SHIFT, 4
.set KB_KeyboardRow0__SLW, CYREG_PRT3_SLW
.set KB_KeyboardRow1__0__INTTYPE, CYREG_PICU3_INTTYPE5
.set KB_KeyboardRow1__0__MASK, 0x20
.set KB_KeyboardRow1__0__PC, CYREG_PRT3_PC5
.set KB_KeyboardRow1__0__PORT, 3
.set KB_KeyboardRow1__0__SHIFT, 5
.set KB_KeyboardRow1__AG, CYREG_PRT3_AG
.set KB_KeyboardRow1__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardRow1__BIE, CYREG_PRT3_BIE
.set KB_KeyboardRow1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardRow1__BYP, CYREG_PRT3_BYP
.set KB_KeyboardRow1__CTL, CYREG_PRT3_CTL
.set KB_KeyboardRow1__DM0, CYREG_PRT3_DM0
.set KB_KeyboardRow1__DM1, CYREG_PRT3_DM1
.set KB_KeyboardRow1__DM2, CYREG_PRT3_DM2
.set KB_KeyboardRow1__DR, CYREG_PRT3_DR
.set KB_KeyboardRow1__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardRow1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardRow1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardRow1__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardRow1__MASK, 0x20
.set KB_KeyboardRow1__PORT, 3
.set KB_KeyboardRow1__PRT, CYREG_PRT3_PRT
.set KB_KeyboardRow1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardRow1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardRow1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardRow1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardRow1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardRow1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardRow1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardRow1__PS, CYREG_PRT3_PS
.set KB_KeyboardRow1__SHIFT, 5
.set KB_KeyboardRow1__SLW, CYREG_PRT3_SLW
.set KB_KeyboardRow2__0__INTTYPE, CYREG_PICU3_INTTYPE6
.set KB_KeyboardRow2__0__MASK, 0x40
.set KB_KeyboardRow2__0__PC, CYREG_PRT3_PC6
.set KB_KeyboardRow2__0__PORT, 3
.set KB_KeyboardRow2__0__SHIFT, 6
.set KB_KeyboardRow2__AG, CYREG_PRT3_AG
.set KB_KeyboardRow2__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardRow2__BIE, CYREG_PRT3_BIE
.set KB_KeyboardRow2__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardRow2__BYP, CYREG_PRT3_BYP
.set KB_KeyboardRow2__CTL, CYREG_PRT3_CTL
.set KB_KeyboardRow2__DM0, CYREG_PRT3_DM0
.set KB_KeyboardRow2__DM1, CYREG_PRT3_DM1
.set KB_KeyboardRow2__DM2, CYREG_PRT3_DM2
.set KB_KeyboardRow2__DR, CYREG_PRT3_DR
.set KB_KeyboardRow2__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardRow2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardRow2__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardRow2__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardRow2__MASK, 0x40
.set KB_KeyboardRow2__PORT, 3
.set KB_KeyboardRow2__PRT, CYREG_PRT3_PRT
.set KB_KeyboardRow2__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardRow2__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardRow2__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardRow2__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardRow2__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardRow2__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardRow2__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardRow2__PS, CYREG_PRT3_PS
.set KB_KeyboardRow2__SHIFT, 6
.set KB_KeyboardRow2__SLW, CYREG_PRT3_SLW
.set KB_KeyboardRow3__0__INTTYPE, CYREG_PICU3_INTTYPE7
.set KB_KeyboardRow3__0__MASK, 0x80
.set KB_KeyboardRow3__0__PC, CYREG_PRT3_PC7
.set KB_KeyboardRow3__0__PORT, 3
.set KB_KeyboardRow3__0__SHIFT, 7
.set KB_KeyboardRow3__AG, CYREG_PRT3_AG
.set KB_KeyboardRow3__AMUX, CYREG_PRT3_AMUX
.set KB_KeyboardRow3__BIE, CYREG_PRT3_BIE
.set KB_KeyboardRow3__BIT_MASK, CYREG_PRT3_BIT_MASK
.set KB_KeyboardRow3__BYP, CYREG_PRT3_BYP
.set KB_KeyboardRow3__CTL, CYREG_PRT3_CTL
.set KB_KeyboardRow3__DM0, CYREG_PRT3_DM0
.set KB_KeyboardRow3__DM1, CYREG_PRT3_DM1
.set KB_KeyboardRow3__DM2, CYREG_PRT3_DM2
.set KB_KeyboardRow3__DR, CYREG_PRT3_DR
.set KB_KeyboardRow3__INP_DIS, CYREG_PRT3_INP_DIS
.set KB_KeyboardRow3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set KB_KeyboardRow3__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set KB_KeyboardRow3__LCD_EN, CYREG_PRT3_LCD_EN
.set KB_KeyboardRow3__MASK, 0x80
.set KB_KeyboardRow3__PORT, 3
.set KB_KeyboardRow3__PRT, CYREG_PRT3_PRT
.set KB_KeyboardRow3__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set KB_KeyboardRow3__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set KB_KeyboardRow3__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set KB_KeyboardRow3__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set KB_KeyboardRow3__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set KB_KeyboardRow3__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set KB_KeyboardRow3__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set KB_KeyboardRow3__PS, CYREG_PRT3_PS
.set KB_KeyboardRow3__SHIFT, 7
.set KB_KeyboardRow3__SLW, CYREG_PRT3_SLW

/* LCD */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU2_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU2_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU2_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU2_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU2_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU2_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT2_AG
.set LCD_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT2_SLW

/* SW1 */
.set SW1__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set SW1__0__MASK, 0x20
.set SW1__0__PC, CYREG_PRT12_PC5
.set SW1__0__PORT, 12
.set SW1__0__SHIFT, 5
.set SW1__AG, CYREG_PRT12_AG
.set SW1__BIE, CYREG_PRT12_BIE
.set SW1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SW1__BYP, CYREG_PRT12_BYP
.set SW1__DM0, CYREG_PRT12_DM0
.set SW1__DM1, CYREG_PRT12_DM1
.set SW1__DM2, CYREG_PRT12_DM2
.set SW1__DR, CYREG_PRT12_DR
.set SW1__INP_DIS, CYREG_PRT12_INP_DIS
.set SW1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SW1__MASK, 0x20
.set SW1__PORT, 12
.set SW1__PRT, CYREG_PRT12_PRT
.set SW1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SW1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SW1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SW1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SW1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SW1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SW1__PS, CYREG_PRT12_PS
.set SW1__SHIFT, 5
.set SW1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SW1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SW1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SW1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SW1__SLW, CYREG_PRT12_SLW

/* SW2 */
.set SW2__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set SW2__0__MASK, 0x10
.set SW2__0__PC, CYREG_PRT12_PC4
.set SW2__0__PORT, 12
.set SW2__0__SHIFT, 4
.set SW2__AG, CYREG_PRT12_AG
.set SW2__BIE, CYREG_PRT12_BIE
.set SW2__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SW2__BYP, CYREG_PRT12_BYP
.set SW2__DM0, CYREG_PRT12_DM0
.set SW2__DM1, CYREG_PRT12_DM1
.set SW2__DM2, CYREG_PRT12_DM2
.set SW2__DR, CYREG_PRT12_DR
.set SW2__INP_DIS, CYREG_PRT12_INP_DIS
.set SW2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SW2__MASK, 0x10
.set SW2__PORT, 12
.set SW2__PRT, CYREG_PRT12_PRT
.set SW2__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SW2__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SW2__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SW2__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SW2__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SW2__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SW2__PS, CYREG_PRT12_PS
.set SW2__SHIFT, 4
.set SW2__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SW2__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SW2__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SW2__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SW2__SLW, CYREG_PRT12_SLW

/* SW3 */
.set SW3__0__INTTYPE, CYREG_PICU12_INTTYPE3
.set SW3__0__MASK, 0x08
.set SW3__0__PC, CYREG_PRT12_PC3
.set SW3__0__PORT, 12
.set SW3__0__SHIFT, 3
.set SW3__AG, CYREG_PRT12_AG
.set SW3__BIE, CYREG_PRT12_BIE
.set SW3__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SW3__BYP, CYREG_PRT12_BYP
.set SW3__DM0, CYREG_PRT12_DM0
.set SW3__DM1, CYREG_PRT12_DM1
.set SW3__DM2, CYREG_PRT12_DM2
.set SW3__DR, CYREG_PRT12_DR
.set SW3__INP_DIS, CYREG_PRT12_INP_DIS
.set SW3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SW3__MASK, 0x08
.set SW3__PORT, 12
.set SW3__PRT, CYREG_PRT12_PRT
.set SW3__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SW3__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SW3__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SW3__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SW3__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SW3__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SW3__PS, CYREG_PRT12_PS
.set SW3__SHIFT, 3
.set SW3__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SW3__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SW3__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SW3__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SW3__SLW, CYREG_PRT12_SLW

/* SW4 */
.set SW4__0__INTTYPE, CYREG_PICU12_INTTYPE2
.set SW4__0__MASK, 0x04
.set SW4__0__PC, CYREG_PRT12_PC2
.set SW4__0__PORT, 12
.set SW4__0__SHIFT, 2
.set SW4__AG, CYREG_PRT12_AG
.set SW4__BIE, CYREG_PRT12_BIE
.set SW4__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SW4__BYP, CYREG_PRT12_BYP
.set SW4__DM0, CYREG_PRT12_DM0
.set SW4__DM1, CYREG_PRT12_DM1
.set SW4__DM2, CYREG_PRT12_DM2
.set SW4__DR, CYREG_PRT12_DR
.set SW4__INP_DIS, CYREG_PRT12_INP_DIS
.set SW4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SW4__MASK, 0x04
.set SW4__PORT, 12
.set SW4__PRT, CYREG_PRT12_PRT
.set SW4__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SW4__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SW4__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SW4__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SW4__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SW4__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SW4__PS, CYREG_PRT12_PS
.set SW4__SHIFT, 2
.set SW4__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SW4__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SW4__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SW4__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SW4__SLW, CYREG_PRT12_SLW

/* LED1 */
.set LED1__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set LED1__0__MASK, 0x01
.set LED1__0__PC, CYREG_PRT0_PC0
.set LED1__0__PORT, 0
.set LED1__0__SHIFT, 0
.set LED1__AG, CYREG_PRT0_AG
.set LED1__AMUX, CYREG_PRT0_AMUX
.set LED1__BIE, CYREG_PRT0_BIE
.set LED1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED1__BYP, CYREG_PRT0_BYP
.set LED1__CTL, CYREG_PRT0_CTL
.set LED1__DM0, CYREG_PRT0_DM0
.set LED1__DM1, CYREG_PRT0_DM1
.set LED1__DM2, CYREG_PRT0_DM2
.set LED1__DR, CYREG_PRT0_DR
.set LED1__INP_DIS, CYREG_PRT0_INP_DIS
.set LED1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED1__LCD_EN, CYREG_PRT0_LCD_EN
.set LED1__MASK, 0x01
.set LED1__PORT, 0
.set LED1__PRT, CYREG_PRT0_PRT
.set LED1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED1__PS, CYREG_PRT0_PS
.set LED1__SHIFT, 0
.set LED1__SLW, CYREG_PRT0_SLW

/* LED2 */
.set LED2__0__INTTYPE, CYREG_PICU0_INTTYPE1
.set LED2__0__MASK, 0x02
.set LED2__0__PC, CYREG_PRT0_PC1
.set LED2__0__PORT, 0
.set LED2__0__SHIFT, 1
.set LED2__AG, CYREG_PRT0_AG
.set LED2__AMUX, CYREG_PRT0_AMUX
.set LED2__BIE, CYREG_PRT0_BIE
.set LED2__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED2__BYP, CYREG_PRT0_BYP
.set LED2__CTL, CYREG_PRT0_CTL
.set LED2__DM0, CYREG_PRT0_DM0
.set LED2__DM1, CYREG_PRT0_DM1
.set LED2__DM2, CYREG_PRT0_DM2
.set LED2__DR, CYREG_PRT0_DR
.set LED2__INP_DIS, CYREG_PRT0_INP_DIS
.set LED2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED2__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED2__LCD_EN, CYREG_PRT0_LCD_EN
.set LED2__MASK, 0x02
.set LED2__PORT, 0
.set LED2__PRT, CYREG_PRT0_PRT
.set LED2__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED2__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED2__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED2__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED2__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED2__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED2__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED2__PS, CYREG_PRT0_PS
.set LED2__SHIFT, 1
.set LED2__SLW, CYREG_PRT0_SLW

/* LED3 */
.set LED3__0__INTTYPE, CYREG_PICU0_INTTYPE5
.set LED3__0__MASK, 0x20
.set LED3__0__PC, CYREG_PRT0_PC5
.set LED3__0__PORT, 0
.set LED3__0__SHIFT, 5
.set LED3__AG, CYREG_PRT0_AG
.set LED3__AMUX, CYREG_PRT0_AMUX
.set LED3__BIE, CYREG_PRT0_BIE
.set LED3__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED3__BYP, CYREG_PRT0_BYP
.set LED3__CTL, CYREG_PRT0_CTL
.set LED3__DM0, CYREG_PRT0_DM0
.set LED3__DM1, CYREG_PRT0_DM1
.set LED3__DM2, CYREG_PRT0_DM2
.set LED3__DR, CYREG_PRT0_DR
.set LED3__INP_DIS, CYREG_PRT0_INP_DIS
.set LED3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED3__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED3__LCD_EN, CYREG_PRT0_LCD_EN
.set LED3__MASK, 0x20
.set LED3__PORT, 0
.set LED3__PRT, CYREG_PRT0_PRT
.set LED3__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED3__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED3__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED3__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED3__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED3__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED3__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED3__PS, CYREG_PRT0_PS
.set LED3__SHIFT, 5
.set LED3__SLW, CYREG_PRT0_SLW

/* LED4 */
.set LED4__0__INTTYPE, CYREG_PICU0_INTTYPE6
.set LED4__0__MASK, 0x40
.set LED4__0__PC, CYREG_PRT0_PC6
.set LED4__0__PORT, 0
.set LED4__0__SHIFT, 6
.set LED4__AG, CYREG_PRT0_AG
.set LED4__AMUX, CYREG_PRT0_AMUX
.set LED4__BIE, CYREG_PRT0_BIE
.set LED4__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED4__BYP, CYREG_PRT0_BYP
.set LED4__CTL, CYREG_PRT0_CTL
.set LED4__DM0, CYREG_PRT0_DM0
.set LED4__DM1, CYREG_PRT0_DM1
.set LED4__DM2, CYREG_PRT0_DM2
.set LED4__DR, CYREG_PRT0_DR
.set LED4__INP_DIS, CYREG_PRT0_INP_DIS
.set LED4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED4__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED4__LCD_EN, CYREG_PRT0_LCD_EN
.set LED4__MASK, 0x40
.set LED4__PORT, 0
.set LED4__PRT, CYREG_PRT0_PRT
.set LED4__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED4__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED4__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED4__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED4__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED4__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED4__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED4__PS, CYREG_PRT0_PS
.set LED4__SHIFT, 6
.set LED4__SLW, CYREG_PRT0_SLW

/* GPIOJ11 */
.set GPIOJ11__0__INTTYPE, CYREG_PICU15_INTTYPE0
.set GPIOJ11__0__MASK, 0x01
.set GPIOJ11__0__PC, CYREG_IO_PC_PRT15_PC0
.set GPIOJ11__0__PORT, 15
.set GPIOJ11__0__SHIFT, 0
.set GPIOJ11__AG, CYREG_PRT15_AG
.set GPIOJ11__AMUX, CYREG_PRT15_AMUX
.set GPIOJ11__BIE, CYREG_PRT15_BIE
.set GPIOJ11__BIT_MASK, CYREG_PRT15_BIT_MASK
.set GPIOJ11__BYP, CYREG_PRT15_BYP
.set GPIOJ11__CTL, CYREG_PRT15_CTL
.set GPIOJ11__DM0, CYREG_PRT15_DM0
.set GPIOJ11__DM1, CYREG_PRT15_DM1
.set GPIOJ11__DM2, CYREG_PRT15_DM2
.set GPIOJ11__DR, CYREG_PRT15_DR
.set GPIOJ11__INP_DIS, CYREG_PRT15_INP_DIS
.set GPIOJ11__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set GPIOJ11__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set GPIOJ11__LCD_EN, CYREG_PRT15_LCD_EN
.set GPIOJ11__MASK, 0x01
.set GPIOJ11__PORT, 15
.set GPIOJ11__PRT, CYREG_PRT15_PRT
.set GPIOJ11__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set GPIOJ11__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set GPIOJ11__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set GPIOJ11__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set GPIOJ11__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set GPIOJ11__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set GPIOJ11__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set GPIOJ11__PS, CYREG_PRT15_PS
.set GPIOJ11__SHIFT, 0
.set GPIOJ11__SLW, CYREG_PRT15_SLW

/* GPIOJ12 */
.set GPIOJ12__0__INTTYPE, CYREG_PICU15_INTTYPE1
.set GPIOJ12__0__MASK, 0x02
.set GPIOJ12__0__PC, CYREG_IO_PC_PRT15_PC1
.set GPIOJ12__0__PORT, 15
.set GPIOJ12__0__SHIFT, 1
.set GPIOJ12__AG, CYREG_PRT15_AG
.set GPIOJ12__AMUX, CYREG_PRT15_AMUX
.set GPIOJ12__BIE, CYREG_PRT15_BIE
.set GPIOJ12__BIT_MASK, CYREG_PRT15_BIT_MASK
.set GPIOJ12__BYP, CYREG_PRT15_BYP
.set GPIOJ12__CTL, CYREG_PRT15_CTL
.set GPIOJ12__DM0, CYREG_PRT15_DM0
.set GPIOJ12__DM1, CYREG_PRT15_DM1
.set GPIOJ12__DM2, CYREG_PRT15_DM2
.set GPIOJ12__DR, CYREG_PRT15_DR
.set GPIOJ12__INP_DIS, CYREG_PRT15_INP_DIS
.set GPIOJ12__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set GPIOJ12__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set GPIOJ12__LCD_EN, CYREG_PRT15_LCD_EN
.set GPIOJ12__MASK, 0x02
.set GPIOJ12__PORT, 15
.set GPIOJ12__PRT, CYREG_PRT15_PRT
.set GPIOJ12__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set GPIOJ12__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set GPIOJ12__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set GPIOJ12__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set GPIOJ12__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set GPIOJ12__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set GPIOJ12__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set GPIOJ12__PS, CYREG_PRT15_PS
.set GPIOJ12__SHIFT, 1
.set GPIOJ12__SLW, CYREG_PRT15_SLW

/* GPIOJ13 */
.set GPIOJ13__0__INTTYPE, CYREG_PICU15_INTTYPE2
.set GPIOJ13__0__MASK, 0x04
.set GPIOJ13__0__PC, CYREG_IO_PC_PRT15_PC2
.set GPIOJ13__0__PORT, 15
.set GPIOJ13__0__SHIFT, 2
.set GPIOJ13__AG, CYREG_PRT15_AG
.set GPIOJ13__AMUX, CYREG_PRT15_AMUX
.set GPIOJ13__BIE, CYREG_PRT15_BIE
.set GPIOJ13__BIT_MASK, CYREG_PRT15_BIT_MASK
.set GPIOJ13__BYP, CYREG_PRT15_BYP
.set GPIOJ13__CTL, CYREG_PRT15_CTL
.set GPIOJ13__DM0, CYREG_PRT15_DM0
.set GPIOJ13__DM1, CYREG_PRT15_DM1
.set GPIOJ13__DM2, CYREG_PRT15_DM2
.set GPIOJ13__DR, CYREG_PRT15_DR
.set GPIOJ13__INP_DIS, CYREG_PRT15_INP_DIS
.set GPIOJ13__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set GPIOJ13__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set GPIOJ13__LCD_EN, CYREG_PRT15_LCD_EN
.set GPIOJ13__MASK, 0x04
.set GPIOJ13__PORT, 15
.set GPIOJ13__PRT, CYREG_PRT15_PRT
.set GPIOJ13__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set GPIOJ13__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set GPIOJ13__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set GPIOJ13__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set GPIOJ13__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set GPIOJ13__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set GPIOJ13__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set GPIOJ13__PS, CYREG_PRT15_PS
.set GPIOJ13__SHIFT, 2
.set GPIOJ13__SLW, CYREG_PRT15_SLW

/* GPIOJ14 */
.set GPIOJ14__0__INTTYPE, CYREG_PICU15_INTTYPE3
.set GPIOJ14__0__MASK, 0x08
.set GPIOJ14__0__PC, CYREG_IO_PC_PRT15_PC3
.set GPIOJ14__0__PORT, 15
.set GPIOJ14__0__SHIFT, 3
.set GPIOJ14__AG, CYREG_PRT15_AG
.set GPIOJ14__AMUX, CYREG_PRT15_AMUX
.set GPIOJ14__BIE, CYREG_PRT15_BIE
.set GPIOJ14__BIT_MASK, CYREG_PRT15_BIT_MASK
.set GPIOJ14__BYP, CYREG_PRT15_BYP
.set GPIOJ14__CTL, CYREG_PRT15_CTL
.set GPIOJ14__DM0, CYREG_PRT15_DM0
.set GPIOJ14__DM1, CYREG_PRT15_DM1
.set GPIOJ14__DM2, CYREG_PRT15_DM2
.set GPIOJ14__DR, CYREG_PRT15_DR
.set GPIOJ14__INP_DIS, CYREG_PRT15_INP_DIS
.set GPIOJ14__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set GPIOJ14__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set GPIOJ14__LCD_EN, CYREG_PRT15_LCD_EN
.set GPIOJ14__MASK, 0x08
.set GPIOJ14__PORT, 15
.set GPIOJ14__PRT, CYREG_PRT15_PRT
.set GPIOJ14__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set GPIOJ14__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set GPIOJ14__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set GPIOJ14__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set GPIOJ14__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set GPIOJ14__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set GPIOJ14__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set GPIOJ14__PS, CYREG_PRT15_PS
.set GPIOJ14__SHIFT, 3
.set GPIOJ14__SLW, CYREG_PRT15_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 24
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 24
.set CYDEV_CHIP_MEMBER_4AA, 23
.set CYDEV_CHIP_MEMBER_4AB, 28
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4D, 18
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 25
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 22
.set CYDEV_CHIP_MEMBER_4I, 30
.set CYDEV_CHIP_MEMBER_4J, 19
.set CYDEV_CHIP_MEMBER_4K, 20
.set CYDEV_CHIP_MEMBER_4L, 29
.set CYDEV_CHIP_MEMBER_4M, 27
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 26
.set CYDEV_CHIP_MEMBER_4Q, 15
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 21
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 16
.set CYDEV_CHIP_MEMBER_4Z, 17
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 31
.set CYDEV_CHIP_MEMBER_FM3, 35
.set CYDEV_CHIP_MEMBER_FM4, 36
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 32
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 33
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 34
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
