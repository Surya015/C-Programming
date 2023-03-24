#include<stdio.h>
main()
{
int i=1,sum=0, n;
printf("Enter the values for n:");
scanf("%d",n);
while(i>=n)
{
sum=sum+i;
i++;
printf("The sum of n numbers is:%d",i);
}
return 0;
}

