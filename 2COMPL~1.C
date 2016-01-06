#include<stdio.h>
#include<conio.h>
int main ()
{int b,c;
int a=0xFFFF;
clrscr();
b=5;
c=~b+1;  /*2's complenent of'b' by using negation unary operator,
ghis will give the 1's complement of 'b' and adding 1 to this
wull give 2's complement of b*/

printf("%d %x",a,c);  /*'%x' is a format specifier which
converts an integer to its corressponding hexadecimal
representation*/
getch();
return 0;
}