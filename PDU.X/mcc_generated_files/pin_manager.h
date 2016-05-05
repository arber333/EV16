/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - v3.00
        Device            :  PIC18F45K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_1 aliases
#define LED_1_TRIS               TRISA3
#define LED_1_LAT                LATA3
#define LED_1_PORT               RA3
#define LED_1_ANS                ANSA3
#define LED_1_SetHigh()    do { LATA3 = 1; } while(0)
#define LED_1_SetLow()   do { LATA3 = 0; } while(0)
#define LED_1_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define LED_1_GetValue()         RA3
#define LED_1_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define LED_1_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define LED_1_SetDigitalMode()   do { ANSA3 = 0; } while(0)


// get/set LED_2 aliases
#define LED_2_TRIS               TRISA4
#define LED_2_LAT                LATA4
#define LED_2_PORT               RA4
#define LED_2_SetHigh()    do { LATA4 = 1; } while(0)
#define LED_2_SetLow()   do { LATA4 = 0; } while(0)
#define LED_2_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define LED_2_GetValue()         RA4
#define LED_2_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISA4 = 0; } while(0)



// get/set CLEAR aliases
#define CLEAR_TRIS               TRISB0
#define CLEAR_LAT                LATB0
#define CLEAR_PORT               RB0
#define CLEAR_WPU                WPUB0
#define CLEAR_ANS                ANSB0
#define CLEAR_SetHigh()    do { LATB0 = 1; } while(0)
#define CLEAR_SetLow()   do { LATB0 = 0; } while(0)
#define CLEAR_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define CLEAR_GetValue()         RB0
#define CLEAR_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define CLEAR_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define CLEAR_SetPullup()    do { WPUB0 = 1; } while(0)
#define CLEAR_ResetPullup()   do { WPUB0 = 0; } while(0)
#define CLEAR_SetAnalogMode()   do { ANSB0 = 1; } while(0)
#define CLEAR_SetDigitalMode()   do { ANSB0 = 0; } while(0)


// get/set DIGI_UP_DN aliases
#define DIGI_UP_DN_TRIS               TRISB3
#define DIGI_UP_DN_LAT                LATB3
#define DIGI_UP_DN_PORT               RB3
#define DIGI_UP_DN_WPU                WPUB3
#define DIGI_UP_DN_ANS                ANSB3
#define DIGI_UP_DN_SetHigh()    do { LATB3 = 1; } while(0)
#define DIGI_UP_DN_SetLow()   do { LATB3 = 0; } while(0)
#define DIGI_UP_DN_Toggle()   do { LATB3 = ~LATB3; } while(0)
#define DIGI_UP_DN_GetValue()         RB3
#define DIGI_UP_DN_SetDigitalInput()    do { TRISB3 = 1; } while(0)
#define DIGI_UP_DN_SetDigitalOutput()   do { TRISB3 = 0; } while(0)

#define DIGI_UP_DN_SetPullup()    do { WPUB3 = 1; } while(0)
#define DIGI_UP_DN_ResetPullup()   do { WPUB3 = 0; } while(0)
#define DIGI_UP_DN_SetAnalogMode()   do { ANSB3 = 1; } while(0)
#define DIGI_UP_DN_SetDigitalMode()   do { ANSB3 = 0; } while(0)


// get/set DIGI_INC aliases
#define DIGI_INC_TRIS               TRISB4
#define DIGI_INC_LAT                LATB4
#define DIGI_INC_PORT               RB4
#define DIGI_INC_WPU                WPUB4
#define DIGI_INC_ANS                ANSB4
#define DIGI_INC_SetHigh()    do { LATB4 = 1; } while(0)
#define DIGI_INC_SetLow()   do { LATB4 = 0; } while(0)
#define DIGI_INC_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define DIGI_INC_GetValue()         RB4
#define DIGI_INC_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define DIGI_INC_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define DIGI_INC_SetPullup()    do { WPUB4 = 1; } while(0)
#define DIGI_INC_ResetPullup()   do { WPUB4 = 0; } while(0)
#define DIGI_INC_SetAnalogMode()   do { ANSB4 = 1; } while(0)
#define DIGI_INC_SetDigitalMode()   do { ANSB4 = 0; } while(0)


// get/set DIGI_CS aliases
#define DIGI_CS_TRIS               TRISB5
#define DIGI_CS_LAT                LATB5
#define DIGI_CS_PORT               RB5
#define DIGI_CS_WPU                WPUB5
#define DIGI_CS_ANS                ANSB5
#define DIGI_CS_SetHigh()    do { LATB5 = 1; } while(0)
#define DIGI_CS_SetLow()   do { LATB5 = 0; } while(0)
#define DIGI_CS_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define DIGI_CS_GetValue()         RB5
#define DIGI_CS_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define DIGI_CS_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define DIGI_CS_SetPullup()    do { WPUB5 = 1; } while(0)
#define DIGI_CS_ResetPullup()   do { WPUB5 = 0; } while(0)
#define DIGI_CS_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define DIGI_CS_SetDigitalMode()   do { ANSB5 = 0; } while(0)


// get/set DIGI_CS aliases
#define DIGI_CS_TRIS               TRISB5
#define DIGI_CS_LAT                LATB5
#define DIGI_CS_PORT               RB5
#define DIGI_CS_WPU                WPUB5
#define DIGI_CS_ANS                ANSB5
#define DIGI_CS_SetHigh()    do { LATB5 = 1; } while(0)
#define DIGI_CS_SetLow()   do { LATB5 = 0; } while(0)
#define DIGI_CS_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define DIGI_CS_GetValue()         RB5
#define DIGI_CS_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define DIGI_CS_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define DIGI_CS_SetPullup()    do { WPUB5 = 1; } while(0)
#define DIGI_CS_ResetPullup()   do { WPUB5 = 0; } while(0)
#define DIGI_CS_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define DIGI_CS_SetDigitalMode()   do { ANSB5 = 0; } while(0)


// get/set FLOW_CNTL aliases
#define FLOW_CNTL_TRIS               TRISC5
#define FLOW_CNTL_LAT                LATC5
#define FLOW_CNTL_PORT               RC5
#define FLOW_CNTL_ANS                ANSC5
#define FLOW_CNTL_SetHigh()    do { LATC5 = 1; } while(0)
#define FLOW_CNTL_SetLow()   do { LATC5 = 0; } while(0)
#define FLOW_CNTL_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define FLOW_CNTL_GetValue()         RC5
#define FLOW_CNTL_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define FLOW_CNTL_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define FLOW_CNTL_SetAnalogMode()   do { ANSC5 = 1; } while(0)
#define FLOW_CNTL_SetDigitalMode()   do { ANSC5 = 0; } while(0)


// get/set FLOW_CNTL aliases
#define FLOW_CNTL_TRIS               TRISC5
#define FLOW_CNTL_LAT                LATC5
#define FLOW_CNTL_PORT               RC5
#define FLOW_CNTL_ANS                ANSC5
#define FLOW_CNTL_SetHigh()    do { LATC5 = 1; } while(0)
#define FLOW_CNTL_SetLow()   do { LATC5 = 0; } while(0)
#define FLOW_CNTL_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define FLOW_CNTL_GetValue()         RC5
#define FLOW_CNTL_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define FLOW_CNTL_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define FLOW_CNTL_SetAnalogMode()   do { ANSC5 = 1; } while(0)
#define FLOW_CNTL_SetDigitalMode()   do { ANSC5 = 0; } while(0)


// get/set FLOW_CNTL aliases
#define FLOW_CNTL_TRIS               TRISC5
#define FLOW_CNTL_LAT                LATC5
#define FLOW_CNTL_PORT               RC5
#define FLOW_CNTL_ANS                ANSC5
#define FLOW_CNTL_SetHigh()    do { LATC5 = 1; } while(0)
#define FLOW_CNTL_SetLow()   do { LATC5 = 0; } while(0)
#define FLOW_CNTL_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define FLOW_CNTL_GetValue()         RC5
#define FLOW_CNTL_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define FLOW_CNTL_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define FLOW_CNTL_SetAnalogMode()   do { ANSC5 = 1; } while(0)
#define FLOW_CNTL_SetDigitalMode()   do { ANSC5 = 0; } while(0)


// get/set DATA_OUT aliases
#define DATA_OUT_TRIS               TRISD4
#define DATA_OUT_LAT                LATD4
#define DATA_OUT_PORT               RD4
#define DATA_OUT_ANS                ANSD4
#define DATA_OUT_SetHigh()    do { LATD4 = 1; } while(0)
#define DATA_OUT_SetLow()   do { LATD4 = 0; } while(0)
#define DATA_OUT_Toggle()   do { LATD4 = ~LATD4; } while(0)
#define DATA_OUT_GetValue()         RD4
#define DATA_OUT_SetDigitalInput()    do { TRISD4 = 1; } while(0)
#define DATA_OUT_SetDigitalOutput()   do { TRISD4 = 0; } while(0)

#define DATA_OUT_SetAnalogMode()   do { ANSD4 = 1; } while(0)
#define DATA_OUT_SetDigitalMode()   do { ANSD4 = 0; } while(0)


// get/set OUTEN aliases
#define OUTEN_TRIS               TRISD5
#define OUTEN_LAT                LATD5
#define OUTEN_PORT               RD5
#define OUTEN_ANS                ANSD5
#define OUTEN_SetHigh()    do { LATD5 = 1; } while(0)
#define OUTEN_SetLow()   do { LATD5 = 0; } while(0)
#define OUTEN_Toggle()   do { LATD5 = ~LATD5; } while(0)
#define OUTEN_GetValue()         RD5
#define OUTEN_SetDigitalInput()    do { TRISD5 = 1; } while(0)
#define OUTEN_SetDigitalOutput()   do { TRISD5 = 0; } while(0)

#define OUTEN_SetAnalogMode()   do { ANSD5 = 1; } while(0)
#define OUTEN_SetDigitalMode()   do { ANSD5 = 0; } while(0)


// get/set LAT aliases
#define LAT_TRIS               TRISD6
#define LAT_LAT                LATD6
#define LAT_PORT               RD6
#define LAT_ANS                ANSD6
#define LAT_SetHigh()    do { LATD6 = 1; } while(0)
#define LAT_SetLow()   do { LATD6 = 0; } while(0)
#define LAT_Toggle()   do { LATD6 = ~LATD6; } while(0)
#define LAT_GetValue()         RD6
#define LAT_SetDigitalInput()    do { TRISD6 = 1; } while(0)
#define LAT_SetDigitalOutput()   do { TRISD6 = 0; } while(0)

#define LAT_SetAnalogMode()   do { ANSD6 = 1; } while(0)
#define LAT_SetDigitalMode()   do { ANSD6 = 0; } while(0)


// get/set CLK aliases
#define CLK_TRIS               TRISD7
#define CLK_LAT                LATD7
#define CLK_PORT               RD7
#define CLK_ANS                ANSD7
#define CLK_SetHigh()    do { LATD7 = 1; } while(0)
#define CLK_SetLow()   do { LATD7 = 0; } while(0)
#define CLK_Toggle()   do { LATD7 = ~LATD7; } while(0)
#define CLK_GetValue()         RD7
#define CLK_SetDigitalInput()    do { TRISD7 = 1; } while(0)
#define CLK_SetDigitalOutput()   do { TRISD7 = 0; } while(0)

#define CLK_SetAnalogMode()   do { ANSD7 = 1; } while(0)
#define CLK_SetDigitalMode()   do { ANSD7 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/