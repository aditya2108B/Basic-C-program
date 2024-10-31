#include<stdio.h>
void main()
{
int a,b,t;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("a=%d\nb=%d",a,b);
}
