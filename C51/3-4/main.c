#include <REGX52.H>

void Delay(int xms)	
{
	unsigned char data i, j;
	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
unsigned char LEDnum;

void main()
{
	P2=~0x01;
	while(1)
	{
		
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			LEDnum++;
			if(LEDnum>=8)
					LEDnum=0;
			
			P2=~(0x01<<LEDnum);
			
		}
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			LEDnum--;
			if(LEDnum>=8)
					LEDnum=7;
			P2=~(0x01<<LEDnum);
			
		}
	}
}

