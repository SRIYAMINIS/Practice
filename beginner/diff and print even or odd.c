#include <stdio.h>

int main(void) {
   int n1,n2,diff;
   scanf("%d %d",&n1,&n2);
   diff=abs(n1-n2);
   if(diff%2==0)
   {
   	printf("even");
   }
   else
   {
   	printf("odd");
   }
	return 0;
}
