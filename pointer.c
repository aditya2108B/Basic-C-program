#include<stdio.h>
void main()
{
    int a,b;
    int *p1,*p2;
    printf("enter the value of a &b");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    printf("\n original value of a=%d",*p1);
    printf("\n Address of a=%u",p1);
    //aditya
    printf("\n origional value of b=%d",*p2);
    printf("\n address of a=%u",p2);
}