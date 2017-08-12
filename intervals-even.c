#include<iostream.h>
#include<stdio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the higher limit\n");
scanf("%d",&a);
printf("Enter the lower limit\n");
scanf("%d",&b);
for(i=a+1;i<b;i++)
{
if(i%2==0)
printf("%d",i);
}
getch();
}
