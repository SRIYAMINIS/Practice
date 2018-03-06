#include <stdio.h>
int main()
{
	int d,n,f,a=0,sum=0,c=0;
	scanf("%d",&n);
	scanf("%d",&d);
	scanf("%d",&f);
	if(n>=0 && f>=0)
	{
		for(int i=0;i<n;i++)
		{
		a=a+d;
		sum=sum+a;
		}
		printf("%d",sum);
	}
	else
	{
		return c;
	}
	return 0;
}
