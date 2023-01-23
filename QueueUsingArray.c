#include<stdio.h>
#include<stdlib.h>
#define max 10
void enqueue();
void dequeue();
void display();

int queue[max];
int front=-1;
int rear=-1;

void enqueue()
{
	int d;
	if(rear==max)
	{
		printf("overflow");
		return;
	}
	else if(front==-1)
	{
	    printf("Enter Data:");
		scanf("%d",&d);
	    front=rear=0;
	    queue[rear]=d;
	}
	
	else
	{
		printf("Enter Data:");
		scanf("%d",&d);
		queue[++rear]=d;
	}
	
}

void dequeue()
{
	if(front==rear)
	{
		printf("Element is %d",queue[rear]);
		rear=front=-1;
	}
	else if(front==-1)
	{
		printf("underflow");
		return;
	}
	else
	{
		printf("Element is %d",queue[front]);
		front++;	
	}
}
void display()
{
	int i=front;
	for(;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
}
 
 int main()
 {
 	int ch;
 while (1)
 {
 printf("1.Enqueue Operation\n");
 printf("2.Dequeue Operation\n");
 printf("3.Display the Queue\n");
 printf("4.Exit\n");
 printf("Enter your choice of operations : ");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1:
 enqueue();
 break;
 case 2:
 dequeue();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 default:
 printf("Incorrect choice \n");
 } 
 } 
 }
