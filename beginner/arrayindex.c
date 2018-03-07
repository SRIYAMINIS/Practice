#include <stdio.h>
int main(void)
{
	int a[10],b,i,temp;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		printf("%d   %d\n",a[i],i);
	}
	
	return 0;
}
