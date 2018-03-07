#include<stdio.h>
int main()
{
 int s,temp,sum=0;
 printf("enter the digits");
 scanf("%d",&s);
while(s>0)
{
 temp=s%10;
 sum=sum+temp;
 s=s/10;
 }
 printf("%d",sum);
 return 0;
 }
