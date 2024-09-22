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