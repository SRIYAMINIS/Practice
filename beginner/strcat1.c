#include <stdio.h>
#include <string.h>
int main() {
   char s1[30], s2[30];
   int n,n1,i;
   scanf("%s",s1);
   scanf("%s",s2);
   n=strlen(s1);
   n1=strlen(s2);
   for(i=0;i<n1;i++)
   {
	s1[n]=s2[i];
	n++;
   }
   printf("%s",s1);
   return (0);
}
