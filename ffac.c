#include<stdio.h>
void main()
{
int n,i,f=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("\nf=%d",f);
}
