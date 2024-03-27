//                            USER DEFINED SETTINGS
//   Set driver type, fonts to be loaded, pins used and SPI control method etc.
//
//   See the User_Setup_Select.h file if you wish to be able to define multiple
//   setups and then easily select which setup file is used by the compiler.
//
//   If this file is edited correctly then all the library example sketches should
//   run without the need to make any more changes for a particular hardware setup!

#define USER_SETUP_ID 71

#ifdef ECARD_MHS4_DISPLAY
    #define RPI_DISPLAY_TYPE
    #define ILI9486_DRIVER

    #define TFT_MISO  1
    #define TFT_MOSI  2
    #define TFT_SCLK  3
    #define TFT_DC    4    
    #define TFT_CS    7   
    #define TFT_RST   8   
    #define TOUCH_CS  9 

    #define LOAD_GLCD
    #define LOAD_FONT2
    #define LOAD_FONT4
    #define LOAD_FONT6
    #define LOAD_FONT7
    #define LOAD_FONT8
    #define LOAD_GFXFF

    #define SMOOTH_FONT

    #define SPI_FREQUENCY  80000000   
    #define SPI_READ_FREQUENCY  6000000 
    #define SPI_TOUCH_FREQUENCY  2500000
#endif
