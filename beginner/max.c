#include <stdio.h>
int main(void)
{
	int a[10],i,j,temp,n=10;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i] < a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	printf("%d",a[0]);
	return 0;
}
