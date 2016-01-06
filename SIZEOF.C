#include<stdio.h>
#include<conio.h>
int main()
{char *e;int i=4;
int d= sizeof(e+i++); /*this expressioninside the sizeof opertor
 do not evaluate and hence i++ also do not get evaluated.
it only checks the final upgraded data type of the result*/
clrscr();
printf("%d %d", d, i); /*The pointers pointing to any data type
is of constant size i.e, 2 bytes*/
getch();
return 0;
}
