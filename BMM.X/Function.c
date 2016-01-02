
#include "Function.h"

void Setup(void) {
    PinSetMode();
    INDICATOR = 1;
    // setup internal clock for 72MHz/36MIPS
    // 12 /2 = 6  *24 = 144 / 2=72
    CLKDIVbits.PLLPRE = 0; // PLLPRE (N2) 0=/2c
    CLKDIVbits.DOZE = 0;
    PLLFBD = 22; // pll multiplier (M) = +2
    CLKDIVbits.PLLPOST = 0; // PLLPOST (N1) 0=/2 
    // Initiate Clock Switch to Primary Oscillator with PLL (NOSC = 0b011)
    __builtin_write_OSCCONH(0x03);
    __builtin_write_OSCCONL(OSCCON | 0x01);
    // Wait for Clock switch to occur
    while (OSCCONbits.COSC != 0b011);
    while (!OSCCONbits.LOCK); // wait for PLL ready


    //INTCON1bits.NSTDIS = 1; //no nesting of interrupts

    PPSUnLock;
    PPSout(_OC1, _RP5);
    Pin_24_Output = TX1_OUTPUT;
    RX1_Pin_Map = 25;
    Pin_22_Output = TX2_OUTPUT;
    RX2_Pin_Map = 23;
    PPSLock;

    
    
    initTimerOne();
    //initTimerTwo();
    begin(receiveArray, sizeof (receiveArray), BMM_ADDRESS, false, Send_put, Receive_get, Receive_available, Receive_peek);
    UART_init();
    begin1(receiveArray1, sizeof (receiveArray1), BMM_MASTER_ADDRESS, false, Send_put1, Receive_get1, Receive_available1, Receive_peek1);
    UART1_init();
    //i2c_init();
    //PWM_Init();
}

void Delay(int wait) {
    int x;
    for (x = 0; x < wait; x++) {
        delay_ms(1); //using predif fcn
    }
}

void PinSetMode(void) {
    AD1PCFGL = 0XFFFF;
    TRISBbits.TRISB1 = OUTPUT; //Set LED as output
    TRISBbits.TRISB5 = OUTPUT; //BMS Slave Turn on
    TRISBbits.TRISB6 = OUTPUT; //Fan control OUT

    TRISAbits.TRISA4 = OUTPUT;
    TRISAbits.TRISA7 = OUTPUT;
    TRISBbits.TRISB13 = OUTPUT; // RS485 Direction Pin OUTPUT
    LATBbits.LATB13 = 0;
    //SS CLEAR AND SET
    TRISAbits.TRISA1=OUTPUT;
    TRISBbits.TRISB0=OUTPUT;
    
    LATCbits.LATC6=1;
    LATCbits.LATC7=1;
    
    S0_TRIS=OUTPUT;     //Select Comm Line Mux S0
    S1_TRIS=OUTPUT;     //Select Comm Line Mux S1
    S0 =0;
    S1 =0;
    
    BMS_TURN_ON = 1;
    
}
