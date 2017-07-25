#include<iostream.h>
#include<stdio.h>
void main()
{
double a;
printf("Enter the num");
scanf("%lf",&a);
if(a<=0)
{
if(a<0)
printf("The num is negative");
else
printf("The num is zero");
}
else
printf("The num is positive);
}
