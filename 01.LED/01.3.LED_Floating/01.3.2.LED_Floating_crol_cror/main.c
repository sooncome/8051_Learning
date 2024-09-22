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