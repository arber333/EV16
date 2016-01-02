#include "MCSComms.h"

bool requestMCSData();
bool receiveCommMCS();
bool readyToSendMCS = true;
bool MCS_COMMS_ERROR = false;
extern int carActive;
bool requestMCSData() {
    if (((MCSTimer > BOARD_RESEND_MIN+100) && (readyToSendMCS)) || (MCSTimer > BOARD_TIMEOUT)) {
        static int MCSErrorCounter = 0;
        
        RS485_Direction2(TALK);
        if (!readyToSendMCS) {
            MCSErrorCounter++;
            if (MCSErrorCounter > 1) {
                MCSErrorCounter = 0;
                return false;
            }
        } else {
            readyToSendMCS = false;
            MCSErrorCounter = 0;
        }
        ToSend(RESPONSE_ADDRESS, ECU_ADDRESS);
        ToSend(OUTPUT_ACTIVE, carActive);
        ToSend(THROTTLE_OUTPUT, throttle1 * 40.95);
        ToSend(BRAKE_OUTPUT, brake * 40.95);
        sendData(MCS_ADDRESS);
        MCSTimer = 0;
    }
    return true;
}

bool receiveCommMCS() {
    if (receiveData()) {
        if (receiveArray[RESPONSE_ADDRESS] == MCS_ADDRESS) {
            readyToSendMCS = true;
            MCSTimer = 0;
            return true;
        } else return false;
    } else return false;
    return true;
}
