# include <stdio.h>
#include<conio.h>
int main()
{
int a,i,j;
clrscr();
for(i=0,j=0;i<5,j<10;i++,j++)
{
printf("%d \t %d \n",i,j);
}
/* The condition here is
i<5,j<10;
So the result is returned by comma operator which
is always the second operand. So, it goes till j < 10
becomes 0.*/
getch();
return 0;
}