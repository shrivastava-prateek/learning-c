#include<stdio.h>
#include<conio.h>
int f(int a);
int f(unsigned int a);
int f(int a)
{ return ++a;}
int f(unsigned int a)
{ return --a;}
int main ()
{
clrscr();
printf("%d",f(5));
getch();
return 0;
}