#include  <stdio.h>
#include  <string.h>
int main(void)
{
    char s[200];
    int count = 0, i,n,m;
    scanf("%[^\n]s", s);
    n=strlen(s);
    for (i = 0;s[i] != '\0';i++)
    {
    	m=(int)s[i];
	if ((m>=33 && m<=47)||(m>=58 && m<=64)||(m>=91 && m<=96)||(m>=123 && m<=126))
            count++;    
    }
    printf("%d",count);
   return 0;
}
