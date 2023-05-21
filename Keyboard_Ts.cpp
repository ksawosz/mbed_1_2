#include "Keyboard_Ts.h"

KeyboardTs::KeyboardTs(){
    ts.Init(240, 320);
}

enum KeyboardState KeyboardTs::eRead(){
    ts.GetState(&TS_State);      
      if (TS_State.TouchDetected)
      {
          if(TS_State.X < 81)
          {
            switch(TS_State.Y/80){
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
