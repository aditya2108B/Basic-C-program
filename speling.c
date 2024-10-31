#include<stdio.h>
void main()
{
int n;
printf("enter the number fron 1to 5");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\n one");
break;
case 2:
printf("\n two");
break;
case 3:
printf("\n three");
case 4:
printf("\n four ");
break;
case 5:
printf("\n five");
break;
default:
printf("\n invalid number");
break;
}
}
