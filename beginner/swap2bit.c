#include <stdio.h>
int main(void)
{
	int i,j;
	scanf("%d",&i);
	scanf("%d",&j);
	printf("before swapping i=%d and j=%d",i,j);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("\nafter swapping i=%d and j=%d",i,j);
	return 0;
}
