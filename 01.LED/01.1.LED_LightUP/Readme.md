# Registers
  
Registers are the functions that 8051 chips can use  
But complier(Keil) will need target address to controll Registers  
head file are use to define the name of registers address, which makes easier link to use functions
```
#include <reg52.h>
```

# GPIO
### Registers
In head file defines address of GPIO  
```
sfr P0 = 0x80;
sfr P1 = 0x90;
sfr P2 = 0xA0;
sfr P3 = 0xB0;
```

# Light LED
```
#include <REGX52.H>

sbit LED1=P2^0; //Connect to LED Cathode(-)
                //LED Anode(+) connect to 5V through 10k resistor

void main(){
	LED1=0;     //Set to LOW to Light up LED
	while(1);
}
```
LED connection, Anode to 5V through 10k resistor, Cathod to P2.0, to light up LED need to assign LOW to P2.0  
>[!NOTE]
>```
>sbit LED1=P2^0;
>```
>sbit use to define one bit address  
>P2^0 means the 0bit of P2 port
  
# Complile
After build(F7), the complier will output hex file and size of the program
```
Build target 'Target 1'
linking...
Program Size: data=9.0 xdata=0 code=19
creating hex file from "01.1.LED_LightUP"...
"01.1.LED_LightUP" - 0 Error(s), 0 Warning(s).
```
