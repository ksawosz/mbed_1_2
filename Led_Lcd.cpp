#include "Led_Lcd.h"

LedLcd::LedLcd(uint8_t ucSetColumn){
    lcd.Clear(LCD_COLOR_BLACK);
    BSP_LCD_SetFont(&Font24);
    ucColumn = ucSetColumn;
}

void LedLcd::On (uint8_t ucY_POS){
    for(uint8_t ucRectCounter = 0; ucRectCounter < 4; ucRectCounter++){
        lcd.SetTextColor(LCD_COLOR_BLUE);
        lcd.FillRect(ucColumn*80, ucRectCounter*80, 80, 80);
        lcd.SetTextColor(LCD_COLOR_GREEN);
        lcd.DrawRect(ucColumn*80, ucRectCounter*80, 80, 80);

        lcd.SetBackColor(LCD_COLOR_RED);
        lcd.SetTextColor(LCD_COLOR_WHITE);
        lcd.DisplayChar(ucColumn*80, ucRectCounter*80, ucRectCounter+48);
    }

    lcd.SetTextColor(LCD_COLOR_GREEN);
    lcd.FillRect(ucColumn*80, ucY_POS*80, 80, 80);
    lcd.SetBackColor(LCD_COLOR_RED);
    lcd.SetTextColor(LCD_COLOR_WHITE);
    lcd.DisplayChar(ucColumn*80, ucY_POS*80, ucY_POS+48);
}
