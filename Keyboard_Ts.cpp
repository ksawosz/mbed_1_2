#include "Keyboard_Ts.h"

#define BUTTON_WIDTH 80
#define BUTTON_HEIGHT 80
#define SCREEN_SIZE_X 240
#define SCREEN_SIZE_Y 320

KeyboardTs::KeyboardTs(uint8_t ucSetColumn){
    ts.Init(SCREEN_SIZE_X, SCREEN_SIZE_Y);
    ucColumn = ucSetColumn;
}

enum KeyboardState KeyboardTs::eRead(){
    ts.GetState(&TS_State);
    KeyboardState ButtonArray[4] = {BUTTON_0, BUTTON_1, BUTTON_2, BUTTON_3};     
      if (TS_State.TouchDetected)
      {
          if((TS_State.X >= ucColumn*BUTTON_WIDTH)&&(TS_State.X <= (ucColumn+1)*BUTTON_WIDTH))
          {
            return ButtonArray[TS_State.Y/BUTTON_HEIGHT];
          }
      }
    return RELEASED;
}
