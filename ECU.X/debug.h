/*******************************************************************
 * @brief           DriverConfig.c
 * @brief           
 * @return          N/A
 * @note            assembles bytes together to make a valid data packet 
 *******************************************************************/

#ifndef DEBUG_H
#define	DEBUG_H

#include <xc.h>
#include <stdbool.h>
#include "DriverConfigs.h"

enum debugStates {
    NO_DEBUG = 0,
    THROTTLE_BRAKE = 1,
    BATTERY_DEBUG_VOLTS = 2,
    BATTERY_DEBUG_TEMPS = 3,
    BATTERY_DEBUG_POWER = 4,
    FAULT_RECOVERY = 5,
    NUM_DEBUG_STATES = 12,
            Find_State =6,
            State_fault=7,
            Reset=8,
            comm_on=9,
            buttons = 10,
            error_rate = 11
};

void handleDebugRequests();
//    extern void Send_put2(unsigned char _data);
//    extern void sendData2(unsigned char whereToSend);
//    extern bool receiveData2();
//    extern void ToSend2(const unsigned char where, const unsigned int what);
extern int getstate();
extern int getstatefault();
void ThrottleMenu(char menuitem);
void BrakeMenu(char menuitem);
void SettingMenu(char menuitem);
void BatteryMenu(char menuitem);
void ComMenu(char menuitem);
void DriverMenu(char menuitem);
void SelectDriver();
void ClearScreen();
void MenuBrakeLightValue(char cont);

void MenuPrint(char Menuloc, char Subloc);
void MenuClearFlag();

#endif	/* DEBUG_H */

