/* 
 * File:   StateMachine.h
 * Author: User
 *
 * Created on June 9, 2015, 5:45 PM
 */

#ifndef STATEMACHINE_H
#define	STATEMACHINE_H

#ifdef	__cplusplus
extern "C" {
#endif


#define BMS_LED        5
#define ACTIVE_LED     3
#define IMD_INDICATOR  2
#define START_BUTTON   2
#define DEBUG_BUTTON   1

    void updateECUState();
extern int buttonArray[8];
extern int seekButtonChange();
extern void changeLEDState(int LED, bool state);
extern volatile unsigned int BootTimer;

struct powerStates {
    bool DDS;
    bool MCS;
    bool SAS;
    bool BMM;
};

enum BMM {
    BATTERY_FAULT = 0,
    BATTERY_VOLTS = 1,
    BATTERY_TEMPS = 2,
    BATTERY_POWER = 3
};

struct commsStates {
    bool DDS;
    bool MCS;
    bool SAS;
    bool BMM;
    bool PDU;
    int DDS_SEND;
    int MCS_SEND;
    int SAS_SEND;
    enum BMM BMM_SEND;
    int PDU_SEND;
};

struct faultStates {
    int DDS;
    int MCS;
    int SAS;
    int BMM;
    int PDU;
    int SS;
};
enum ECUstates {
    stopped = 0,
    booting = 1,
    running = 2,
    stopping = 3,
    softFault=4,
    fault = 5,
    override = 6,
    NUM_STATES = 7
};
#ifdef	__cplusplus
}
#endif

#endif	/* STATEMACHINE_H */

