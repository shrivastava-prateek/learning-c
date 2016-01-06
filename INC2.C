#include<stdio.h>
#include<conio.h>
int main ()
{ int i[]={3,5};
int *p=i;
int j = --*p++;
clrscr();
printf("j=%d",j);
system("pause");
getch();
return 0;
}