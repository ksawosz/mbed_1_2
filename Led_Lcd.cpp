#include "Led_Lcd.h"

#define BUTTON_WIDTH 80
#define BUTTON_HEIGHT 80

LedLcd::LedLcd(uint8_t ucSetColumn){
    lcd.Clear(LCD_COLOR_BLACK);
    BSP_LCD_SetFont(&Font24);
    ucColumn = ucSetColumn;
}

void LedLcd::On (uint8_t ucY_POS){
    for(uint8_t ucRectCounter = 0; ucRectCounter < 4; ucRectCounter++){
        DisplayKeyboard(ucRectCounter, LCD_COLOR_BLUE);
    }
    DisplayKeyboard(ucY_POS, LCD_COLOR_GREEN);
}

void LedLcd::DisplayKeyboard(uint8_t ucPOS, uint32_t uiCOLOR){
    lcd.SetTextColor(uiCOLOR);
    lcd.FillRect(ucColumn*BUTTON_WIDTH, ucPOS*BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT);
    lcd.SetTextColor(LCD_COLOR_GREEN);
    lcd.DrawRect(ucColumn*BUTTON_WIDTH, ucPOS*BUTTON_HEIGHT, BUTTON_WIDTH, BUTTON_HEIGHT);
    lcd.SetBackColor(LCD_COLOR_RED);
    lcd.SetTextColor(LCD_COLOR_WHITE);
    lcd.DisplayChar(ucColumn*BUTTON_WIDTH, ucPOS*BUTTON_HEIGHT, ucPOS+48);
}
