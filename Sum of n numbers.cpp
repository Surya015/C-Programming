#include<stdio.h>
int main()
{
	int n, sum;
	printf("Enter the N number:");
	scanf("%d", &n);
	while(n>0)
	{
		sum = n* (n+1)/2;
		printf("%d", sum);
		break;
	}
	return 0;
}
