#include<stdio.h>
#include<conio.h>
int main(){
int *p[10];
int *q;
void *r;
printf("%d %d\n%d %d",sizeof(*p),sizeof(p),sizeof(q),sizeof(r));
getch();
return 0;
}