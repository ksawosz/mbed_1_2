#ifndef KEYBOARDTSLCD_H
#define KEYBOARDTSLCD_H

#include "Keyboard_Ts.h"
#include "Led_Lcd.h"

class KeyboardTsLcd{
    public:
    KeyboardTsLcd(uint8_t);
    enum KeyboardState eRead();
    private:
    LedLcd *pLed;
    KeyboardTs *pKeyboard;
};

#endif
