#ifndef KEYBOARDTS_H
#define KEYBOARDTS_H

#include "TS_DISCO_F429ZI.h"

enum KeyboardState{
    BUTTON_0,
	BUTTON_1,
	BUTTON_2,
	BUTTON_3,
    RELEASED
};

class KeyboardTs{
    public:
    enum KeyboardState eRead();
    KeyboardTs(uint8_t);
    private:
    TS_DISCO_F429ZI ts;
    TS_StateTypeDef TS_State;
    uint8_t ucColumn;
};

#endif
