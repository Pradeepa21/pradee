#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1,i;
clrscr();
printf("enter the number and power/n");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
c=c*a;
}
printf("The number %d power %d value is %d",&a,&b,&c);
getch();
}
