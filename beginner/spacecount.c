#include  <stdio.h>
#include <string.h>
int main(void)
{
    char s[200];
    int count = 0, i,n,ans;
    scanf("%[^\n]s", s);
    n=strlen(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("%d",count);
   return 0;
}
