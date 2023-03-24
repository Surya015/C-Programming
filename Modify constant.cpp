#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int var = 10;

	int *p = (int* ) &var;
	*p = 7;

	printf("Modified constant variable:%d\n", var);

	return 0;
}

