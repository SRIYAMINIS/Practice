
#include<stdio.h>
int main(void)
{
   int a,i,arm=0,rem,temp,c=0;
   scanf("%d",&a);
   if(a==0 && a<=-1)
   {
   	printf("%d",c);
   }
   else
   {
   	temp=a;
   	while(temp!=0)
   	{
   		rem=temp%10;
   		arm=arm+rem*rem*rem;
   		temp=temp/10;
   	}
   	if(a==arm)
   	{
   		printf("Yes");
   	}
   	else
   	{
   		printf("No");
   	}
   }
   return 0;
}
