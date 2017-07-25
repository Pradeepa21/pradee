#include<iostream.h>
%include<stdio.h>
{
int i,n,sum=0;
printf("Enter the num of values to add");
scanf("%d",n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d is the sum value",sum);
}
