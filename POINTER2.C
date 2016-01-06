#include<stdio.h>
#include<conio.h>
int main ()
{
int arr[] = {10, 20};
    int *p = arr;
    int d;
clrscr();
   d= *p++;
printf("arr[0] = %d, arr[1] = %d, *p = %d", \
arr[0], arr[1], d);
getch();
return 0;
}