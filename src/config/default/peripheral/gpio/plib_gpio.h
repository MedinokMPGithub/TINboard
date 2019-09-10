/*******************************************************************************
  GPIO PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_gpio.h

  Summary:
    GPIO PLIB Header File

  Description:
    This library provides an interface to control and interact with Parallel
    Input/Output controller (GPIO) module.

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#ifndef PLIB_GPIO_H
#define PLIB_GPIO_H

#include <device.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data types and constants
// *****************************************************************************
// *****************************************************************************

/*** Macros for RFID_EN pin ***/
#define RFID_EN_Set()               (LATGSET = (1<<15))
#define RFID_EN_Clear()             (LATGCLR = (1<<15))
#define RFID_EN_Toggle()            (LATGINV= (1<<15))
#define RFID_EN_Get()               ((PORTG >> 15) & 0x1)
#define RFID_EN_OutputEnable()      (TRISGCLR = (1<<15))
#define RFID_EN_InputEnable()       (TRISGSET = (1<<15))
#define RFID_EN_PIN                  GPIO_PIN_RG15
/*** Macros for GPIO_RA5 pin ***/
#define GPIO_RA5_Set()               (LATASET = (1<<5))
#define GPIO_RA5_Clear()             (LATACLR = (1<<5))
#define GPIO_RA5_Toggle()            (LATAINV= (1<<5))
#define GPIO_RA5_Get()               ((PORTA >> 5) & 0x1)
#define GPIO_RA5_OutputEnable()      (TRISACLR = (1<<5))
#define GPIO_RA5_InputEnable()       (TRISASET = (1<<5))
#define GPIO_RA5_PIN                  GPIO_PIN_RA5
/*** Macros for GPIO_RE5 pin ***/
#define GPIO_RE5_Set()               (LATESET = (1<<5))
#define GPIO_RE5_Clear()             (LATECLR = (1<<5))
#define GPIO_RE5_Toggle()            (LATEINV= (1<<5))
#define GPIO_RE5_Get()               ((PORTE >> 5) & 0x1)
#define GPIO_RE5_OutputEnable()      (TRISECLR = (1<<5))
#define GPIO_RE5_InputEnable()       (TRISESET = (1<<5))
#define GPIO_RE5_PIN                  GPIO_PIN_RE5
/*** Macros for GPIO_RE6 pin ***/
#define GPIO_RE6_Set()               (LATESET = (1<<6))
#define GPIO_RE6_Clear()             (LATECLR = (1<<6))
#define GPIO_RE6_Toggle()            (LATEINV= (1<<6))
#define GPIO_RE6_Get()               ((PORTE >> 6) & 0x1)
#define GPIO_RE6_OutputEnable()      (TRISECLR = (1<<6))
#define GPIO_RE6_InputEnable()       (TRISESET = (1<<6))
#define GPIO_RE6_PIN                  GPIO_PIN_RE6
/*** Macros for GPIO_RE7 pin ***/
#define GPIO_RE7_Set()               (LATESET = (1<<7))
#define GPIO_RE7_Clear()             (LATECLR = (1<<7))
#define GPIO_RE7_Toggle()            (LATEINV= (1<<7))
#define GPIO_RE7_Get()               ((PORTE >> 7) & 0x1)
#define GPIO_RE7_OutputEnable()      (TRISECLR = (1<<7))
#define GPIO_RE7_InputEnable()       (TRISESET = (1<<7))
#define GPIO_RE7_PIN                  GPIO_PIN_RE7
/*** Macros for GPIO_RC1 pin ***/
#define GPIO_RC1_Set()               (LATCSET = (1<<1))
#define GPIO_RC1_Clear()             (LATCCLR = (1<<1))
#define GPIO_RC1_Toggle()            (LATCINV= (1<<1))
#define GPIO_RC1_Get()               ((PORTC >> 1) & 0x1)
#define GPIO_RC1_OutputEnable()      (TRISCCLR = (1<<1))
#define GPIO_RC1_InputEnable()       (TRISCSET = (1<<1))
#define GPIO_RC1_PIN                  GPIO_PIN_RC1
/*** Macros for GPIO_RJ12 pin ***/
#define GPIO_RJ12_Set()               (LATJSET = (1<<12))
#define GPIO_RJ12_Clear()             (LATJCLR = (1<<12))
#define GPIO_RJ12_Toggle()            (LATJINV= (1<<12))
#define GPIO_RJ12_Get()               ((PORTJ >> 12) & 0x1)
#define GPIO_RJ12_OutputEnable()      (TRISJCLR = (1<<12))
#define GPIO_RJ12_InputEnable()       (TRISJSET = (1<<12))
#define GPIO_RJ12_PIN                  GPIO_PIN_RJ12
/*** Macros for GPIO_RJ10 pin ***/
#define GPIO_RJ10_Set()               (LATJSET = (1<<10))
#define GPIO_RJ10_Clear()             (LATJCLR = (1<<10))
#define GPIO_RJ10_Toggle()            (LATJINV= (1<<10))
#define GPIO_RJ10_Get()               ((PORTJ >> 10) & 0x1)
#define GPIO_RJ10_OutputEnable()      (TRISJCLR = (1<<10))
#define GPIO_RJ10_InputEnable()       (TRISJSET = (1<<10))
#define GPIO_RJ10_PIN                  GPIO_PIN_RJ10
/*** Macros for GPIO_RC2 pin ***/
#define GPIO_RC2_Set()               (LATCSET = (1<<2))
#define GPIO_RC2_Clear()             (LATCCLR = (1<<2))
#define GPIO_RC2_Toggle()            (LATCINV= (1<<2))
#define GPIO_RC2_Get()               ((PORTC >> 2) & 0x1)
#define GPIO_RC2_OutputEnable()      (TRISCCLR = (1<<2))
#define GPIO_RC2_InputEnable()       (TRISCSET = (1<<2))
#define GPIO_RC2_PIN                  GPIO_PIN_RC2
/*** Macros for GPIO_RC3 pin ***/
#define GPIO_RC3_Set()               (LATCSET = (1<<3))
#define GPIO_RC3_Clear()             (LATCCLR = (1<<3))
#define GPIO_RC3_Toggle()            (LATCINV= (1<<3))
#define GPIO_RC3_Get()               ((PORTC >> 3) & 0x1)
#define GPIO_RC3_OutputEnable()      (TRISCCLR = (1<<3))
#define GPIO_RC3_InputEnable()       (TRISCSET = (1<<3))
#define GPIO_RC3_PIN                  GPIO_PIN_RC3
/*** Macros for GPIO_RC4 pin ***/
#define GPIO_RC4_Set()               (LATCSET = (1<<4))
#define GPIO_RC4_Clear()             (LATCCLR = (1<<4))
#define GPIO_RC4_Toggle()            (LATCINV= (1<<4))
#define GPIO_RC4_Get()               ((PORTC >> 4) & 0x1)
#define GPIO_RC4_OutputEnable()      (TRISCCLR = (1<<4))
#define GPIO_RC4_InputEnable()       (TRISCSET = (1<<4))
#define GPIO_RC4_PIN                  GPIO_PIN_RC4
/*** Macros for GPIO_RK0 pin ***/
#define GPIO_RK0_Set()               (LATKSET = (1<<0))
#define GPIO_RK0_Clear()             (LATKCLR = (1<<0))
#define GPIO_RK0_Toggle()            (LATKINV= (1<<0))
#define GPIO_RK0_Get()               ((PORTK >> 0) & 0x1)
#define GPIO_RK0_OutputEnable()      (TRISKCLR = (1<<0))
#define GPIO_RK0_InputEnable()       (TRISKSET = (1<<0))
#define GPIO_RK0_PIN                  GPIO_PIN_RK0
/*** Macros for GPIO_RA0 pin ***/
#define GPIO_RA0_Set()               (LATASET = (1<<0))
#define GPIO_RA0_Clear()             (LATACLR = (1<<0))
#define GPIO_RA0_Toggle()            (LATAINV= (1<<0))
#define GPIO_RA0_Get()               ((PORTA >> 0) & 0x1)
#define GPIO_RA0_OutputEnable()      (TRISACLR = (1<<0))
#define GPIO_RA0_InputEnable()       (TRISASET = (1<<0))
#define GPIO_RA0_PIN                  GPIO_PIN_RA0
/*** Macros for GPIO_RE8 pin ***/
#define GPIO_RE8_Set()               (LATESET = (1<<8))
#define GPIO_RE8_Clear()             (LATECLR = (1<<8))
#define GPIO_RE8_Toggle()            (LATEINV= (1<<8))
#define GPIO_RE8_Get()               ((PORTE >> 8) & 0x1)
#define GPIO_RE8_OutputEnable()      (TRISECLR = (1<<8))
#define GPIO_RE8_InputEnable()       (TRISESET = (1<<8))
#define GPIO_RE8_PIN                  GPIO_PIN_RE8
/*** Macros for GPIO_RE9 pin ***/
#define GPIO_RE9_Set()               (LATESET = (1<<9))
#define GPIO_RE9_Clear()             (LATECLR = (1<<9))
#define GPIO_RE9_Toggle()            (LATEINV= (1<<9))
#define GPIO_RE9_Get()               ((PORTE >> 9) & 0x1)
#define GPIO_RE9_OutputEnable()      (TRISECLR = (1<<9))
#define GPIO_RE9_InputEnable()       (TRISESET = (1<<9))
#define GPIO_RE9_PIN                  GPIO_PIN_RE9
/*** Macros for USB_EN pin ***/
#define USB_EN_Set()               (LATBSET = (1<<5))
#define USB_EN_Clear()             (LATBCLR = (1<<5))
#define USB_EN_Toggle()            (LATBINV= (1<<5))
#define USB_EN_Get()               ((PORTB >> 5) & 0x1)
#define USB_EN_OutputEnable()      (TRISBCLR = (1<<5))
#define USB_EN_InputEnable()       (TRISBSET = (1<<5))
#define USB_EN_PIN                  GPIO_PIN_RB5
/*** Macros for GPIO_RB4 pin ***/
#define GPIO_RB4_Set()               (LATBSET = (1<<4))
#define GPIO_RB4_Clear()             (LATBCLR = (1<<4))
#define GPIO_RB4_Toggle()            (LATBINV= (1<<4))
#define GPIO_RB4_Get()               ((PORTB >> 4) & 0x1)
#define GPIO_RB4_OutputEnable()      (TRISBCLR = (1<<4))
#define GPIO_RB4_InputEnable()       (TRISBSET = (1<<4))
#define GPIO_RB4_PIN                  GPIO_PIN_RB4
/*** Macros for DIG_IN1 pin ***/
#define DIG_IN1_Set()               (LATJSET = (1<<13))
#define DIG_IN1_Clear()             (LATJCLR = (1<<13))
#define DIG_IN1_Toggle()            (LATJINV= (1<<13))
#define DIG_IN1_Get()               ((PORTJ >> 13) & 0x1)
#define DIG_IN1_OutputEnable()      (TRISJCLR = (1<<13))
#define DIG_IN1_InputEnable()       (TRISJSET = (1<<13))
#define DIG_IN1_PIN                  GPIO_PIN_RJ13
/*** Macros for DIG_IN2 pin ***/
#define DIG_IN2_Set()               (LATJSET = (1<<14))
#define DIG_IN2_Clear()             (LATJCLR = (1<<14))
#define DIG_IN2_Toggle()            (LATJINV= (1<<14))
#define DIG_IN2_Get()               ((PORTJ >> 14) & 0x1)
#define DIG_IN2_OutputEnable()      (TRISJCLR = (1<<14))
#define DIG_IN2_InputEnable()       (TRISJSET = (1<<14))
#define DIG_IN2_PIN                  GPIO_PIN_RJ14
/*** Macros for DIG_IN13 pin ***/
#define DIG_IN13_Set()               (LATJSET = (1<<15))
#define DIG_IN13_Clear()             (LATJCLR = (1<<15))
#define DIG_IN13_Toggle()            (LATJINV= (1<<15))
#define DIG_IN13_Get()               ((PORTJ >> 15) & 0x1)
#define DIG_IN13_OutputEnable()      (TRISJCLR = (1<<15))
#define DIG_IN13_InputEnable()       (TRISJSET = (1<<15))
#define DIG_IN13_PIN                  GPIO_PIN_RJ15
/*** Macros for DIG_IN14 pin ***/
#define DIG_IN14_Set()               (LATBSET = (1<<3))
#define DIG_IN14_Clear()             (LATBCLR = (1<<3))
#define DIG_IN14_Toggle()            (LATBINV= (1<<3))
#define DIG_IN14_Get()               ((PORTB >> 3) & 0x1)
#define DIG_IN14_OutputEnable()      (TRISBCLR = (1<<3))
#define DIG_IN14_InputEnable()       (TRISBSET = (1<<3))
#define DIG_IN14_PIN                  GPIO_PIN_RB3
/*** Macros for USB_OC pin ***/
#define USB_OC_Set()               (LATBSET = (1<<2))
#define USB_OC_Clear()             (LATBCLR = (1<<2))
#define USB_OC_Toggle()            (LATBINV= (1<<2))
#define USB_OC_Get()               ((PORTB >> 2) & 0x1)
#define USB_OC_OutputEnable()      (TRISBCLR = (1<<2))
#define USB_OC_InputEnable()       (TRISBSET = (1<<2))
#define USB_OC_PIN                  GPIO_PIN_RB2
/*** Macros for GPIO_RB1 pin ***/
#define GPIO_RB1_Set()               (LATBSET = (1<<1))
#define GPIO_RB1_Clear()             (LATBCLR = (1<<1))
#define GPIO_RB1_Toggle()            (LATBINV= (1<<1))
#define GPIO_RB1_Get()               ((PORTB >> 1) & 0x1)
#define GPIO_RB1_OutputEnable()      (TRISBCLR = (1<<1))
#define GPIO_RB1_InputEnable()       (TRISBSET = (1<<1))
#define GPIO_RB1_PIN                  GPIO_PIN_RB1
/*** Macros for GPIO_RB0 pin ***/
#define GPIO_RB0_Set()               (LATBSET = (1<<0))
#define GPIO_RB0_Clear()             (LATBCLR = (1<<0))
#define GPIO_RB0_Toggle()            (LATBINV= (1<<0))
#define GPIO_RB0_Get()               ((PORTB >> 0) & 0x1)
#define GPIO_RB0_OutputEnable()      (TRISBCLR = (1<<0))
#define GPIO_RB0_InputEnable()       (TRISBSET = (1<<0))
#define GPIO_RB0_PIN                  GPIO_PIN_RB0
/*** Macros for GPIO_RB6 pin ***/
#define GPIO_RB6_Set()               (LATBSET = (1<<6))
#define GPIO_RB6_Clear()             (LATBCLR = (1<<6))
#define GPIO_RB6_Toggle()            (LATBINV= (1<<6))
#define GPIO_RB6_Get()               ((PORTB >> 6) & 0x1)
#define GPIO_RB6_OutputEnable()      (TRISBCLR = (1<<6))
#define GPIO_RB6_InputEnable()       (TRISBSET = (1<<6))
#define GPIO_RB6_PIN                  GPIO_PIN_RB6
/*** Macros for GPIO_RB7 pin ***/
#define GPIO_RB7_Set()               (LATBSET = (1<<7))
#define GPIO_RB7_Clear()             (LATBCLR = (1<<7))
#define GPIO_RB7_Toggle()            (LATBINV= (1<<7))
#define GPIO_RB7_Get()               ((PORTB >> 7) & 0x1)
#define GPIO_RB7_OutputEnable()      (TRISBCLR = (1<<7))
#define GPIO_RB7_InputEnable()       (TRISBSET = (1<<7))
#define GPIO_RB7_PIN                  GPIO_PIN_RB7
/*** Macros for GPIO_RA9 pin ***/
#define GPIO_RA9_Set()               (LATASET = (1<<9))
#define GPIO_RA9_Clear()             (LATACLR = (1<<9))
#define GPIO_RA9_Toggle()            (LATAINV= (1<<9))
#define GPIO_RA9_Get()               ((PORTA >> 9) & 0x1)
#define GPIO_RA9_OutputEnable()      (TRISACLR = (1<<9))
#define GPIO_RA9_InputEnable()       (TRISASET = (1<<9))
#define GPIO_RA9_PIN                  GPIO_PIN_RA9
/*** Macros for GPIO_RA10 pin ***/
#define GPIO_RA10_Set()               (LATASET = (1<<10))
#define GPIO_RA10_Clear()             (LATACLR = (1<<10))
#define GPIO_RA10_Toggle()            (LATAINV= (1<<10))
#define GPIO_RA10_Get()               ((PORTA >> 10) & 0x1)
#define GPIO_RA10_OutputEnable()      (TRISACLR = (1<<10))
#define GPIO_RA10_InputEnable()       (TRISASET = (1<<10))
#define GPIO_RA10_PIN                  GPIO_PIN_RA10
/*** Macros for DIG_IN5 pin ***/
#define DIG_IN5_Set()               (LATHSET = (1<<0))
#define DIG_IN5_Clear()             (LATHCLR = (1<<0))
#define DIG_IN5_Toggle()            (LATHINV= (1<<0))
#define DIG_IN5_Get()               ((PORTH >> 0) & 0x1)
#define DIG_IN5_OutputEnable()      (TRISHCLR = (1<<0))
#define DIG_IN5_InputEnable()       (TRISHSET = (1<<0))
#define DIG_IN5_PIN                  GPIO_PIN_RH0
/*** Macros for DIG_IN6 pin ***/
#define DIG_IN6_Set()               (LATHSET = (1<<1))
#define DIG_IN6_Clear()             (LATHCLR = (1<<1))
#define DIG_IN6_Toggle()            (LATHINV= (1<<1))
#define DIG_IN6_Get()               ((PORTH >> 1) & 0x1)
#define DIG_IN6_OutputEnable()      (TRISHCLR = (1<<1))
#define DIG_IN6_InputEnable()       (TRISHSET = (1<<1))
#define DIG_IN6_PIN                  GPIO_PIN_RH1
/*** Macros for DIG_IN7 pin ***/
#define DIG_IN7_Set()               (LATHSET = (1<<2))
#define DIG_IN7_Clear()             (LATHCLR = (1<<2))
#define DIG_IN7_Toggle()            (LATHINV= (1<<2))
#define DIG_IN7_Get()               ((PORTH >> 2) & 0x1)
#define DIG_IN7_OutputEnable()      (TRISHCLR = (1<<2))
#define DIG_IN7_InputEnable()       (TRISHSET = (1<<2))
#define DIG_IN7_PIN                  GPIO_PIN_RH2
/*** Macros for DIG_IN8 pin ***/
#define DIG_IN8_Set()               (LATHSET = (1<<3))
#define DIG_IN8_Clear()             (LATHCLR = (1<<3))
#define DIG_IN8_Toggle()            (LATHINV= (1<<3))
#define DIG_IN8_Get()               ((PORTH >> 3) & 0x1)
#define DIG_IN8_OutputEnable()      (TRISHCLR = (1<<3))
#define DIG_IN8_InputEnable()       (TRISHSET = (1<<3))
#define DIG_IN8_PIN                  GPIO_PIN_RH3
/*** Macros for GPIO_RB8 pin ***/
#define GPIO_RB8_Set()               (LATBSET = (1<<8))
#define GPIO_RB8_Clear()             (LATBCLR = (1<<8))
#define GPIO_RB8_Toggle()            (LATBINV= (1<<8))
#define GPIO_RB8_Get()               ((PORTB >> 8) & 0x1)
#define GPIO_RB8_OutputEnable()      (TRISBCLR = (1<<8))
#define GPIO_RB8_InputEnable()       (TRISBSET = (1<<8))
#define GPIO_RB8_PIN                  GPIO_PIN_RB8
/*** Macros for GPIO_RB9 pin ***/
#define GPIO_RB9_Set()               (LATBSET = (1<<9))
#define GPIO_RB9_Clear()             (LATBCLR = (1<<9))
#define GPIO_RB9_Toggle()            (LATBINV= (1<<9))
#define GPIO_RB9_Get()               ((PORTB >> 9) & 0x1)
#define GPIO_RB9_OutputEnable()      (TRISBCLR = (1<<9))
#define GPIO_RB9_InputEnable()       (TRISBSET = (1<<9))
#define GPIO_RB9_PIN                  GPIO_PIN_RB9
/*** Macros for GPIO_RB10 pin ***/
#define GPIO_RB10_Set()               (LATBSET = (1<<10))
#define GPIO_RB10_Clear()             (LATBCLR = (1<<10))
#define GPIO_RB10_Toggle()            (LATBINV= (1<<10))
#define GPIO_RB10_Get()               ((PORTB >> 10) & 0x1)
#define GPIO_RB10_OutputEnable()      (TRISBCLR = (1<<10))
#define GPIO_RB10_InputEnable()       (TRISBSET = (1<<10))
#define GPIO_RB10_PIN                  GPIO_PIN_RB10
/*** Macros for GPIO_RB11 pin ***/
#define GPIO_RB11_Set()               (LATBSET = (1<<11))
#define GPIO_RB11_Clear()             (LATBCLR = (1<<11))
#define GPIO_RB11_Toggle()            (LATBINV= (1<<11))
#define GPIO_RB11_Get()               ((PORTB >> 11) & 0x1)
#define GPIO_RB11_OutputEnable()      (TRISBCLR = (1<<11))
#define GPIO_RB11_InputEnable()       (TRISBSET = (1<<11))
#define GPIO_RB11_PIN                  GPIO_PIN_RB11
/*** Macros for GPIO_RK1 pin ***/
#define GPIO_RK1_Set()               (LATKSET = (1<<1))
#define GPIO_RK1_Clear()             (LATKCLR = (1<<1))
#define GPIO_RK1_Toggle()            (LATKINV= (1<<1))
#define GPIO_RK1_Get()               ((PORTK >> 1) & 0x1)
#define GPIO_RK1_OutputEnable()      (TRISKCLR = (1<<1))
#define GPIO_RK1_InputEnable()       (TRISKSET = (1<<1))
#define GPIO_RK1_PIN                  GPIO_PIN_RK1
/*** Macros for GPIO_RK2 pin ***/
#define GPIO_RK2_Set()               (LATKSET = (1<<2))
#define GPIO_RK2_Clear()             (LATKCLR = (1<<2))
#define GPIO_RK2_Toggle()            (LATKINV= (1<<2))
#define GPIO_RK2_Get()               ((PORTK >> 2) & 0x1)
#define GPIO_RK2_OutputEnable()      (TRISKCLR = (1<<2))
#define GPIO_RK2_InputEnable()       (TRISKSET = (1<<2))
#define GPIO_RK2_PIN                  GPIO_PIN_RK2
/*** Macros for GPIO_RK3 pin ***/
#define GPIO_RK3_Set()               (LATKSET = (1<<3))
#define GPIO_RK3_Clear()             (LATKCLR = (1<<3))
#define GPIO_RK3_Toggle()            (LATKINV= (1<<3))
#define GPIO_RK3_Get()               ((PORTK >> 3) & 0x1)
#define GPIO_RK3_OutputEnable()      (TRISKCLR = (1<<3))
#define GPIO_RK3_InputEnable()       (TRISKSET = (1<<3))
#define GPIO_RK3_PIN                  GPIO_PIN_RK3
/*** Macros for GPIO_RA1 pin ***/
#define GPIO_RA1_Set()               (LATASET = (1<<1))
#define GPIO_RA1_Clear()             (LATACLR = (1<<1))
#define GPIO_RA1_Toggle()            (LATAINV= (1<<1))
#define GPIO_RA1_Get()               ((PORTA >> 1) & 0x1)
#define GPIO_RA1_OutputEnable()      (TRISACLR = (1<<1))
#define GPIO_RA1_InputEnable()       (TRISASET = (1<<1))
#define GPIO_RA1_PIN                  GPIO_PIN_RA1
/*** Macros for GPIO_RF13 pin ***/
#define GPIO_RF13_Set()               (LATFSET = (1<<13))
#define GPIO_RF13_Clear()             (LATFCLR = (1<<13))
#define GPIO_RF13_Toggle()            (LATFINV= (1<<13))
#define GPIO_RF13_Get()               ((PORTF >> 13) & 0x1)
#define GPIO_RF13_OutputEnable()      (TRISFCLR = (1<<13))
#define GPIO_RF13_InputEnable()       (TRISFSET = (1<<13))
#define GPIO_RF13_PIN                  GPIO_PIN_RF13
/*** Macros for GPIO_RF12 pin ***/
#define GPIO_RF12_Set()               (LATFSET = (1<<12))
#define GPIO_RF12_Clear()             (LATFCLR = (1<<12))
#define GPIO_RF12_Toggle()            (LATFINV= (1<<12))
#define GPIO_RF12_Get()               ((PORTF >> 12) & 0x1)
#define GPIO_RF12_OutputEnable()      (TRISFCLR = (1<<12))
#define GPIO_RF12_InputEnable()       (TRISFSET = (1<<12))
#define GPIO_RF12_PIN                  GPIO_PIN_RF12
/*** Macros for GPIO_RB12 pin ***/
#define GPIO_RB12_Set()               (LATBSET = (1<<12))
#define GPIO_RB12_Clear()             (LATBCLR = (1<<12))
#define GPIO_RB12_Toggle()            (LATBINV= (1<<12))
#define GPIO_RB12_Get()               ((PORTB >> 12) & 0x1)
#define GPIO_RB12_OutputEnable()      (TRISBCLR = (1<<12))
#define GPIO_RB12_InputEnable()       (TRISBSET = (1<<12))
#define GPIO_RB12_PIN                  GPIO_PIN_RB12
/*** Macros for GPIO_RB13 pin ***/
#define GPIO_RB13_Set()               (LATBSET = (1<<13))
#define GPIO_RB13_Clear()             (LATBCLR = (1<<13))
#define GPIO_RB13_Toggle()            (LATBINV= (1<<13))
#define GPIO_RB13_Get()               ((PORTB >> 13) & 0x1)
#define GPIO_RB13_OutputEnable()      (TRISBCLR = (1<<13))
#define GPIO_RB13_InputEnable()       (TRISBSET = (1<<13))
#define GPIO_RB13_PIN                  GPIO_PIN_RB13
/*** Macros for GPIO_RH6 pin ***/
#define GPIO_RH6_Set()               (LATHSET = (1<<6))
#define GPIO_RH6_Clear()             (LATHCLR = (1<<6))
#define GPIO_RH6_Toggle()            (LATHINV= (1<<6))
#define GPIO_RH6_Get()               ((PORTH >> 6) & 0x1)
#define GPIO_RH6_OutputEnable()      (TRISHCLR = (1<<6))
#define GPIO_RH6_InputEnable()       (TRISHSET = (1<<6))
#define GPIO_RH6_PIN                  GPIO_PIN_RH6
/*** Macros for GPIO_RH7 pin ***/
#define GPIO_RH7_Set()               (LATHSET = (1<<7))
#define GPIO_RH7_Clear()             (LATHCLR = (1<<7))
#define GPIO_RH7_Toggle()            (LATHINV= (1<<7))
#define GPIO_RH7_Get()               ((PORTH >> 7) & 0x1)
#define GPIO_RH7_OutputEnable()      (TRISHCLR = (1<<7))
#define GPIO_RH7_InputEnable()       (TRISHSET = (1<<7))
#define GPIO_RH7_PIN                  GPIO_PIN_RH7
/*** Macros for GPIO_RD14 pin ***/
#define GPIO_RD14_Set()               (LATDSET = (1<<14))
#define GPIO_RD14_Clear()             (LATDCLR = (1<<14))
#define GPIO_RD14_Toggle()            (LATDINV= (1<<14))
#define GPIO_RD14_Get()               ((PORTD >> 14) & 0x1)
#define GPIO_RD14_OutputEnable()      (TRISDCLR = (1<<14))
#define GPIO_RD14_InputEnable()       (TRISDSET = (1<<14))
#define GPIO_RD14_PIN                  GPIO_PIN_RD14
/*** Macros for GPIO_RD15 pin ***/
#define GPIO_RD15_Set()               (LATDSET = (1<<15))
#define GPIO_RD15_Clear()             (LATDCLR = (1<<15))
#define GPIO_RD15_Toggle()            (LATDINV= (1<<15))
#define GPIO_RD15_Get()               ((PORTD >> 15) & 0x1)
#define GPIO_RD15_OutputEnable()      (TRISDCLR = (1<<15))
#define GPIO_RD15_InputEnable()       (TRISDSET = (1<<15))
#define GPIO_RD15_PIN                  GPIO_PIN_RD15
/*** Macros for GPIO_RF3 pin ***/
#define GPIO_RF3_Set()               (LATFSET = (1<<3))
#define GPIO_RF3_Clear()             (LATFCLR = (1<<3))
#define GPIO_RF3_Toggle()            (LATFINV= (1<<3))
#define GPIO_RF3_Get()               ((PORTF >> 3) & 0x1)
#define GPIO_RF3_OutputEnable()      (TRISFCLR = (1<<3))
#define GPIO_RF3_InputEnable()       (TRISFSET = (1<<3))
#define GPIO_RF3_PIN                  GPIO_PIN_RF3
/*** Macros for GPIO_RH9 pin ***/
#define GPIO_RH9_Set()               (LATHSET = (1<<9))
#define GPIO_RH9_Clear()             (LATHCLR = (1<<9))
#define GPIO_RH9_Toggle()            (LATHINV= (1<<9))
#define GPIO_RH9_Get()               ((PORTH >> 9) & 0x1)
#define GPIO_RH9_OutputEnable()      (TRISHCLR = (1<<9))
#define GPIO_RH9_InputEnable()       (TRISHSET = (1<<9))
#define GPIO_RH9_PIN                  GPIO_PIN_RH9
/*** Macros for GPIO_RH10 pin ***/
#define GPIO_RH10_Set()               (LATHSET = (1<<10))
#define GPIO_RH10_Clear()             (LATHCLR = (1<<10))
#define GPIO_RH10_Toggle()            (LATHINV= (1<<10))
#define GPIO_RH10_Get()               ((PORTH >> 10) & 0x1)
#define GPIO_RH10_OutputEnable()      (TRISHCLR = (1<<10))
#define GPIO_RH10_InputEnable()       (TRISHSET = (1<<10))
#define GPIO_RH10_PIN                  GPIO_PIN_RH10
/*** Macros for SPF_RFID_EN pin ***/
#define SPF_RFID_EN_Set()               (LATASET = (1<<2))
#define SPF_RFID_EN_Clear()             (LATACLR = (1<<2))
#define SPF_RFID_EN_Toggle()            (LATAINV= (1<<2))
#define SPF_RFID_EN_Get()               ((PORTA >> 2) & 0x1)
#define SPF_RFID_EN_OutputEnable()      (TRISACLR = (1<<2))
#define SPF_RFID_EN_InputEnable()       (TRISASET = (1<<2))
#define SPF_RFID_EN_PIN                  GPIO_PIN_RA2
/*** Macros for GPIO1_LV pin ***/
#define GPIO1_LV_Set()               (LATASET = (1<<3))
#define GPIO1_LV_Clear()             (LATACLR = (1<<3))
#define GPIO1_LV_Toggle()            (LATAINV= (1<<3))
#define GPIO1_LV_Get()               ((PORTA >> 3) & 0x1)
#define GPIO1_LV_OutputEnable()      (TRISACLR = (1<<3))
#define GPIO1_LV_InputEnable()       (TRISASET = (1<<3))
#define GPIO1_LV_PIN                  GPIO_PIN_RA3
/*** Macros for GPIO2_LV pin ***/
#define GPIO2_LV_Set()               (LATASET = (1<<4))
#define GPIO2_LV_Clear()             (LATACLR = (1<<4))
#define GPIO2_LV_Toggle()            (LATAINV= (1<<4))
#define GPIO2_LV_Get()               ((PORTA >> 4) & 0x1)
#define GPIO2_LV_OutputEnable()      (TRISACLR = (1<<4))
#define GPIO2_LV_InputEnable()       (TRISASET = (1<<4))
#define GPIO2_LV_PIN                  GPIO_PIN_RA4
/*** Macros for GPIO3_LV pin ***/
#define GPIO3_LV_Set()               (LATFSET = (1<<4))
#define GPIO3_LV_Clear()             (LATFCLR = (1<<4))
#define GPIO3_LV_Toggle()            (LATFINV= (1<<4))
#define GPIO3_LV_Get()               ((PORTF >> 4) & 0x1)
#define GPIO3_LV_OutputEnable()      (TRISFCLR = (1<<4))
#define GPIO3_LV_InputEnable()       (TRISFSET = (1<<4))
#define GPIO3_LV_PIN                  GPIO_PIN_RF4
/*** Macros for GPIO_RF5 pin ***/
#define GPIO_RF5_Set()               (LATFSET = (1<<5))
#define GPIO_RF5_Clear()             (LATFCLR = (1<<5))
#define GPIO_RF5_Toggle()            (LATFINV= (1<<5))
#define GPIO_RF5_Get()               ((PORTF >> 5) & 0x1)
#define GPIO_RF5_OutputEnable()      (TRISFCLR = (1<<5))
#define GPIO_RF5_InputEnable()       (TRISFSET = (1<<5))
#define GPIO_RF5_PIN                  GPIO_PIN_RF5
/*** Macros for OUT1 pin ***/
#define OUT1_Set()               (LATKSET = (1<<4))
#define OUT1_Clear()             (LATKCLR = (1<<4))
#define OUT1_Toggle()            (LATKINV= (1<<4))
#define OUT1_Get()               ((PORTK >> 4) & 0x1)
#define OUT1_OutputEnable()      (TRISKCLR = (1<<4))
#define OUT1_InputEnable()       (TRISKSET = (1<<4))
#define OUT1_PIN                  GPIO_PIN_RK4
/*** Macros for OUT2 pin ***/
#define OUT2_Set()               (LATKSET = (1<<5))
#define OUT2_Clear()             (LATKCLR = (1<<5))
#define OUT2_Toggle()            (LATKINV= (1<<5))
#define OUT2_Get()               ((PORTK >> 5) & 0x1)
#define OUT2_OutputEnable()      (TRISKCLR = (1<<5))
#define OUT2_InputEnable()       (TRISKSET = (1<<5))
#define OUT2_PIN                  GPIO_PIN_RK5
/*** Macros for OUT3 pin ***/
#define OUT3_Set()               (LATKSET = (1<<6))
#define OUT3_Clear()             (LATKCLR = (1<<6))
#define OUT3_Toggle()            (LATKINV= (1<<6))
#define OUT3_Get()               ((PORTK >> 6) & 0x1)
#define OUT3_OutputEnable()      (TRISKCLR = (1<<6))
#define OUT3_InputEnable()       (TRISKSET = (1<<6))
#define OUT3_PIN                  GPIO_PIN_RK6
/*** Macros for GPIO_RD10 pin ***/
#define GPIO_RD10_Set()               (LATDSET = (1<<10))
#define GPIO_RD10_Clear()             (LATDCLR = (1<<10))
#define GPIO_RD10_Toggle()            (LATDINV= (1<<10))
#define GPIO_RD10_Get()               ((PORTD >> 10) & 0x1)
#define GPIO_RD10_OutputEnable()      (TRISDCLR = (1<<10))
#define GPIO_RD10_InputEnable()       (TRISDSET = (1<<10))
#define GPIO_RD10_PIN                  GPIO_PIN_RD10
/*** Macros for OUT4 pin ***/
#define OUT4_Set()               (LATHSET = (1<<12))
#define OUT4_Clear()             (LATHCLR = (1<<12))
#define OUT4_Toggle()            (LATHINV= (1<<12))
#define OUT4_Get()               ((PORTH >> 12) & 0x1)
#define OUT4_OutputEnable()      (TRISHCLR = (1<<12))
#define OUT4_InputEnable()       (TRISHSET = (1<<12))
#define OUT4_PIN                  GPIO_PIN_RH12
/*** Macros for OUT5 pin ***/
#define OUT5_Set()               (LATHSET = (1<<14))
#define OUT5_Clear()             (LATHCLR = (1<<14))
#define OUT5_Toggle()            (LATHINV= (1<<14))
#define OUT5_Get()               ((PORTH >> 14) & 0x1)
#define OUT5_OutputEnable()      (TRISHCLR = (1<<14))
#define OUT5_InputEnable()       (TRISHSET = (1<<14))
#define OUT5_PIN                  GPIO_PIN_RH14
/*** Macros for GPIO_RH15 pin ***/
#define GPIO_RH15_Set()               (LATHSET = (1<<15))
#define GPIO_RH15_Clear()             (LATHCLR = (1<<15))
#define GPIO_RH15_Toggle()            (LATHINV= (1<<15))
#define GPIO_RH15_Get()               ((PORTH >> 15) & 0x1)
#define GPIO_RH15_OutputEnable()      (TRISHCLR = (1<<15))
#define GPIO_RH15_InputEnable()       (TRISHSET = (1<<15))
#define GPIO_RH15_PIN                  GPIO_PIN_RH15
/*** Macros for RC13 pin ***/
#define RC13_Set()               (LATCSET = (1<<13))
#define RC13_Clear()             (LATCCLR = (1<<13))
#define RC13_Toggle()            (LATCINV= (1<<13))
#define RC13_Get()               ((PORTC >> 13) & 0x1)
#define RC13_OutputEnable()      (TRISCCLR = (1<<13))
#define RC13_InputEnable()       (TRISCSET = (1<<13))
#define RC13_PIN                  GPIO_PIN_RC13
/*** Macros for GPIO_RD3 pin ***/
#define GPIO_RD3_Set()               (LATDSET = (1<<3))
#define GPIO_RD3_Clear()             (LATDCLR = (1<<3))
#define GPIO_RD3_Toggle()            (LATDINV= (1<<3))
#define GPIO_RD3_Get()               ((PORTD >> 3) & 0x1)
#define GPIO_RD3_OutputEnable()      (TRISDCLR = (1<<3))
#define GPIO_RD3_InputEnable()       (TRISDSET = (1<<3))
#define GPIO_RD3_PIN                  GPIO_PIN_RD3
/*** Macros for WLAN_CS pin ***/
#define WLAN_CS_Set()               (LATDSET = (1<<12))
#define WLAN_CS_Clear()             (LATDCLR = (1<<12))
#define WLAN_CS_Toggle()            (LATDINV= (1<<12))
#define WLAN_CS_Get()               ((PORTD >> 12) & 0x1)
#define WLAN_CS_OutputEnable()      (TRISDCLR = (1<<12))
#define WLAN_CS_InputEnable()       (TRISDSET = (1<<12))
#define WLAN_CS_PIN                  GPIO_PIN_RD12
/*** Macros for GPIO_RD13 pin ***/
#define GPIO_RD13_Set()               (LATDSET = (1<<13))
#define GPIO_RD13_Clear()             (LATDCLR = (1<<13))
#define GPIO_RD13_Toggle()            (LATDINV= (1<<13))
#define GPIO_RD13_Get()               ((PORTD >> 13) & 0x1)
#define GPIO_RD13_OutputEnable()      (TRISDCLR = (1<<13))
#define GPIO_RD13_InputEnable()       (TRISDSET = (1<<13))
#define GPIO_RD13_PIN                  GPIO_PIN_RD13
/*** Macros for GPIO_RJ0 pin ***/
#define GPIO_RJ0_Set()               (LATJSET = (1<<0))
#define GPIO_RJ0_Clear()             (LATJCLR = (1<<0))
#define GPIO_RJ0_Toggle()            (LATJINV= (1<<0))
#define GPIO_RJ0_Get()               ((PORTJ >> 0) & 0x1)
#define GPIO_RJ0_OutputEnable()      (TRISJCLR = (1<<0))
#define GPIO_RJ0_InputEnable()       (TRISJSET = (1<<0))
#define GPIO_RJ0_PIN                  GPIO_PIN_RJ0
/*** Macros for GPIO_RJ2 pin ***/
#define GPIO_RJ2_Set()               (LATJSET = (1<<2))
#define GPIO_RJ2_Clear()             (LATJCLR = (1<<2))
#define GPIO_RJ2_Toggle()            (LATJINV= (1<<2))
#define GPIO_RJ2_Get()               ((PORTJ >> 2) & 0x1)
#define GPIO_RJ2_OutputEnable()      (TRISJCLR = (1<<2))
#define GPIO_RJ2_InputEnable()       (TRISJSET = (1<<2))
#define GPIO_RJ2_PIN                  GPIO_PIN_RJ2
/*** Macros for GPIO_RJ3 pin ***/
#define GPIO_RJ3_Set()               (LATJSET = (1<<3))
#define GPIO_RJ3_Clear()             (LATJCLR = (1<<3))
#define GPIO_RJ3_Toggle()            (LATJINV= (1<<3))
#define GPIO_RJ3_Get()               ((PORTJ >> 3) & 0x1)
#define GPIO_RJ3_OutputEnable()      (TRISJCLR = (1<<3))
#define GPIO_RJ3_InputEnable()       (TRISJSET = (1<<3))
#define GPIO_RJ3_PIN                  GPIO_PIN_RJ3
/*** Macros for GPIO_RD4 pin ***/
#define GPIO_RD4_Set()               (LATDSET = (1<<4))
#define GPIO_RD4_Clear()             (LATDCLR = (1<<4))
#define GPIO_RD4_Toggle()            (LATDINV= (1<<4))
#define GPIO_RD4_Get()               ((PORTD >> 4) & 0x1)
#define GPIO_RD4_OutputEnable()      (TRISDCLR = (1<<4))
#define GPIO_RD4_InputEnable()       (TRISDSET = (1<<4))
#define GPIO_RD4_PIN                  GPIO_PIN_RD4
/*** Macros for GPIO_RD5 pin ***/
#define GPIO_RD5_Set()               (LATDSET = (1<<5))
#define GPIO_RD5_Clear()             (LATDCLR = (1<<5))
#define GPIO_RD5_Toggle()            (LATDINV= (1<<5))
#define GPIO_RD5_Get()               ((PORTD >> 5) & 0x1)
#define GPIO_RD5_OutputEnable()      (TRISDCLR = (1<<5))
#define GPIO_RD5_InputEnable()       (TRISDSET = (1<<5))
#define GPIO_RD5_PIN                  GPIO_PIN_RD5
/*** Macros for WLAN_EN pin ***/
#define WLAN_EN_Set()               (LATDSET = (1<<7))
#define WLAN_EN_Clear()             (LATDCLR = (1<<7))
#define WLAN_EN_Toggle()            (LATDINV= (1<<7))
#define WLAN_EN_Get()               ((PORTD >> 7) & 0x1)
#define WLAN_EN_OutputEnable()      (TRISDCLR = (1<<7))
#define WLAN_EN_InputEnable()       (TRISDSET = (1<<7))
#define WLAN_EN_PIN                  GPIO_PIN_RD7
/*** Macros for GPIO_RK7 pin ***/
#define GPIO_RK7_Set()               (LATKSET = (1<<7))
#define GPIO_RK7_Clear()             (LATKCLR = (1<<7))
#define GPIO_RK7_Toggle()            (LATKINV= (1<<7))
#define GPIO_RK7_Get()               ((PORTK >> 7) & 0x1)
#define GPIO_RK7_OutputEnable()      (TRISKCLR = (1<<7))
#define GPIO_RK7_InputEnable()       (TRISKSET = (1<<7))
#define GPIO_RK7_PIN                  GPIO_PIN_RK7
/*** Macros for GPIO_RA6 pin ***/
#define GPIO_RA6_Set()               (LATASET = (1<<6))
#define GPIO_RA6_Clear()             (LATACLR = (1<<6))
#define GPIO_RA6_Toggle()            (LATAINV= (1<<6))
#define GPIO_RA6_Get()               ((PORTA >> 6) & 0x1)
#define GPIO_RA6_OutputEnable()      (TRISACLR = (1<<6))
#define GPIO_RA6_InputEnable()       (TRISASET = (1<<6))
#define GPIO_RA6_PIN                  GPIO_PIN_RA6
/*** Macros for GPIO_RA7 pin ***/
#define GPIO_RA7_Set()               (LATASET = (1<<7))
#define GPIO_RA7_Clear()             (LATACLR = (1<<7))
#define GPIO_RA7_Toggle()            (LATAINV= (1<<7))
#define GPIO_RA7_Get()               ((PORTA >> 7) & 0x1)
#define GPIO_RA7_OutputEnable()      (TRISACLR = (1<<7))
#define GPIO_RA7_InputEnable()       (TRISASET = (1<<7))
#define GPIO_RA7_PIN                  GPIO_PIN_RA7
/*** Macros for GPIO_RJ4 pin ***/
#define GPIO_RJ4_Set()               (LATJSET = (1<<4))
#define GPIO_RJ4_Clear()             (LATJCLR = (1<<4))
#define GPIO_RJ4_Toggle()            (LATJINV= (1<<4))
#define GPIO_RJ4_Get()               ((PORTJ >> 4) & 0x1)
#define GPIO_RJ4_OutputEnable()      (TRISJCLR = (1<<4))
#define GPIO_RJ4_InputEnable()       (TRISJSET = (1<<4))
#define GPIO_RJ4_PIN                  GPIO_PIN_RJ4
/*** Macros for GPIO_RJ5 pin ***/
#define GPIO_RJ5_Set()               (LATJSET = (1<<5))
#define GPIO_RJ5_Clear()             (LATJCLR = (1<<5))
#define GPIO_RJ5_Toggle()            (LATJINV= (1<<5))
#define GPIO_RJ5_Get()               ((PORTJ >> 5) & 0x1)
#define GPIO_RJ5_OutputEnable()      (TRISJCLR = (1<<5))
#define GPIO_RJ5_InputEnable()       (TRISJSET = (1<<5))
#define GPIO_RJ5_PIN                  GPIO_PIN_RJ5
/*** Macros for GPIO_RJ6 pin ***/
#define GPIO_RJ6_Set()               (LATJSET = (1<<6))
#define GPIO_RJ6_Clear()             (LATJCLR = (1<<6))
#define GPIO_RJ6_Toggle()            (LATJINV= (1<<6))
#define GPIO_RJ6_Get()               ((PORTJ >> 6) & 0x1)
#define GPIO_RJ6_OutputEnable()      (TRISJCLR = (1<<6))
#define GPIO_RJ6_InputEnable()       (TRISJSET = (1<<6))
#define GPIO_RJ6_PIN                  GPIO_PIN_RJ6
/*** Macros for GPIO_RJ7 pin ***/
#define GPIO_RJ7_Set()               (LATJSET = (1<<7))
#define GPIO_RJ7_Clear()             (LATJCLR = (1<<7))
#define GPIO_RJ7_Toggle()            (LATJINV= (1<<7))
#define GPIO_RJ7_Get()               ((PORTJ >> 7) & 0x1)
#define GPIO_RJ7_OutputEnable()      (TRISJCLR = (1<<7))
#define GPIO_RJ7_InputEnable()       (TRISJSET = (1<<7))
#define GPIO_RJ7_PIN                  GPIO_PIN_RJ7
/*** Macros for GPIO_RE0 pin ***/
#define GPIO_RE0_Set()               (LATESET = (1<<0))
#define GPIO_RE0_Clear()             (LATECLR = (1<<0))
#define GPIO_RE0_Toggle()            (LATEINV= (1<<0))
#define GPIO_RE0_Get()               ((PORTE >> 0) & 0x1)
#define GPIO_RE0_OutputEnable()      (TRISECLR = (1<<0))
#define GPIO_RE0_InputEnable()       (TRISESET = (1<<0))
#define GPIO_RE0_PIN                  GPIO_PIN_RE0
/*** Macros for GPIO_RE1 pin ***/
#define GPIO_RE1_Set()               (LATESET = (1<<1))
#define GPIO_RE1_Clear()             (LATECLR = (1<<1))
#define GPIO_RE1_Toggle()            (LATEINV= (1<<1))
#define GPIO_RE1_Get()               ((PORTE >> 1) & 0x1)
#define GPIO_RE1_OutputEnable()      (TRISECLR = (1<<1))
#define GPIO_RE1_InputEnable()       (TRISESET = (1<<1))
#define GPIO_RE1_PIN                  GPIO_PIN_RE1
/*** Macros for GPIO_RG14 pin ***/
#define GPIO_RG14_Set()               (LATGSET = (1<<14))
#define GPIO_RG14_Clear()             (LATGCLR = (1<<14))
#define GPIO_RG14_Toggle()            (LATGINV= (1<<14))
#define GPIO_RG14_Get()               ((PORTG >> 14) & 0x1)
#define GPIO_RG14_OutputEnable()      (TRISGCLR = (1<<14))
#define GPIO_RG14_InputEnable()       (TRISGSET = (1<<14))
#define GPIO_RG14_PIN                  GPIO_PIN_RG14
/*** Macros for GPIO_RG12 pin ***/
#define GPIO_RG12_Set()               (LATGSET = (1<<12))
#define GPIO_RG12_Clear()             (LATGCLR = (1<<12))
#define GPIO_RG12_Toggle()            (LATGINV= (1<<12))
#define GPIO_RG12_Get()               ((PORTG >> 12) & 0x1)
#define GPIO_RG12_OutputEnable()      (TRISGCLR = (1<<12))
#define GPIO_RG12_InputEnable()       (TRISGSET = (1<<12))
#define GPIO_RG12_PIN                  GPIO_PIN_RG12
/*** Macros for GPIO_RG13 pin ***/
#define GPIO_RG13_Set()               (LATGSET = (1<<13))
#define GPIO_RG13_Clear()             (LATGCLR = (1<<13))
#define GPIO_RG13_Toggle()            (LATGINV= (1<<13))
#define GPIO_RG13_Get()               ((PORTG >> 13) & 0x1)
#define GPIO_RG13_OutputEnable()      (TRISGCLR = (1<<13))
#define GPIO_RG13_InputEnable()       (TRISGSET = (1<<13))
#define GPIO_RG13_PIN                  GPIO_PIN_RG13
/*** Macros for GPIO_RE2 pin ***/
#define GPIO_RE2_Set()               (LATESET = (1<<2))
#define GPIO_RE2_Clear()             (LATECLR = (1<<2))
#define GPIO_RE2_Toggle()            (LATEINV= (1<<2))
#define GPIO_RE2_Get()               ((PORTE >> 2) & 0x1)
#define GPIO_RE2_OutputEnable()      (TRISECLR = (1<<2))
#define GPIO_RE2_InputEnable()       (TRISESET = (1<<2))
#define GPIO_RE2_PIN                  GPIO_PIN_RE2
/*** Macros for GPIO_RE3 pin ***/
#define GPIO_RE3_Set()               (LATESET = (1<<3))
#define GPIO_RE3_Clear()             (LATECLR = (1<<3))
#define GPIO_RE3_Toggle()            (LATEINV= (1<<3))
#define GPIO_RE3_Get()               ((PORTE >> 3) & 0x1)
#define GPIO_RE3_OutputEnable()      (TRISECLR = (1<<3))
#define GPIO_RE3_InputEnable()       (TRISESET = (1<<3))
#define GPIO_RE3_PIN                  GPIO_PIN_RE3
/*** Macros for WLAN_IF pin ***/
#define WLAN_IF_Set()               (LATESET = (1<<4))
#define WLAN_IF_Clear()             (LATECLR = (1<<4))
#define WLAN_IF_Toggle()            (LATEINV= (1<<4))
#define WLAN_IF_Get()               ((PORTE >> 4) & 0x1)
#define WLAN_IF_OutputEnable()      (TRISECLR = (1<<4))
#define WLAN_IF_InputEnable()       (TRISESET = (1<<4))
#define WLAN_IF_PIN                  GPIO_PIN_RE4


// *****************************************************************************
/* GPIO Port

  Summary:
    Identifies the available GPIO Ports.

  Description:
    This enumeration identifies the available GPIO Ports.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all ports are available on all devices.  Refer to the specific
    device data sheet to determine which ports are supported.
*/

typedef enum
{
    GPIO_PORT_A = 0,
    GPIO_PORT_B = 1,
    GPIO_PORT_C = 2,
    GPIO_PORT_D = 3,
    GPIO_PORT_E = 4,
    GPIO_PORT_F = 5,
    GPIO_PORT_G = 6,
    GPIO_PORT_H = 7,
    GPIO_PORT_J = 8,
    GPIO_PORT_K = 9,
} GPIO_PORT;

// *****************************************************************************
/* GPIO Port Pins

  Summary:
    Identifies the available GPIO port pins.

  Description:
    This enumeration identifies the available GPIO port pins.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all pins are available on all devices.  Refer to the specific
    device data sheet to determine which pins are supported.
*/

typedef enum
{
    GPIO_PIN_RA0 = 0,
    GPIO_PIN_RA1 = 1,
    GPIO_PIN_RA2 = 2,
    GPIO_PIN_RA3 = 3,
    GPIO_PIN_RA4 = 4,
    GPIO_PIN_RA5 = 5,
    GPIO_PIN_RA6 = 6,
    GPIO_PIN_RA7 = 7,
    GPIO_PIN_RA9 = 9,
    GPIO_PIN_RA10 = 10,
    GPIO_PIN_RA14 = 14,
    GPIO_PIN_RA15 = 15,
    GPIO_PIN_RB0 = 16,
    GPIO_PIN_RB1 = 17,
    GPIO_PIN_RB2 = 18,
    GPIO_PIN_RB3 = 19,
    GPIO_PIN_RB4 = 20,
    GPIO_PIN_RB5 = 21,
    GPIO_PIN_RB6 = 22,
    GPIO_PIN_RB7 = 23,
    GPIO_PIN_RB8 = 24,
    GPIO_PIN_RB9 = 25,
    GPIO_PIN_RB10 = 26,
    GPIO_PIN_RB11 = 27,
    GPIO_PIN_RB12 = 28,
    GPIO_PIN_RB13 = 29,
    GPIO_PIN_RB14 = 30,
    GPIO_PIN_RB15 = 31,
    GPIO_PIN_RC1 = 33,
    GPIO_PIN_RC2 = 34,
    GPIO_PIN_RC3 = 35,
    GPIO_PIN_RC4 = 36,
    GPIO_PIN_RC12 = 44,
    GPIO_PIN_RC13 = 45,
    GPIO_PIN_RC14 = 46,
    GPIO_PIN_RC15 = 47,
    GPIO_PIN_RD0 = 48,
    GPIO_PIN_RD1 = 49,
    GPIO_PIN_RD2 = 50,
    GPIO_PIN_RD3 = 51,
    GPIO_PIN_RD4 = 52,
    GPIO_PIN_RD5 = 53,
    GPIO_PIN_RD6 = 54,
    GPIO_PIN_RD7 = 55,
    GPIO_PIN_RD9 = 57,
    GPIO_PIN_RD10 = 58,
    GPIO_PIN_RD11 = 59,
    GPIO_PIN_RD12 = 60,
    GPIO_PIN_RD13 = 61,
    GPIO_PIN_RD14 = 62,
    GPIO_PIN_RD15 = 63,
    GPIO_PIN_RE0 = 64,
    GPIO_PIN_RE1 = 65,
    GPIO_PIN_RE2 = 66,
    GPIO_PIN_RE3 = 67,
    GPIO_PIN_RE4 = 68,
    GPIO_PIN_RE5 = 69,
    GPIO_PIN_RE6 = 70,
    GPIO_PIN_RE7 = 71,
    GPIO_PIN_RE8 = 72,
    GPIO_PIN_RE9 = 73,
    GPIO_PIN_RF0 = 80,
    GPIO_PIN_RF1 = 81,
    GPIO_PIN_RF2 = 82,
    GPIO_PIN_RF3 = 83,
    GPIO_PIN_RF4 = 84,
    GPIO_PIN_RF5 = 85,
    GPIO_PIN_RF8 = 88,
    GPIO_PIN_RF12 = 92,
    GPIO_PIN_RF13 = 93,
    GPIO_PIN_RG0 = 96,
    GPIO_PIN_RG1 = 97,
    GPIO_PIN_RG6 = 102,
    GPIO_PIN_RG7 = 103,
    GPIO_PIN_RG8 = 104,
    GPIO_PIN_RG9 = 105,
    GPIO_PIN_RG12 = 108,
    GPIO_PIN_RG13 = 109,
    GPIO_PIN_RG14 = 110,
    GPIO_PIN_RG15 = 111,
    GPIO_PIN_RH0 = 112,
    GPIO_PIN_RH1 = 113,
    GPIO_PIN_RH2 = 114,
    GPIO_PIN_RH3 = 115,
    GPIO_PIN_RH4 = 116,
    GPIO_PIN_RH5 = 117,
    GPIO_PIN_RH6 = 118,
    GPIO_PIN_RH7 = 119,
    GPIO_PIN_RH8 = 120,
    GPIO_PIN_RH9 = 121,
    GPIO_PIN_RH10 = 122,
    GPIO_PIN_RH11 = 123,
    GPIO_PIN_RH12 = 124,
    GPIO_PIN_RH13 = 125,
    GPIO_PIN_RH14 = 126,
    GPIO_PIN_RH15 = 127,
    GPIO_PIN_RJ0 = 128,
    GPIO_PIN_RJ1 = 129,
    GPIO_PIN_RJ2 = 130,
    GPIO_PIN_RJ3 = 131,
    GPIO_PIN_RJ4 = 132,
    GPIO_PIN_RJ5 = 133,
    GPIO_PIN_RJ6 = 134,
    GPIO_PIN_RJ7 = 135,
    GPIO_PIN_RJ8 = 136,
    GPIO_PIN_RJ9 = 137,
    GPIO_PIN_RJ10 = 138,
    GPIO_PIN_RJ11 = 139,
    GPIO_PIN_RJ12 = 140,
    GPIO_PIN_RJ13 = 141,
    GPIO_PIN_RJ14 = 142,
    GPIO_PIN_RJ15 = 143,
    GPIO_PIN_RK0 = 144,
    GPIO_PIN_RK1 = 145,
    GPIO_PIN_RK2 = 146,
    GPIO_PIN_RK3 = 147,
    GPIO_PIN_RK4 = 148,
    GPIO_PIN_RK5 = 149,
    GPIO_PIN_RK6 = 150,
    GPIO_PIN_RK7 = 151,

    /* This element should not be used in any of the GPIO APIs.
       It will be used by other modules or application to denote that none of the GPIO Pin is used */
    GPIO_PIN_NONE = -1

} GPIO_PIN;


void GPIO_Initialize(void);

// *****************************************************************************
// *****************************************************************************
// Section: GPIO Functions which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

uint32_t GPIO_PortRead(GPIO_PORT port);

void GPIO_PortWrite(GPIO_PORT port, uint32_t mask, uint32_t value);

uint32_t GPIO_PortLatchRead ( GPIO_PORT port );

void GPIO_PortSet(GPIO_PORT port, uint32_t mask);

void GPIO_PortClear(GPIO_PORT port, uint32_t mask);

void GPIO_PortToggle(GPIO_PORT port, uint32_t mask);

void GPIO_PortInputEnable(GPIO_PORT port, uint32_t mask);

void GPIO_PortOutputEnable(GPIO_PORT port, uint32_t mask);

// *****************************************************************************
// *****************************************************************************
// Section: GPIO Functions which operates on one pin at a time
// *****************************************************************************
// *****************************************************************************

static inline void GPIO_PinWrite(GPIO_PIN pin, bool value)
{
    GPIO_PortWrite(pin>>4, (uint32_t)(0x1) << (pin & 0xF), (uint32_t)(value) << (pin & 0xF));
}

static inline bool GPIO_PinRead(GPIO_PIN pin)
{
    return (bool)(((GPIO_PortRead(pin>>4)) >> (pin & 0xF)) & 0x1);
}

static inline bool GPIO_PinLatchRead(GPIO_PIN pin)
{
    return (bool)((GPIO_PortLatchRead(pin>>4) >> (pin & 0xF)) & 0x1);
}

static inline void GPIO_PinToggle(GPIO_PIN pin)
{
    GPIO_PortToggle(pin>>4, 0x1 << (pin & 0xF));
}

static inline void GPIO_PinSet(GPIO_PIN pin)
{
    GPIO_PortSet(pin>>4, 0x1 << (pin & 0xF));
}

static inline void GPIO_PinClear(GPIO_PIN pin)
{
    GPIO_PortClear(pin>>4, 0x1 << (pin & 0xF));
}

static inline void GPIO_PinInputEnable(GPIO_PIN pin)
{
    GPIO_PortInputEnable(pin>>4, 0x1 << (pin & 0xF));
}

static inline void GPIO_PinOutputEnable(GPIO_PIN pin)
{
    GPIO_PortOutputEnable(pin>>4, 0x1 << (pin & 0xF));
}


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END
#endif // PLIB_GPIO_H
