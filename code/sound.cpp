/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/

#include "mbed.h"
#include "pindef.h"

//Define the PWM speaker output,  #define Dout0 PB_10
PwmOut speaker(Dout0);
//Define analog inputs #define Ain0 PA_0 #define Ain1 PA_1
AnalogIn volume(Ain0);
AnalogIn P2(Ain1);
//Define variables


int main(){
 while(1){
   float period; 
        //Create a saw-tooth sound wave (range: 320Hz to 8kHz)
  //Make the period and volume adjustable using the potentiometers
        for(float i = 0; i < 26; i+= 2){
      period = 7680 * P2 + 320; 
      speaker.period(1/period); 
      speaker = volume*i; 
            wait(0.5); 
    }
}
 
}