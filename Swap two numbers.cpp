#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter Value of x: ");
	scanf("%d", &x);
	printf("\nEnter Value of y: ");
	scanf("%d", &y);

	int c = x;
	x = y;
	y = c;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}

