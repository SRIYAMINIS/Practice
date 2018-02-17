//prime or not
#include<stdio.h>
int main(void)
{
	int n,i,flag=0;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("Invalid number to find prime or not");
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("prime");
		else
		printf("Not prime");
	}
	return 0;
}
