#include <stdio.h>
int Howmonth(int x , int y)
{
	return (x - y);
}

int main ()
{
	int money = 1000;
	int month = 0;
	while (money <= 5000) {
		int x = 800;
		int y = 100;
		money = money + Howmonth(x,y);
		month++;
	}
	printf ("%d" , month);
	return 0;
}