#include<stdio.h>

int main ()
{
	int x = 20, y = 30;
	int temp;
	
	printf("before swapping x = %d and y = %d\n", x, y);
	
	x = x + y - (y = x);
	
	printf("after swapping x = %d and y = %d\n", x, y);
	
	return 0;
	
	
}
