

#include "mcc_generated_files/mcc.h"
#include "functions.h"
#include "Communications.h"
#include "NokiaLCD.h"

/*
                         Main application
 */

int Start = 0;
char i;
char ddata[11];

void main(void) {
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    NokiaStart();
    LED_SetDigitalOutput();
    LED_SetHigh();
    int x = 0;
    while (1) {
        
        Delay(1000);
        clearLcd();
        gotoXy(3,3);  //0-14,0-5
        //NokiaStr(":");
        NokiaStr("Hello World!");
        //Delay(1000);
        GREEN_Toggle();
        BLUE_Toggle();
        YELLOW_Toggle();
        LED_Toggle();
        x++;
    }
    respondECU();
    updateComms();
}
/**
 End of File
 */