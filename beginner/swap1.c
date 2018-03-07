#include<stdio.h>
int main(void)
{
	int i,j,k;
	scanf("%d",&i);
	scanf("%d",&j);
	printf("before swapping i=%d and j=%d",i,j);
	k=i;
	i=j;
	j=k;
	printf("\nafter swapping i=%d and j=%d",i,j);
	return 0;
}
