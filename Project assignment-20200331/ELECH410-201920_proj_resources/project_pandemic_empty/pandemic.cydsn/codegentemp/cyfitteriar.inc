;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.3
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2019 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* KB */
KB_KeyboardCol1__0__INTTYPE EQU CYREG_PICU3_INTTYPE0
KB_KeyboardCol1__0__MASK EQU 0x01
KB_KeyboardCol1__0__PC EQU CYREG_PRT3_PC0
KB_KeyboardCol1__0__PORT EQU 3
KB_KeyboardCol1__0__SHIFT EQU 0
KB_KeyboardCol1__AG EQU CYREG_PRT3_AG
KB_KeyboardCol1__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardCol1__BIE EQU CYREG_PRT3_BIE
KB_KeyboardCol1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardCol1__BYP EQU CYREG_PRT3_BYP
KB_KeyboardCol1__CTL EQU CYREG_PRT3_CTL
KB_KeyboardCol1__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardCol1__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardCol1__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardCol1__DR EQU CYREG_PRT3_DR
KB_KeyboardCol1__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardCol1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardCol1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardCol1__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardCol1__MASK EQU 0x01
KB_KeyboardCol1__PORT EQU 3
KB_KeyboardCol1__PRT EQU CYREG_PRT3_PRT
KB_KeyboardCol1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardCol1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardCol1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardCol1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardCol1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardCol1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardCol1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardCol1__PS EQU CYREG_PRT3_PS
KB_KeyboardCol1__SHIFT EQU 0
KB_KeyboardCol1__SLW EQU CYREG_PRT3_SLW
KB_KeyboardCol2__0__INTTYPE EQU CYREG_PICU3_INTTYPE1
KB_KeyboardCol2__0__MASK EQU 0x02
KB_KeyboardCol2__0__PC EQU CYREG_PRT3_PC1
KB_KeyboardCol2__0__PORT EQU 3
KB_KeyboardCol2__0__SHIFT EQU 1
KB_KeyboardCol2__AG EQU CYREG_PRT3_AG
KB_KeyboardCol2__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardCol2__BIE EQU CYREG_PRT3_BIE
KB_KeyboardCol2__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardCol2__BYP EQU CYREG_PRT3_BYP
KB_KeyboardCol2__CTL EQU CYREG_PRT3_CTL
KB_KeyboardCol2__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardCol2__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardCol2__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardCol2__DR EQU CYREG_PRT3_DR
KB_KeyboardCol2__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardCol2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardCol2__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardCol2__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardCol2__MASK EQU 0x02
KB_KeyboardCol2__PORT EQU 3
KB_KeyboardCol2__PRT EQU CYREG_PRT3_PRT
KB_KeyboardCol2__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardCol2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardCol2__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardCol2__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardCol2__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardCol2__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardCol2__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardCol2__PS EQU CYREG_PRT3_PS
KB_KeyboardCol2__SHIFT EQU 1
KB_KeyboardCol2__SLW EQU CYREG_PRT3_SLW
KB_KeyboardCol3__0__INTTYPE EQU CYREG_PICU3_INTTYPE3
KB_KeyboardCol3__0__MASK EQU 0x08
KB_KeyboardCol3__0__PC EQU CYREG_PRT3_PC3
KB_KeyboardCol3__0__PORT EQU 3
KB_KeyboardCol3__0__SHIFT EQU 3
KB_KeyboardCol3__AG EQU CYREG_PRT3_AG
KB_KeyboardCol3__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardCol3__BIE EQU CYREG_PRT3_BIE
KB_KeyboardCol3__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardCol3__BYP EQU CYREG_PRT3_BYP
KB_KeyboardCol3__CTL EQU CYREG_PRT3_CTL
KB_KeyboardCol3__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardCol3__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardCol3__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardCol3__DR EQU CYREG_PRT3_DR
KB_KeyboardCol3__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardCol3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardCol3__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardCol3__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardCol3__MASK EQU 0x08
KB_KeyboardCol3__PORT EQU 3
KB_KeyboardCol3__PRT EQU CYREG_PRT3_PRT
KB_KeyboardCol3__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardCol3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardCol3__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardCol3__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardCol3__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardCol3__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardCol3__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardCol3__PS EQU CYREG_PRT3_PS
KB_KeyboardCol3__SHIFT EQU 3
KB_KeyboardCol3__SLW EQU CYREG_PRT3_SLW
KB_KeyboardRow0__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
KB_KeyboardRow0__0__MASK EQU 0x10
KB_KeyboardRow0__0__PC EQU CYREG_PRT3_PC4
KB_KeyboardRow0__0__PORT EQU 3
KB_KeyboardRow0__0__SHIFT EQU 4
KB_KeyboardRow0__AG EQU CYREG_PRT3_AG
KB_KeyboardRow0__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardRow0__BIE EQU CYREG_PRT3_BIE
KB_KeyboardRow0__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardRow0__BYP EQU CYREG_PRT3_BYP
KB_KeyboardRow0__CTL EQU CYREG_PRT3_CTL
KB_KeyboardRow0__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardRow0__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardRow0__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardRow0__DR EQU CYREG_PRT3_DR
KB_KeyboardRow0__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardRow0__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardRow0__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardRow0__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardRow0__MASK EQU 0x10
KB_KeyboardRow0__PORT EQU 3
KB_KeyboardRow0__PRT EQU CYREG_PRT3_PRT
KB_KeyboardRow0__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardRow0__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardRow0__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardRow0__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardRow0__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardRow0__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardRow0__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardRow0__PS EQU CYREG_PRT3_PS
KB_KeyboardRow0__SHIFT EQU 4
KB_KeyboardRow0__SLW EQU CYREG_PRT3_SLW
KB_KeyboardRow1__0__INTTYPE EQU CYREG_PICU3_INTTYPE5
KB_KeyboardRow1__0__MASK EQU 0x20
KB_KeyboardRow1__0__PC EQU CYREG_PRT3_PC5
KB_KeyboardRow1__0__PORT EQU 3
KB_KeyboardRow1__0__SHIFT EQU 5
KB_KeyboardRow1__AG EQU CYREG_PRT3_AG
KB_KeyboardRow1__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardRow1__BIE EQU CYREG_PRT3_BIE
KB_KeyboardRow1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardRow1__BYP EQU CYREG_PRT3_BYP
KB_KeyboardRow1__CTL EQU CYREG_PRT3_CTL
KB_KeyboardRow1__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardRow1__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardRow1__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardRow1__DR EQU CYREG_PRT3_DR
KB_KeyboardRow1__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardRow1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardRow1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardRow1__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardRow1__MASK EQU 0x20
KB_KeyboardRow1__PORT EQU 3
KB_KeyboardRow1__PRT EQU CYREG_PRT3_PRT
KB_KeyboardRow1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardRow1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardRow1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardRow1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardRow1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardRow1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardRow1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardRow1__PS EQU CYREG_PRT3_PS
KB_KeyboardRow1__SHIFT EQU 5
KB_KeyboardRow1__SLW EQU CYREG_PRT3_SLW
KB_KeyboardRow2__0__INTTYPE EQU CYREG_PICU3_INTTYPE6
KB_KeyboardRow2__0__MASK EQU 0x40
KB_KeyboardRow2__0__PC EQU CYREG_PRT3_PC6
KB_KeyboardRow2__0__PORT EQU 3
KB_KeyboardRow2__0__SHIFT EQU 6
KB_KeyboardRow2__AG EQU CYREG_PRT3_AG
KB_KeyboardRow2__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardRow2__BIE EQU CYREG_PRT3_BIE
KB_KeyboardRow2__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardRow2__BYP EQU CYREG_PRT3_BYP
KB_KeyboardRow2__CTL EQU CYREG_PRT3_CTL
KB_KeyboardRow2__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardRow2__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardRow2__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardRow2__DR EQU CYREG_PRT3_DR
KB_KeyboardRow2__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardRow2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardRow2__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardRow2__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardRow2__MASK EQU 0x40
KB_KeyboardRow2__PORT EQU 3
KB_KeyboardRow2__PRT EQU CYREG_PRT3_PRT
KB_KeyboardRow2__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardRow2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardRow2__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardRow2__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardRow2__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardRow2__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardRow2__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardRow2__PS EQU CYREG_PRT3_PS
KB_KeyboardRow2__SHIFT EQU 6
KB_KeyboardRow2__SLW EQU CYREG_PRT3_SLW
KB_KeyboardRow3__0__INTTYPE EQU CYREG_PICU3_INTTYPE7
KB_KeyboardRow3__0__MASK EQU 0x80
KB_KeyboardRow3__0__PC EQU CYREG_PRT3_PC7
KB_KeyboardRow3__0__PORT EQU 3
KB_KeyboardRow3__0__SHIFT EQU 7
KB_KeyboardRow3__AG EQU CYREG_PRT3_AG
KB_KeyboardRow3__AMUX EQU CYREG_PRT3_AMUX
KB_KeyboardRow3__BIE EQU CYREG_PRT3_BIE
KB_KeyboardRow3__BIT_MASK EQU CYREG_PRT3_BIT_MASK
KB_KeyboardRow3__BYP EQU CYREG_PRT3_BYP
KB_KeyboardRow3__CTL EQU CYREG_PRT3_CTL
KB_KeyboardRow3__DM0 EQU CYREG_PRT3_DM0
KB_KeyboardRow3__DM1 EQU CYREG_PRT3_DM1
KB_KeyboardRow3__DM2 EQU CYREG_PRT3_DM2
KB_KeyboardRow3__DR EQU CYREG_PRT3_DR
KB_KeyboardRow3__INP_DIS EQU CYREG_PRT3_INP_DIS
KB_KeyboardRow3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
KB_KeyboardRow3__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
KB_KeyboardRow3__LCD_EN EQU CYREG_PRT3_LCD_EN
KB_KeyboardRow3__MASK EQU 0x80
KB_KeyboardRow3__PORT EQU 3
KB_KeyboardRow3__PRT EQU CYREG_PRT3_PRT
KB_KeyboardRow3__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
KB_KeyboardRow3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
KB_KeyboardRow3__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
KB_KeyboardRow3__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
KB_KeyboardRow3__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
KB_KeyboardRow3__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
KB_KeyboardRow3__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
KB_KeyboardRow3__PS EQU CYREG_PRT3_PS
KB_KeyboardRow3__SHIFT EQU 7
KB_KeyboardRow3__SLW EQU CYREG_PRT3_SLW

/* LCD */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

/* SW1 */
SW1__0__INTTYPE EQU CYREG_PICU12_INTTYPE5
SW1__0__MASK EQU 0x20
SW1__0__PC EQU CYREG_PRT12_PC5
SW1__0__PORT EQU 12
SW1__0__SHIFT EQU 5
SW1__AG EQU CYREG_PRT12_AG
SW1__BIE EQU CYREG_PRT12_BIE
SW1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SW1__BYP EQU CYREG_PRT12_BYP
SW1__DM0 EQU CYREG_PRT12_DM0
SW1__DM1 EQU CYREG_PRT12_DM1
SW1__DM2 EQU CYREG_PRT12_DM2
SW1__DR EQU CYREG_PRT12_DR
SW1__INP_DIS EQU CYREG_PRT12_INP_DIS
SW1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SW1__MASK EQU 0x20
SW1__PORT EQU 12
SW1__PRT EQU CYREG_PRT12_PRT
SW1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SW1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SW1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SW1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SW1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SW1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SW1__PS EQU CYREG_PRT12_PS
SW1__SHIFT EQU 5
SW1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SW1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SW1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SW1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SW1__SLW EQU CYREG_PRT12_SLW

/* SW2 */
SW2__0__INTTYPE EQU CYREG_PICU12_INTTYPE4
SW2__0__MASK EQU 0x10
SW2__0__PC EQU CYREG_PRT12_PC4
SW2__0__PORT EQU 12
SW2__0__SHIFT EQU 4
SW2__AG EQU CYREG_PRT12_AG
SW2__BIE EQU CYREG_PRT12_BIE
SW2__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SW2__BYP EQU CYREG_PRT12_BYP
SW2__DM0 EQU CYREG_PRT12_DM0
SW2__DM1 EQU CYREG_PRT12_DM1
SW2__DM2 EQU CYREG_PRT12_DM2
SW2__DR EQU CYREG_PRT12_DR
SW2__INP_DIS EQU CYREG_PRT12_INP_DIS
SW2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SW2__MASK EQU 0x10
SW2__PORT EQU 12
SW2__PRT EQU CYREG_PRT12_PRT
SW2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SW2__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SW2__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SW2__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SW2__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SW2__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SW2__PS EQU CYREG_PRT12_PS
SW2__SHIFT EQU 4
SW2__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SW2__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SW2__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SW2__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SW2__SLW EQU CYREG_PRT12_SLW

/* SW3 */
SW3__0__INTTYPE EQU CYREG_PICU12_INTTYPE3
SW3__0__MASK EQU 0x08
SW3__0__PC EQU CYREG_PRT12_PC3
SW3__0__PORT EQU 12
SW3__0__SHIFT EQU 3
SW3__AG EQU CYREG_PRT12_AG
SW3__BIE EQU CYREG_PRT12_BIE
SW3__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SW3__BYP EQU CYREG_PRT12_BYP
SW3__DM0 EQU CYREG_PRT12_DM0
SW3__DM1 EQU CYREG_PRT12_DM1
SW3__DM2 EQU CYREG_PRT12_DM2
SW3__DR EQU CYREG_PRT12_DR
SW3__INP_DIS EQU CYREG_PRT12_INP_DIS
SW3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SW3__MASK EQU 0x08
SW3__PORT EQU 12
SW3__PRT EQU CYREG_PRT12_PRT
SW3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SW3__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SW3__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SW3__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SW3__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SW3__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SW3__PS EQU CYREG_PRT12_PS
SW3__SHIFT EQU 3
SW3__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SW3__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SW3__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SW3__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SW3__SLW EQU CYREG_PRT12_SLW

/* SW4 */
SW4__0__INTTYPE EQU CYREG_PICU12_INTTYPE2
SW4__0__MASK EQU 0x04
SW4__0__PC EQU CYREG_PRT12_PC2
SW4__0__PORT EQU 12
SW4__0__SHIFT EQU 2
SW4__AG EQU CYREG_PRT12_AG
SW4__BIE EQU CYREG_PRT12_BIE
SW4__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SW4__BYP EQU CYREG_PRT12_BYP
SW4__DM0 EQU CYREG_PRT12_DM0
SW4__DM1 EQU CYREG_PRT12_DM1
SW4__DM2 EQU CYREG_PRT12_DM2
SW4__DR EQU CYREG_PRT12_DR
SW4__INP_DIS EQU CYREG_PRT12_INP_DIS
SW4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SW4__MASK EQU 0x04
SW4__PORT EQU 12
SW4__PRT EQU CYREG_PRT12_PRT
SW4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SW4__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SW4__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SW4__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SW4__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SW4__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SW4__PS EQU CYREG_PRT12_PS
SW4__SHIFT EQU 2
SW4__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SW4__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SW4__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SW4__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SW4__SLW EQU CYREG_PRT12_SLW

/* LED1 */
LED1__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
LED1__0__MASK EQU 0x01
LED1__0__PC EQU CYREG_PRT0_PC0
LED1__0__PORT EQU 0
LED1__0__SHIFT EQU 0
LED1__AG EQU CYREG_PRT0_AG
LED1__AMUX EQU CYREG_PRT0_AMUX
LED1__BIE EQU CYREG_PRT0_BIE
LED1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
LED1__BYP EQU CYREG_PRT0_BYP
LED1__CTL EQU CYREG_PRT0_CTL
LED1__DM0 EQU CYREG_PRT0_DM0
LED1__DM1 EQU CYREG_PRT0_DM1
LED1__DM2 EQU CYREG_PRT0_DM2
LED1__DR EQU CYREG_PRT0_DR
LED1__INP_DIS EQU CYREG_PRT0_INP_DIS
LED1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
LED1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
LED1__LCD_EN EQU CYREG_PRT0_LCD_EN
LED1__MASK EQU 0x01
LED1__PORT EQU 0
LED1__PRT EQU CYREG_PRT0_PRT
LED1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
LED1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
LED1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
LED1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
LED1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
LED1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
LED1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
LED1__PS EQU CYREG_PRT0_PS
LED1__SHIFT EQU 0
LED1__SLW EQU CYREG_PRT0_SLW

/* LED2 */
LED2__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
LED2__0__MASK EQU 0x02
LED2__0__PC EQU CYREG_PRT0_PC1
LED2__0__PORT EQU 0
LED2__0__SHIFT EQU 1
LED2__AG EQU CYREG_PRT0_AG
LED2__AMUX EQU CYREG_PRT0_AMUX
LED2__BIE EQU CYREG_PRT0_BIE
LED2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
LED2__BYP EQU CYREG_PRT0_BYP
LED2__CTL EQU CYREG_PRT0_CTL
LED2__DM0 EQU CYREG_PRT0_DM0
LED2__DM1 EQU CYREG_PRT0_DM1
LED2__DM2 EQU CYREG_PRT0_DM2
LED2__DR EQU CYREG_PRT0_DR
LED2__INP_DIS EQU CYREG_PRT0_INP_DIS
LED2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
LED2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
LED2__LCD_EN EQU CYREG_PRT0_LCD_EN
LED2__MASK EQU 0x02
LED2__PORT EQU 0
LED2__PRT EQU CYREG_PRT0_PRT
LED2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
LED2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
LED2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
LED2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
LED2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
LED2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
LED2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
LED2__PS EQU CYREG_PRT0_PS
LED2__SHIFT EQU 1
LED2__SLW EQU CYREG_PRT0_SLW

/* LED3 */
LED3__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
LED3__0__MASK EQU 0x20
LED3__0__PC EQU CYREG_PRT0_PC5
LED3__0__PORT EQU 0
LED3__0__SHIFT EQU 5
LED3__AG EQU CYREG_PRT0_AG
LED3__AMUX EQU CYREG_PRT0_AMUX
LED3__BIE EQU CYREG_PRT0_BIE
LED3__BIT_MASK EQU CYREG_PRT0_BIT_MASK
LED3__BYP EQU CYREG_PRT0_BYP
LED3__CTL EQU CYREG_PRT0_CTL
LED3__DM0 EQU CYREG_PRT0_DM0
LED3__DM1 EQU CYREG_PRT0_DM1
LED3__DM2 EQU CYREG_PRT0_DM2
LED3__DR EQU CYREG_PRT0_DR
LED3__INP_DIS EQU CYREG_PRT0_INP_DIS
LED3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
LED3__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
LED3__LCD_EN EQU CYREG_PRT0_LCD_EN
LED3__MASK EQU 0x20
LED3__PORT EQU 0
LED3__PRT EQU CYREG_PRT0_PRT
LED3__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
LED3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
LED3__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
LED3__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
LED3__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
LED3__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
LED3__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
LED3__PS EQU CYREG_PRT0_PS
LED3__SHIFT EQU 5
LED3__SLW EQU CYREG_PRT0_SLW

/* LED4 */
LED4__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
LED4__0__MASK EQU 0x40
LED4__0__PC EQU CYREG_PRT0_PC6
LED4__0__PORT EQU 0
LED4__0__SHIFT EQU 6
LED4__AG EQU CYREG_PRT0_AG
LED4__AMUX EQU CYREG_PRT0_AMUX
LED4__BIE EQU CYREG_PRT0_BIE
LED4__BIT_MASK EQU CYREG_PRT0_BIT_MASK
LED4__BYP EQU CYREG_PRT0_BYP
LED4__CTL EQU CYREG_PRT0_CTL
LED4__DM0 EQU CYREG_PRT0_DM0
LED4__DM1 EQU CYREG_PRT0_DM1
LED4__DM2 EQU CYREG_PRT0_DM2
LED4__DR EQU CYREG_PRT0_DR
LED4__INP_DIS EQU CYREG_PRT0_INP_DIS
LED4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
LED4__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
LED4__LCD_EN EQU CYREG_PRT0_LCD_EN
LED4__MASK EQU 0x40
LED4__PORT EQU 0
LED4__PRT EQU CYREG_PRT0_PRT
LED4__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
LED4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
LED4__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
LED4__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
LED4__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
LED4__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
LED4__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
LED4__PS EQU CYREG_PRT0_PS
LED4__SHIFT EQU 6
LED4__SLW EQU CYREG_PRT0_SLW

/* GPIOJ11 */
GPIOJ11__0__INTTYPE EQU CYREG_PICU15_INTTYPE0
GPIOJ11__0__MASK EQU 0x01
GPIOJ11__0__PC EQU CYREG_IO_PC_PRT15_PC0
GPIOJ11__0__PORT EQU 15
GPIOJ11__0__SHIFT EQU 0
GPIOJ11__AG EQU CYREG_PRT15_AG
GPIOJ11__AMUX EQU CYREG_PRT15_AMUX
GPIOJ11__BIE EQU CYREG_PRT15_BIE
GPIOJ11__BIT_MASK EQU CYREG_PRT15_BIT_MASK
GPIOJ11__BYP EQU CYREG_PRT15_BYP
GPIOJ11__CTL EQU CYREG_PRT15_CTL
GPIOJ11__DM0 EQU CYREG_PRT15_DM0
GPIOJ11__DM1 EQU CYREG_PRT15_DM1
GPIOJ11__DM2 EQU CYREG_PRT15_DM2
GPIOJ11__DR EQU CYREG_PRT15_DR
GPIOJ11__INP_DIS EQU CYREG_PRT15_INP_DIS
GPIOJ11__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
GPIOJ11__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
GPIOJ11__LCD_EN EQU CYREG_PRT15_LCD_EN
GPIOJ11__MASK EQU 0x01
GPIOJ11__PORT EQU 15
GPIOJ11__PRT EQU CYREG_PRT15_PRT
GPIOJ11__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
GPIOJ11__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
GPIOJ11__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
GPIOJ11__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
GPIOJ11__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
GPIOJ11__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
GPIOJ11__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
GPIOJ11__PS EQU CYREG_PRT15_PS
GPIOJ11__SHIFT EQU 0
GPIOJ11__SLW EQU CYREG_PRT15_SLW

/* GPIOJ12 */
GPIOJ12__0__INTTYPE EQU CYREG_PICU15_INTTYPE1
GPIOJ12__0__MASK EQU 0x02
GPIOJ12__0__PC EQU CYREG_IO_PC_PRT15_PC1
GPIOJ12__0__PORT EQU 15
GPIOJ12__0__SHIFT EQU 1
GPIOJ12__AG EQU CYREG_PRT15_AG
GPIOJ12__AMUX EQU CYREG_PRT15_AMUX
GPIOJ12__BIE EQU CYREG_PRT15_BIE
GPIOJ12__BIT_MASK EQU CYREG_PRT15_BIT_MASK
GPIOJ12__BYP EQU CYREG_PRT15_BYP
GPIOJ12__CTL EQU CYREG_PRT15_CTL
GPIOJ12__DM0 EQU CYREG_PRT15_DM0
GPIOJ12__DM1 EQU CYREG_PRT15_DM1
GPIOJ12__DM2 EQU CYREG_PRT15_DM2
GPIOJ12__DR EQU CYREG_PRT15_DR
GPIOJ12__INP_DIS EQU CYREG_PRT15_INP_DIS
GPIOJ12__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
GPIOJ12__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
GPIOJ12__LCD_EN EQU CYREG_PRT15_LCD_EN
GPIOJ12__MASK EQU 0x02
GPIOJ12__PORT EQU 15
GPIOJ12__PRT EQU CYREG_PRT15_PRT
GPIOJ12__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
GPIOJ12__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
GPIOJ12__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
GPIOJ12__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
GPIOJ12__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
GPIOJ12__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
GPIOJ12__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
GPIOJ12__PS EQU CYREG_PRT15_PS
GPIOJ12__SHIFT EQU 1
GPIOJ12__SLW EQU CYREG_PRT15_SLW

/* GPIOJ13 */
GPIOJ13__0__INTTYPE EQU CYREG_PICU15_INTTYPE2
GPIOJ13__0__MASK EQU 0x04
GPIOJ13__0__PC EQU CYREG_IO_PC_PRT15_PC2
GPIOJ13__0__PORT EQU 15
GPIOJ13__0__SHIFT EQU 2
GPIOJ13__AG EQU CYREG_PRT15_AG
GPIOJ13__AMUX EQU CYREG_PRT15_AMUX
GPIOJ13__BIE EQU CYREG_PRT15_BIE
GPIOJ13__BIT_MASK EQU CYREG_PRT15_BIT_MASK
GPIOJ13__BYP EQU CYREG_PRT15_BYP
GPIOJ13__CTL EQU CYREG_PRT15_CTL
GPIOJ13__DM0 EQU CYREG_PRT15_DM0
GPIOJ13__DM1 EQU CYREG_PRT15_DM1
GPIOJ13__DM2 EQU CYREG_PRT15_DM2
GPIOJ13__DR EQU CYREG_PRT15_DR
GPIOJ13__INP_DIS EQU CYREG_PRT15_INP_DIS
GPIOJ13__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
GPIOJ13__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
GPIOJ13__LCD_EN EQU CYREG_PRT15_LCD_EN
GPIOJ13__MASK EQU 0x04
GPIOJ13__PORT EQU 15
GPIOJ13__PRT EQU CYREG_PRT15_PRT
GPIOJ13__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
GPIOJ13__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
GPIOJ13__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
GPIOJ13__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
GPIOJ13__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
GPIOJ13__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
GPIOJ13__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
GPIOJ13__PS EQU CYREG_PRT15_PS
GPIOJ13__SHIFT EQU 2
GPIOJ13__SLW EQU CYREG_PRT15_SLW

/* GPIOJ14 */
GPIOJ14__0__INTTYPE EQU CYREG_PICU15_INTTYPE3
GPIOJ14__0__MASK EQU 0x08
GPIOJ14__0__PC EQU CYREG_IO_PC_PRT15_PC3
GPIOJ14__0__PORT EQU 15
GPIOJ14__0__SHIFT EQU 3
GPIOJ14__AG EQU CYREG_PRT15_AG
GPIOJ14__AMUX EQU CYREG_PRT15_AMUX
GPIOJ14__BIE EQU CYREG_PRT15_BIE
GPIOJ14__BIT_MASK EQU CYREG_PRT15_BIT_MASK
GPIOJ14__BYP EQU CYREG_PRT15_BYP
GPIOJ14__CTL EQU CYREG_PRT15_CTL
GPIOJ14__DM0 EQU CYREG_PRT15_DM0
GPIOJ14__DM1 EQU CYREG_PRT15_DM1
GPIOJ14__DM2 EQU CYREG_PRT15_DM2
GPIOJ14__DR EQU CYREG_PRT15_DR
GPIOJ14__INP_DIS EQU CYREG_PRT15_INP_DIS
GPIOJ14__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
GPIOJ14__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
GPIOJ14__LCD_EN EQU CYREG_PRT15_LCD_EN
GPIOJ14__MASK EQU 0x08
GPIOJ14__PORT EQU 15
GPIOJ14__PRT EQU CYREG_PRT15_PRT
GPIOJ14__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
GPIOJ14__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
GPIOJ14__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
GPIOJ14__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
GPIOJ14__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
GPIOJ14__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
GPIOJ14__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
GPIOJ14__PS EQU CYREG_PRT15_PS
GPIOJ14__SHIFT EQU 3
GPIOJ14__SLW EQU CYREG_PRT15_SLW

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 24
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 24
CYDEV_CHIP_MEMBER_4AA EQU 23
CYDEV_CHIP_MEMBER_4AB EQU 28
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4D EQU 18
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 25
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 22
CYDEV_CHIP_MEMBER_4I EQU 30
CYDEV_CHIP_MEMBER_4J EQU 19
CYDEV_CHIP_MEMBER_4K EQU 20
CYDEV_CHIP_MEMBER_4L EQU 29
CYDEV_CHIP_MEMBER_4M EQU 27
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 26
CYDEV_CHIP_MEMBER_4Q EQU 15
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 21
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 16
CYDEV_CHIP_MEMBER_4Z EQU 17
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 31
CYDEV_CHIP_MEMBER_FM3 EQU 35
CYDEV_CHIP_MEMBER_FM4 EQU 36
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 32
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 33
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 34
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
