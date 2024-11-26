# Floationg LED
LED will move to nearby LED, form LED1 to LED2, LED2 to LED3, etc...
In the example, there will be 2 method
## Method 1: Shift
```
#include "reg52.h"

//redifine system variable name
typedef unsigned int u16;
typedef unsigned char u8;

#define LED_Port P2

//ten_us = 1, delay about 10us, depend on Cystal
void delay_10us(u16 ten_us){
    while(ten_us--);
}

void main(){
    u8 i=0;
    while(1){
        for(i=0;i<8;i++){
            LED_Port=~(0x01<<i);
            delay_10us(50000);
        }
    }
}
```
C operator << will shift variable to left, for example, 0001<<1 = 0010  
## Method 2: Function _crol_, _cror_
>[!NOTE]
>Function include in libiary intrins.h, require to include at head  
```
#include "reg52.h"
#include "intrins.h"

//redifine system variable name
typedef unsigned int u16;
typedef unsigned char u8;

#define LED_Port P2

//ten_us = 1, delay about 10us, depend on Cystal
void delay_10us(u16 ten_us){
    while(ten_us--);
}

void main(){
    u8 i=0;
    LED_Port=~0x01;
    delay_10us(50000);
    while(1){
        for(i=0;i<7;i++){
            LED_Port=_crol_(LED_Port,1);
            delay_10us(50000);
        }
        for(i=0;i<7;i++){
            LED_Port=_cror_(LED_Port,1);
            delay_10us(50000);
        }
    }
}
```
_crol_(variable, i) is equal to variable<<i  
_cror_(variable, i) is equal to variable>>i  
