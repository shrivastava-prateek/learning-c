# include <stdio.h>
#include<conio.h>
int fun(int **ptr);
int main()
{
int i=10, j=20;
const int *ptr = &i;
clrscr();
printf(" i = %5X", ptr);
printf(" ptr = %d", *ptr);
ptr = &j;
printf(" j = %5X", ptr);
printf(" ptr = %d", *ptr);
getch();
return 0;
}