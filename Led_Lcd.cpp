#include "Led_Lcd.h"

LedLcd::LedLcd(){
    lcd.Clear(LCD_COLOR_BLACK);
    BSP_LCD_SetFont(&Font24);
}

void LedLcd::On (uint8_t ucY_POS){
    for(uint8_t ucRectCounter = 0; ucRectCounter < 4; ucRectCounter++){
        lcd.SetTextColor(LCD_COLOR_BLUE);
        lcd.FillRect(0, ucRectCounter*80, 80, 80);
        lcd.SetTextColor(LCD_COLOR_GREEN);
        lcd.DrawRect(0, ucRectCounter*80, 80, 80);

        lcd.SetBackColor(LCD_COLOR_RED);
        lcd.SetTextColor(LCD_COLOR_WHITE);
        lcd.DisplayChar(0, ucRectCounter*80, ucRectCounter+48);
    }

    lcd.SetTextColor(LCD_COLOR_GREEN);
    lcd.FillRect(0, ucY_POS*80, 80, 80);
    lcd.SetBackColor(LCD_COLOR_RED);
    lcd.SetTextColor(LCD_COLOR_WHITE);
    lcd.DisplayChar(0, ucY_POS*80, ucY_POS+48);
}
