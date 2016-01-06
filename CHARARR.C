#include<stdio.h>
#include<conio.h>
int main ()
{
char y[10]="abcdefghi";
char *p=y;
p=p+1;
clrscr();

printf("%s",p);
getch();
return 0;
}