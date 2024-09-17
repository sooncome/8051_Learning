#include <regx52.h>

sbit LED1=P2^0; //Connect to LED Cathode(-)
                //LED Anode(+) connect to 5V

void main(){
	LED1=0;     //Set to LOW to Light up LED
	while(1);
}