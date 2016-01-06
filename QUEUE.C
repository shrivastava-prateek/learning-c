#include <conio.h>
#include <stdio.h>
#define max 50
void enque();
void deque();
void display();
int menu();
int queue[max], front,rear=-1,a;

void main()
{
	int ch;
	clrscr();
printf("Enter the size of queue\n");
scanf("%d",&a);
	do{
		ch=menu();
		switch(ch)
		{
			case 1: enque(a);
			break;
			case 2: deque();
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
	printf("\nQueue");
	printf("\n1.Enque\n2.Deque\n3.Display\n4.Exit");
	printf("\nEnter your Choice:");
	scanf("%d",&ch);
	return ch;
}

void enque(int a)
{
int element;
	if(rear==a-1)
		printf("\nOverflow");
	else
	{
if(rear==-1)
front=0;
		printf("\nEnter Element:");
		scanf("%d",&element);
		printf("\nElement %d has been enqued at %d", element, rear+1);
		queue[++rear]=element;
	}
}

void deque()
{int item ;
	if(front==-1)
		printf("\nUnderflow");
	else
	{item=queue[front];
if(front==0&&rear==0)
rear=-1;

		front++;
		if(!(front>rear))
		printf("\n %d has been popped out!",item);
	}
}

void display()
{ int a=front;
	if(front==-1)
		printf("\nQueue is Empty!!");
	else
	{
		int i;
		for(i=a;i<=rear;i++)
			printf("%d",queue[i]);
	}
}