
#include<stdio.h>
int main(void)
{
 int n,m,i,flag=0,b=0;
 scanf("%d",&n);
 scanf("%d",&m);
 if(n<=-1)
  {
    printf("%d",b);
  }
	else
  {
		if(n==0)
			{
				n=n+2;
			}
		else 
			{
				n=n+1;
			}
		while(n<m)
		{ 
			flag=0;
			for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
              {
                flag=1;
                break;
              }
         }
       if(flag==0)
       printf("%d ",n);
       ++n;
     }
	}
return 0;
}
