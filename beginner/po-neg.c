#include <stdio.h>

int main(void) {
   int a;
   scanf("%d",&a);
   if(a<0){
   	printf("negative number");
   }
   else if(a>0){
   	printf("positive number");
   }
   else{
   	printf("zero");
   }
	return 0;
}

