#include<stdio.h>
void main()
{
char name[10];
int m1,m2,m3,m4,m5,total;
float avg;
printf("enter the name ");
scanf("%s",name);
printf("\nenter the mark of five subject");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
printf("\nname=%s\ntotal=%d\navg=%f",name,total,avg);
}
