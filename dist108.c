#include<stdio.h>
void main ()
{
float km,m,cm,inch,feet;
printf("enter the km");
scanf("%f",&km);
m=km*1000;
cm=m*100;
inch=0.394*cm;
feet=inch*0.083;
printf("m=%f\ncm=%f\ninch=%f\nfeet=%f\n",m,cm,inch,feet);
}
