#include<stdio.h>
void main()
{
int n,i=1,f=1;
printf("enter n");
scanf("%d",&n);
while(i<=n)
{
f=f*i;
i++;
}
printf("\n f=%d",f);
}
