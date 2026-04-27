#include <reg51.h>
sbit K0=P1^0;
sbit mic=P1^7; //??????
bit flag; //?????
unsigned char i; //????
unsigned char song[]=
{
	1,1,2,1,4,3,1,1,2,1,5,4,
	1,1,8,6,4,3,2,2,7,7,6,4,5,4,15
}; //???????
int tone[]=
{
	1012,903,852,759,716,638,568,506,478,426,379
}; //??????
unsigned char beat[]=
{
	60,10,40,40,40,80,60,10,40,40,40,80,
	60,10,40,40,40,40,40,60,10,40,40,40,80
};//????
unsigned char beath=(65536-50000)/256;
unsigned char beatl=(65536-50000)%256; //??????
unsigned char time,j,k;
int toneh,tonel;