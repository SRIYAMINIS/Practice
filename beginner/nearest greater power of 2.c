#include<stdio.h>
int main(void)
{
	int n,i,a,b,c;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			printf("%d",a);
			break;
		}
	}


	return 0;
}
