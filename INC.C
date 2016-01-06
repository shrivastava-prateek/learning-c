#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f;
a=b=f=3;
clrscr();
c =a++ + a++;
d= ++b + ++b;
e= ++f + f++;
printf("%d %d %d",c,d,e);
getch();
return 0;
}

