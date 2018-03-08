#include <stdio.h>
int main(void) 
{
	int n,p,sum;
	printf("enter the number1:");
	scanf("%d",&n);
	printf("enter the number2:");
	scanf("%d",&p);
	sum=n+p;
	if(sum%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
