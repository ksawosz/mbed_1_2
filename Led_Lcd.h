#ifndef LEDLCD_H
#define LEDLCD_H

#include "LCD_DISCO_F429ZI.h"

class LedLcd{
    public:
    void On(uint8_t);
    LedLcd(uint8_t);
    private:
    LCD_DISCO_F429ZI lcd;
    uint8_t ucColumn;
    void DisplayKeyboard(uint8_t ucPOS, uint32_t uiCOLOR);
};

#endif
