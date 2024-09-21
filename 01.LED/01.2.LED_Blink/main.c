#include "reg52.h"

//redefine system variable name
typedef unsigned int u16;
typedef unsigned char u8;

sbit LED1=P2^0;

//ten_us = 1, delay about 10us, depend on Cystal
void delay_10us(u16 ten_us){
	while(ten_us--);
}

void main(){
	while(1){
		LED1=0; //Light On
		delay_10us(50000); // Delay about 450ms
		LED1=1; //Light Off
		delay_10us(50000);
	}
}