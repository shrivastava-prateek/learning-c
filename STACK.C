#include <conio.h>
#include <stdio.h>
#define max 50
void push();
void pop();
void display();
int menu();
int stack[max], top=0;

void main()
{
	int ch;
	clrscr();
	do{
		ch=menu();
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
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

void push()
{
	if(top==max)
		printf("\nOverflow");
	else
	{
		int element;
		printf("\nEnter Element:");
		scanf("%d",&element);
		printf("\nElement(%d) has been pushed at %d", element, top);
		stack[top++]=element;
	}
}

void pop()
{int item ;
	if(top==-1)
		printf("\nUnderflow");
	else
	{item=stack[top];
		top--;
		printf("\n %d ELement has been popped out!",item);
	}
}

void display()
{
	if(top==0)
		printf("\nStack is Empty!!");
	else
	{
		int i;
		for(i=0;i<max;i++)
			printf("%d",stack[i]);
	}
}