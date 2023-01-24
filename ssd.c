#include<reg51.h>
sbit red=P1^0;
sbit yellow=P1^1;
sbit green=P1^2;
void ssd_delay(int y); 
void main(){
	red=yellow=green=0;
	while(1){
		red=1;
		ssd_delay(9);
		red=0;
		yellow=1;
		ssd_delay(5);
		yellow=0;
		green=1;
		ssd_delay(9);
		green=0;
	}
}
void ssd_delay(int y){
	unsigned char
	ssd[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
	unsigned char x;
	unsigned int i;
	P2=0x00;

		for(x=0;x<=y;x++){
		P2=ssd[x];
		for(i=0;i<50000;i++);
		}
}