#include<stdio.h>
#include<alloc.h>
#include<conio.h>

void insert();
void print();
void delete();

typedef struct link
{
int data;
struct link *next;
}node;

node *head =NULL;

void main()
{
	int ch;
	clrscr();
	do{
		ch=menu();
		switch(ch)
		{
			case 1: insert();
			break;
			case 2: delete();
			break;
			case 3: print();
			break;
			case 4: exit();
			default: printf("\nEnter a valid choice!!");
		}
		getch();
	}while(1);
}

int menu()
{
	int ch;
	printf("\nStack");
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\nEnter your Choice:");
	scanf("%d",&ch);
	return ch;
}

void insert()
{
int x; 
node *temp;
printf("\nenter the element to be inserted:");
scanf("%d",&x);
temp = (node*)malloc(sizeof(node));
temp->data =x;
temp->next =head;
head=temp;
}

void print()
{
char ch;
int top;
node* temp = head;
if(temp==NULL)
{
printf("\n The stack is empty !!");
return;
}
top=head->data;
printf("\nStack is : ");
while(temp!=NULL)
{
printf("%d   ",temp->data);
temp=temp->next;
}
printf("where top is -> %d",top);
}

void delete()
{
int x;char ch;
node *temp,*ttemp;
temp=head;
head=head->next;
free(temp);
}
