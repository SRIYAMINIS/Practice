#include <stdio.h>

int main(void) {
	char cons;
	scanf("%c",&cons);
	if((cons=='a'||cons=='A')||(cons=='e'||cons=='E')||(cons=='i'||cons=='I')||(cons=='o'||cons=='O')||(cons=='u'||cons=='U')){
		printf("vowel");
	}
	else{
		printf("consonant");
	}
	return 0;
}
