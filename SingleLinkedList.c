#include<stdio.h>
#include<stdlib.h>

void insertend(int);
void insertbeg(int);
void insertafter(int);
void display();
struct node
{
	int data;
	struct node *link; 
};
struct node *head=NULL;
int pos=0;

void insertend(int d)
{
	struct node *ptr,*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=d;
	p->link=NULL;
	pos++;
	
	if(head==NULL)
	{	
		head=p;
		ptr=p;
	}
	else 
	{
		ptr->link=p;
		ptr=ptr->link;
	}
}

void insertbeg(int d)
{
    struct node *ptr,*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=d;
	p->link=NULL;
	pos++;
	
	if(head==NULL)
	{
		head=p;
		ptr=p;
	}	
	else
	{
		p->link=head;
		head=p;
	}
}

void insertafter(int d)
{
     struct node *ptr,*p,*t;
     int dat;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=d;
	p->link=NULL;
	display();
	printf("\nAfter which data do you want to insert:");
	scanf("%d",&dat);
	
	for(t=head;t!=NULL;t=t->link)
	{
	    if(t->data==dat)
	    {
	        break;
	    }
	}
	p->link=t->link;
	t->link=p;
}

void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	
}

int main()
{
	insertbeg(20);
	insertbeg(40);
	insertbeg(50);
	insertbeg(70);
	insertend(10);
	insertafter(30);
	display();
	return 0;
	
}
