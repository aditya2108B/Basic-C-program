#include<stdio.h>
void main()
{
int n,i=1,sum=0;
printf("enter n");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("\n sum=%d",sum);
}
