#include<stdio.h>
int main()
{
	char ename[20];
	int employeeid, basic, hra, da, gross, it, netpay;
	
	printf("Enter Employee Name:");
	scanf("%s", &ename);
	
	printf("Employee ID:");
	scanf("%d", &employeeid);
	
	printf("Enter basic pay:");
	scanf("%d", &basic);
	printf("Basic pay:%d\n", basic);
	
	hra = basic/100*2;
	printf("HRA:%d\n", hra);
	
	da = basic/100*1;
	printf("DA:%d\n", da);
	
	gross = basic + hra + da;
	printf("Gross:%d\n", gross);
	
	it = basic/100*5;
	printf("It:%d\n", it);
	
	netpay = gross - it;
	printf("Netpay:%d\n", netpay);

return 0;
}

