#include <stdio.h>

int main(void) 
{
	int n,r,temp,a;
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	if(temp==r){
		printf("palindrome");
	}
	else{
		printf("not a palindrome");
	}
	return 0;
}

