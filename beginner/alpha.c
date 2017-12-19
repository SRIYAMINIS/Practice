#include <stdio.h>

int main(void) {
	char a,b;
	scanf("%c",&a);
	b=(int)a;
	if((b>=65&&b<=96)||(b>=97&&b<=122)){
		printf("it is a alphabet");
	}
	else{
		printf("it is not analphabet");
	}
	return 0;
}
