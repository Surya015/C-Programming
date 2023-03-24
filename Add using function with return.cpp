#include <stdio.h>

int sum(int x, int y)
{
	int c;
	c = x + y;
	return c;

	
}

int main()
{
	int a, b;
	printf("Enter number 1:");
	scanf("%d", &a);
	
	printf("Enter number 2:");
	scanf("%d", &b);
	
	int c = sum(a, b);
	printf("Sum of %d and %d : %d", a, b, c);
	
	return 0;

}

