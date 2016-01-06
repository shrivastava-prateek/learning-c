#include<stdio.h>
#include<conio.h>
struct one
{
int a;
int b;
char c;
short int d;
char e;
};
struct node1
{
int data;
struct node1 *next;
};
typedef struct node1 node;
node n1;
int main ()
{
int d = sizeof(n1);
clrscr();
printf("%d %d %d",sizeof(struct one),d,sizeof(n1.next));
getch();
return 0;
}