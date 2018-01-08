#include <stdio.h>

int main(void) {
	int a,b,i=1,temp;
	scanf("%d %d",&a,&b);
	temp=a;
	while(i<b){
		a=a*temp;
		i++;
	}
	printf("%d",a);
	return 0;
}
