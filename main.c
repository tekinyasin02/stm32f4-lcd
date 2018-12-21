#include "defines.h"
#include "stm32f4xx.h"
#include "tm_stm32f4_delay.h"
#include "tm_stm32f4_hd44780.h"
   char veri[11] = "lcd deneme";
	
int main(void) {
    
    uint8_t customChar[] = {
        0x1F,   
        0x11,    
        0x11,   
        0x11,   
        0x11,  
        0x11,  
        0x11,    
        0x1F    
    };
   
    SystemInit();
      TM_HD44780_Clear();

    TM_HD44780_Init(16, 2);
    
   
    TM_HD44780_CreateChar(0, &customChar[0]);
    
    
    TM_HD44780_Puts(0, 0, "lcd");
    TM_HD44780_Puts(0, 1, veri);
     
		
		Delayms(3000);
    TM_HD44780_Clear();
		
		TM_HD44780_Puts(0,0 , "ikinci yazi");
 
    while (1) {
    
    }
}