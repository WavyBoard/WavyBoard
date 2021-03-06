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

int main(){

    startState();
    wait(1);
    Pattern1();
    wait(1);
    startState();
    wait(1);
    Pattern2();
    wait(1); 
    startState();
    wait(1);
    Pattern3();
    wait(1); 
    startState();
    wait(1);
    Pattern4(); 
    wait(1); 
    startState(1);

}

