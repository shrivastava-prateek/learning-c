#include<stdio.h>
#include<conio.h>
int main ()
{unsigned char i=0x80;
int a =i<<1;
clrscr();
printf("%d %d",a,i);
getch();
return 0;
}