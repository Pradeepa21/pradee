#include<iostream.h>
#include<stdio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("Enter the 3 numbers");
scanf("%d%d%d",&n1&n2&n3);
if(n1>n2)
{
if(n1>n3)
printf("%d is the largest number",n1);
else
printf("%d is the largest number",n3);
}
if(n2>n3)
printf("%d is the largest number",n2);
else
printf("%d is the largest number",n3);
getch();
}
