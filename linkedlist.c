#include<stdio.h>
#include<alloc.h>

#include<conio.h>

void insert();
int print();
void delete();

typedef struct link
{
int data;
struct link *next;
}node;

node *head =NULL;

int main ()
{ char ch;int n;
clrscr();
insert();
n=print();
while(n)
{
printf("\nDo you want to delete an element , press 'Y' and if no then press 'n': ");
scanf("%s",&ch);
if(ch=='n'||ch=='N')
break;
delete();
n=print();
}
printf("\nThank you ;)");
getch();
return 0;
}

void insert()
{
char ch;
int x; 
node *temp;
for(;;)
{
printf("\nenter the element to be inserted:");
scanf("%d",&x);
temp = (node*)malloc(sizeof(node));
temp->data =x;
temp->next =head;
head=temp;
printf("\ndo you want to insert again : enter 'y' or not then press 'n': ");
scanf("%s",&ch);
if(ch=='n')
break;
}
}

int print()
{
char ch;
node* temp = head;
if(temp==NULL)
{
printf("\n The list is empty !!");
return 0;
}
printf("\nList is :");
while(temp!=NULL)
{
printf("%d   ",temp->data);
temp=temp->next;
}
return 1;
}

void delete()
{
int x;char ch;
node *temp,*ttemp;
temp=head;
printf("\nenter the element which you want to delete : ");
scanf("%d",&x);
while(temp->data!=x)
{ttemp=temp;
temp=temp->next;
}
if(temp==head)
{
head=temp->next;
free(temp);
return;
}
ttemp->next=temp->next;
free(temp);
}
