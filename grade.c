#include<stdio.h>
void main()
{
int m;
printf("enter the marks");
scanf("%d",&m);
if(m>=81&&m<=100)
{
printf("\n merit");
}
else if(m>=71&&m<=80)
{
printf("\n distinction");
}
else if(m>=60&&m<=70)
{
printf("\n First class");
}
else if(m>=50&&m<=59)
{
printf("\n second class");
}
else if(m>=40&&m<=49)
{
printf("\n pass");
}
else
{
printf("\n fail");
}
}
