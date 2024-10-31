#include<stdio.h>
void main()
{
int n,i=1,sum=0;
printf("enter n");
scanf("%d",&n);
do
{
sum=sum+i;
i++;
}while(i<=n);
printf("%d\n",sum);
}
