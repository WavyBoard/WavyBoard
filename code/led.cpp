/*----------------------------------------------------------------------------
MAIN.CPP
=^.,.^= DENISE THUY VY NGUYEN 
GABBY BAUTISTA
11/17/2017
CS435 PROJECT 
PROGRAMMING USING MBED 
----------------------------------------
Buttons will change LED patterns.
Potentiometers will change the speed of the pattern.
Potentiometers will cahnge the brightness of the LEDS.
*----------------------------------------------------------------------------*/
#include "mbed.h"
#include "pindef.h"
#include "DigitalIn.h"
#include "DigitalOut.h"
    
//Button
DigitalIn B1(PA_0);  //AnalogIn 
DigitalIn B2(PA_1);  //AnalogIn 
DigitalIn B3(PA_6);  //D12
DigitalIn B4(PA_8);  //D7
DigitalIn B5(PA_9);  //D8
DigitalIn B6(PC_7);  //D9
DigitalIn B7(PB_6);  //D10

//SPEAKER
PwmOut speaker(PB_10);  //P10
//potentiometers 
AnalogIn volume(PA_4);  //A2
AnalogIn signal(PB_0);  //A3

//Light CN-10 SIDE TEST */
//ROW 1
DigitalOut L1a(PC_4);   //D2 34  
DigitalOut L1b(PB_13);  //D4 30  
DigitalOut L1c(PB_14);  //D5 28
DigitalOut L1d(PB_15);  //D6 26
//ROW 2
DigitalOut L2a(PB_1);   //D7
DigitalOut L2b(PB_2);   //D8
DigitalOut L2c(PB_12);  //D10
DigitalOut L2d(PA_11);  //D11
//ROW 3
DigitalOut L3a(PA_12);  //D13
DigitalOut L3b(PC_5);   //D14
DigitalOut L3c(PC_6);   //D15
DigitalOut L3d(PC_8);
//CN-9
//ROW 4
DigitalOut L4a(PA_10);  //D2
DigitalOut L4b(PB_3);   //D3
DigitalOut L4c(PB_5);   //D4
DigitalOut L4d(PB_4);   //D5

void startState(){
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 0; L2c = 0; L3c = 0; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
}

void Pattern1(){
    L1a = 0; L2a = 1; L3a = 0; L4a = 1;  
    L1b = 0; L2b = 1; L3b = 0; L4b = 1;
    L1c = 0; L2c = 1; L3c = 0; L4c = 1;
    L1d = 0; L2d = 1; L3d = 0; L4d = 1;
    wait(1); 
    L1a = 1; L2a = 0; L3a = 1; L4a = 0;  
    L1b = 1; L2b = 0; L3b = 1; L4b = 0;
    L1c = 1; L2c = 0; L3c = 1; L4c = 0;
    L1d = 1; L2d = 0; L3d = 1; L4d = 0;
}

void Pattern2(){
    L1a = 1; L2a = 1; L3a = 1; L4a = 1;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 1; L2c = 1; L3c = 1; L4c = 1;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0; 
    wait(1); 
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 1; L2b = 1; L3b = 1; L4b = 1;
    L1c = 0; L2c = 0; L3c = 0; L4c = 0;
    L1d = 1; L2d = 1; L3d = 1; L4d = 1;
}

void Pattern3(){
    L1a = 1; L2a = 0; L3a = 1; L4a = 0;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 1; L2c = 0; L3c = 1; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
    wait(1); 
    L1a = 0; L2a = 1; L3a = 0; L4a = 1;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 0; L2c = 1; L3c = 0; L4c = 1;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
}

void Pattern4(){        
    L1a = 1; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 1; L3b = 0; L4b = 0;
    L1c = 0; L2c = 0; L3c = 1; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 1;
    wait(1);
    L1a = 0; L2a = 0; L3a = 0; L4a = 1;  
    L1b = 0; L2b = 0; L3b = 1; L4b = 0;
    L1c = 0; L2c = 1; L3c = 0; L4c = 0;
    L1d = 1; L2d = 0; L3d = 0; L4d = 0;
}

void Pattern5(){        
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 0; L2c = 0; L3c = 0; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
    wait(1);
    L1a = 1; L2a = 1; L3a = 1; L4a = 1;  
    L1b = 1; L2b = 1; L3b = 1; L4b = 1;
    L1c = 1; L2c = 1; L3c = 1; L4c = 1;
    L1d = 1; L2d = 1; L3d = 1; L4d = 1;
}

void Pattern6(){        
    L1a = 1; L2a = 1; L3a = 1; L4a = 1;  
    L1b = 1; L2b = 0; L3b = 0; L4b = 1;
    L1c = 1; L2c = 0; L3c = 0; L4c = 1;
    L1d = 1; L2d = 1; L3d = 1; L4d = 1;
    wait(1);
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 1; L3b = 1; L4b = 0;
    L1c = 0; L2c = 1; L3c = 1; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
}
//320
//1000
void S1(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 7680 * signal + 320;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S2(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 6000 * signal + 1000;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S3(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 5000 * signal + 1500;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S4(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 4000 * signal + 2000;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S5(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 3000 * signal + 2500;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S6(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 2000 * signal + 3000;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S7(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 1000 * signal + 3500;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}
//Simple software debouncing
void delay(float time){
    volatile int i;
    for(i=0; i<1000000*time; i++);
}

/*----------------------------------------------------------------------------
 MAIN function
*----------------------------------------------------------------------------*/
int main(){
    startState();


    while(1){

    if(!(B1 & 0x1)){                            
    wait(.05);
    S1();
    Pattern1();
    wait(1);
    Pattern1();
    startState();
    }
    
    if(!(B2 & 0x1)){  
        S2();
    Pattern2();
    wait(1);
    Pattern2();
    startState();
    }
        
    if(!(B3 & 0x1)){ 
        S3();
    Pattern3();
    wait(1);
    Pattern3();
    startState();
    }
        
    if(!(B4 & 0x1)){  
    S4();
        Pattern4();
    wait(1);
    Pattern4();
    startState();
    }
        
    if(!(B5 & 0x1)){ 
        S5();
    Pattern5();
    wait(1);
    Pattern5();
    startState();
    }
        
    if(!(B6 & 0x1)){ 
        S6();
    Pattern6();
    wait(1);
    Pattern6();
    startState();
    }
        
    if(!(B7 & 0x1)){
        S7();
    S1();
            Pattern1(); wait(1); Pattern1();
    wait(1);
            S2();
    Pattern2(); wait(1); Pattern2();
    wait(1);
            S3();
    Pattern3(); wait(1); Pattern3();
    wait(1);
            S4();
    Pattern4(); wait(1); Pattern4();
    wait(1);
            S5();
    Pattern5(); wait(1); Pattern5();
    wait(1);
            S6();
    Pattern6(); wait(1); Pattern6();     
    startState();
        }
    }
}
/*----------------------------------------------------------------------------
MAIN.CPP
=^.,.^= DENISE THUY VY NGUYEN 
GABBY BAUTISTA
11/17/2017
CS435 PROJECT 
PROGRAMMING USING MBED 
----------------------------------------
Buttons will change LED patterns.
Potentiometers will change the speed of the pattern.
Potentiometers will cahnge the brightness of the LEDS.
*----------------------------------------------------------------------------*/
#include "mbed.h"
#include "pindef.h"
#include "DigitalIn.h"
#include "DigitalOut.h"
    
//Button
DigitalIn B1(PA_0);  //AnalogIn 
DigitalIn B2(PA_1);  //AnalogIn 
DigitalIn B3(PA_6);  //D12
DigitalIn B4(PA_8);  //D7
DigitalIn B5(PA_9);  //D8
DigitalIn B6(PC_7);  //D9
DigitalIn B7(PB_6);  //D10

//SPEAKER
PwmOut speaker(PB_10);  //P10
//potentiometers 
AnalogIn volume(PA_4);  //A2
AnalogIn signal(PB_0);  //A3

//Light CN-10 SIDE TEST */
//ROW 1
DigitalOut L1a(PC_4);   //D2 34  
DigitalOut L1b(PB_13);  //D4 30  
DigitalOut L1c(PB_14);  //D5 28
DigitalOut L1d(PB_15);  //D6 26
//ROW 2
DigitalOut L2a(PB_1);   //D7
DigitalOut L2b(PB_2);   //D8
DigitalOut L2c(PB_12);  //D10
DigitalOut L2d(PA_11);  //D11
//ROW 3
DigitalOut L3a(PA_12);  //D13
DigitalOut L3b(PC_5);   //D14
DigitalOut L3c(PC_6);   //D15
DigitalOut L3d(PC_8);
//CN-9
//ROW 4
DigitalOut L4a(PA_10);  //D2
DigitalOut L4b(PB_3);   //D3
DigitalOut L4c(PB_5);   //D4
DigitalOut L4d(PB_4);   //D5

void startState(){
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 0; L2c = 0; L3c = 0; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
}

void Pattern1(){
    L1a = 0; L2a = 1; L3a = 0; L4a = 1;  
    L1b = 0; L2b = 1; L3b = 0; L4b = 1;
    L1c = 0; L2c = 1; L3c = 0; L4c = 1;
    L1d = 0; L2d = 1; L3d = 0; L4d = 1;
    wait(1); 
    L1a = 1; L2a = 0; L3a = 1; L4a = 0;  
    L1b = 1; L2b = 0; L3b = 1; L4b = 0;
    L1c = 1; L2c = 0; L3c = 1; L4c = 0;
    L1d = 1; L2d = 0; L3d = 1; L4d = 0;
}

void Pattern2(){
    L1a = 1; L2a = 1; L3a = 1; L4a = 1;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 1; L2c = 1; L3c = 1; L4c = 1;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0; 
    wait(1); 
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 1; L2b = 1; L3b = 1; L4b = 1;
    L1c = 0; L2c = 0; L3c = 0; L4c = 0;
    L1d = 1; L2d = 1; L3d = 1; L4d = 1;
}

void Pattern3(){
    L1a = 1; L2a = 0; L3a = 1; L4a = 0;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 1; L2c = 0; L3c = 1; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
    wait(1); 
    L1a = 0; L2a = 1; L3a = 0; L4a = 1;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 0; L2c = 1; L3c = 0; L4c = 1;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
}

void Pattern4(){        
    L1a = 1; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 1; L3b = 0; L4b = 0;
    L1c = 0; L2c = 0; L3c = 1; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 1;
    wait(1);
    L1a = 0; L2a = 0; L3a = 0; L4a = 1;  
    L1b = 0; L2b = 0; L3b = 1; L4b = 0;
    L1c = 0; L2c = 1; L3c = 0; L4c = 0;
    L1d = 1; L2d = 0; L3d = 0; L4d = 0;
}

void Pattern5(){        
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 0; L3b = 0; L4b = 0;
    L1c = 0; L2c = 0; L3c = 0; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
    wait(1);
    L1a = 1; L2a = 1; L3a = 1; L4a = 1;  
    L1b = 1; L2b = 1; L3b = 1; L4b = 1;
    L1c = 1; L2c = 1; L3c = 1; L4c = 1;
    L1d = 1; L2d = 1; L3d = 1; L4d = 1;
}

void Pattern6(){        
    L1a = 1; L2a = 1; L3a = 1; L4a = 1;  
    L1b = 1; L2b = 0; L3b = 0; L4b = 1;
    L1c = 1; L2c = 0; L3c = 0; L4c = 1;
    L1d = 1; L2d = 1; L3d = 1; L4d = 1;
    wait(1);
    L1a = 0; L2a = 0; L3a = 0; L4a = 0;  
    L1b = 0; L2b = 1; L3b = 1; L4b = 0;
    L1c = 0; L2c = 1; L3c = 1; L4c = 0;
    L1d = 0; L2d = 0; L3d = 0; L4d = 0;
}
//320
//1000
void S1(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 7680 * signal + 320;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S2(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 6000 * signal + 1000;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S3(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 5000 * signal + 1500;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S4(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 4000 * signal + 2000;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S5(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 3000 * signal + 2500;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S6(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 2000 * signal + 3000;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}

void S7(){
 float period; 
 for(float i = 0; i < 10; i+= 2){
    period = 1000 * signal + 3500;             
    speaker.period(1/period);        
    speaker = volume*i; 
    wait(0.5); 
    }
}
//Simple software debouncing
void delay(float time){
    volatile int i;
    for(i=0; i<1000000*time; i++);
}

/*----------------------------------------------------------------------------
 MAIN function
*----------------------------------------------------------------------------*/
int main(){
    startState();


    while(1){

    if(!(B1 & 0x1)){                            
    wait(.05);
    S1();
    Pattern1();
    wait(1);
    Pattern1();
    startState();
    }
    
    if(!(B2 & 0x1)){  
        S2();
    Pattern2();
    wait(1);
    Pattern2();
    startState();
    }
        
    if(!(B3 & 0x1)){ 
        S3();
    Pattern3();
    wait(1);
    Pattern3();
    startState();
    }
        
    if(!(B4 & 0x1)){  
    S4();
        Pattern4();
    wait(1);
    Pattern4();
    startState();
    }
        
    if(!(B5 & 0x1)){ 
        S5();
    Pattern5();
    wait(1);
    Pattern5();
    startState();
    }
        
    if(!(B6 & 0x1)){ 
        S6();
    Pattern6();
    wait(1);
    Pattern6();
    startState();
    }
        
    if(!(B7 & 0x1)){
        S7();
    S1();
            Pattern1(); wait(1); Pattern1();
    wait(1);
            S2();
    Pattern2(); wait(1); Pattern2();
    wait(1);
            S3();
    Pattern3(); wait(1); Pattern3();
    wait(1);
            S4();
    Pattern4(); wait(1); Pattern4();
    wait(1);
            S5();
    Pattern5(); wait(1); Pattern5();
    wait(1);
            S6();
    Pattern6(); wait(1); Pattern6();     
    startState();
        }
    }
}
