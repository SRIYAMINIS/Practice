#include <stdio.h>
int main()
{
	int i,j,k;
	scanf("%d",&i);
	scanf("%d",&j);
	printf("before swapping i=%d and j=%d",i,j);
	k=i;
	i=j;
	j=k;
	printf("after swapping i=%d and j=%d",i,j);
	return 0;
}
