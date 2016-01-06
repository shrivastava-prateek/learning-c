#include<stdio.h>
#include<conio.h>
int main ()
{int a[2][2]={1,2,3,4},i,j;
clrscr();
for(i=0;i<=1;i++)
for(j=0;j<=1;j++)
printf("%d",*a);
printf("end");
getch();
return 0;
}