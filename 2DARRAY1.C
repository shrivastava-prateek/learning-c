#include<stdio.h>
#include<conio.h>
int main ()
{
int a[][2]={1,2,3,4,5,6};
int *p=(int*)a;
clrscr();
printf("%u %d %u %d %u\n",*a,*p,*(a+0),\
*(*(a+0)),*a[0]);
printf("%u %u\n",&a,&a+1);
printf("%u %u %d %u %u\n",a,*a,**a,a+1,*(a+1));
printf("%u %u\n",a[0],a[0]+1);
getch();
return 0;
}