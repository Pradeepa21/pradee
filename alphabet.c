#include<iostream.h>
#include<stdio.h>
void main()
{
char ch;
printf("Enter the character");
scanf("%c",&ch);
if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
printf("%c is an alphabet",ch);
else
printf("%c is not an alphabet",ch);
}
