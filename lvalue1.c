#include<stdio.h>
#include<conio.h>
int main ()
{int i=5;
clrscr();
do
{
printf("%d",(--i)--);
}while(i>=2 &&  i<5);
getch();
return 0;
}