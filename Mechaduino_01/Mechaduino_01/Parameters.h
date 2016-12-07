//Contains the Mechaduino parameter declarations

#ifndef __PARAMETERS_H__
#define __PARAMETERS_H__


//----Current Parameters-----

extern volatile float Ts;
extern volatile float Fs;

extern volatile float pKp;
extern volatile float pKi;
extern volatile float pKd;

extern volatile float vKp;
extern volatile float vKi;
extern volatile float vKd;

extern const PROGMEM float lookup[];


extern const int spr; //  200 steps per revolution
extern const float aps; // angle per step
extern int cpr; //counts per rev
extern const float stepangle;
extern volatile float PA;  //

extern const float iMAX;
extern const float rSense;
extern volatile int uMAX;


#define pi 3.14159265359;

#define IN_4  6
#define IN_3  5
#define VREF_2 4
#define VREF_1 9
#define IN_2  7
#define IN_1  8
#define ledPin  13
#define chipSelectPin A2 //output to chip select

#define step_pin 1
#define dir_pin 0

//for faster digitalWrite:
#define IN_1_HIGH() (REG_PORT_OUTSET0 = PORT_PA06)
#define IN_1_LOW() (REG_PORT_OUTCLR0 = PORT_PA06)
#define IN_2_HIGH() (REG_PORT_OUTSET0 = PORT_PA21)
#define IN_2_LOW() (REG_PORT_OUTCLR0 = PORT_PA21)
#define IN_3_HIGH() (REG_PORT_OUTSET0 = PORT_PA15)
#define IN_3_LOW() (REG_PORT_OUTCLR0 = PORT_PA15)
#define IN_4_HIGH() (REG_PORT_OUTSET0 = PORT_PA20)
#define IN_4_LOW() (REG_PORT_OUTCLR0 = PORT_PA20)
#define ledPin_HIGH() (REG_PORT_OUTSET0 = PORT_PA17)
#define ledPin_LOW() (REG_PORT_OUTCLR0 = PORT_PA17)
#define CHIPSELECT_HIGH() (REG_PORT_OUTSET1 = PORT_PB09)
#define CHIPSELECT_LOW() (REG_PORT_OUTCLR1 = PORT_PB09)

#ifdef ENABLE_PROFILE_IO  
  #define TEST1   2
  #define TEST2   3

  #define TEST2_HIGH() (REG_PORT_OUTSET0 = PORT_PA09)
  #define TEST2_LOW() (REG_PORT_OUTCLR0 = PORT_PA09)
  #define TEST1_HIGH() (REG_PORT_OUTSET0 = PORT_PA14)
  #define TEST1_LOW() (REG_PORT_OUTCLR0 = PORT_PA14)
#else
  #define TEST2_HIGH()
  #define TEST2_LOW() 
  #define TEST1_HIGH()
  #define TEST1_LOW() 
#endif


extern const int sin_1[];

#endif

