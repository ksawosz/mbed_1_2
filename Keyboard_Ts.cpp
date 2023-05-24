#include "Keyboard_Ts.h"

#define BUTTON_WIDTH 80
#define BUTTON_WIDTH 80
#define SCREEN_SIZE_X 240
#define SCREEN_SIZE_Y 320

KeyboardTs::KeyboardTs(uint8_t ucSetColumn){
    ts.Init(SCREEN_SIZE_X, SCREEN_SIZE_Y);
    ucColumn = ucSetColumn;
}

enum KeyboardState KeyboardTs::eRead(){
    ts.GetState(&TS_State);      
      if (TS_State.TouchDetected)
      {
          if((TS_State.X >= ucColumn*BUTTON_WIDTH)&&(TS_State.X <= (ucColumn+1)*BUTTON_WIDTH))
          {
            switch(TS_State.Y/BUTTON_WIDTH){
                case 0:
                return BUTTON_0;

                case 1:
                return BUTTON_1;

                case 2:
                return BUTTON_2;
               
                case 3:
                return BUTTON_3;
                
                default:
                return RELEASED;
            }
          }
      }
    return RELEASED;
}
