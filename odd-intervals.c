#include<iostream.h>
#include<stdio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the two interval");
scanf("%d%d,&a,&b);
printf("The odd numbers betwwen the interval %d,%d :/n",a,b);
for(i=a+1;i<b;i++)
{
if(i%2!=0)
printf("%d",i);
}
getch();
}
