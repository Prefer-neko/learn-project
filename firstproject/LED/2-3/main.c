#include <REGX52.H>
#include <INTRINS.H>

void Delay500ms(void)	//@12.000MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	while(1)
	{
		P2=0xfe;//11111110
		Delay500ms();
		P2=0xfd;//11111101
		Delay500ms();
		P2=0xfb;//11111011
		Delay500ms();
		P2=0xf7;//11110111
		Delay500ms();
		P2=0xef;//11101111
		Delay500ms();
		P2=0xdf;//11011111
		Delay500ms();
		P2=0xbf;//10111111
		Delay500ms();
		P2=0x7f;//01111111
		Delay500ms();
		
	}
}