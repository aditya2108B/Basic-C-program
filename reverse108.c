#include<stdio.h>
void main()
{
int num,d1,d2,d3,d4,rev;
printf("enter the four digitt number");
scanf("%d",&num);
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
num=num/10;
d4=num%10;
rev=d1*1000+d2*100+d3*10+d4;
printf("rev=%d",rev);
}
