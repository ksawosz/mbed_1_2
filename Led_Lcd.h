#ifndef LEDLCD_H
#define LEDLCD_H

#include "LCD_DISCO_F429ZI.h"

class LedLcd{
    public:
    void On(uint8_t);
    LedLcd();
    private:
    LCD_DISCO_F429ZI lcd;
};

#endif
