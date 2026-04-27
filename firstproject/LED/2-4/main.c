#include <REGX52.H>

void Delay1ms(unsigned int xms)	//@12.000MHz
{
	unsigned char data i, j;
	while(xms)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}
void main()

{
		while(1)
		{
		P2=0xfe;//11111110
		Delay1ms(100);
		P2=0xfd;//11111101
		Delay1ms(100);
		P2=0xfb;//11111011
		Delay1ms(100);
		P2=0xf7;//11110111
		Delay1ms(100);
		P2=0xef;//11101111
		Delay1ms(100);
		P2=0xdf;//11011111
		Delay1ms(100);
		P2=0xbf;//10111111
		Delay1ms(100);
		P2=0x7f;//01111111
		Delay1ms(100);
		}

}