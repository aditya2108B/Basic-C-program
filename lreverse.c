#include<stdio.h>
void main()
{
int n,rev=0,digi;
printf("enter n");
scanf("%d",&n);
while(n!=0)
{
digi=n%10;
n=n/10;
rev=rev*10+digi;
}
printf("%d",rev);
}
