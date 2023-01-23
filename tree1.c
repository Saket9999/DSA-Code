#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right; 
};
struct node *head=NULL,*r;

void insert(int d)
{
	struct node *ptr,*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=d;
	p->left=NULL;
	p->right=NULL;

	
	if(head==NULL)
	{	
		head=p;
		ptr=p;
		return;
	}
	ptr=head;

	while(1)
	{
		while(d<ptr->data && ptr->left!=NULL)
		{
			ptr=ptr->left;
		}
		if(d<ptr->data)
		{

			ptr->left=p;
			ptr=p;
			break;
		}
	
		while(d>ptr->data && ptr->right!=NULL)
		{
			ptr=ptr->right;
		}
		
		if(d>ptr->data)
		{
		   
			ptr->right=p;
			ptr=p;
			break;
		}
	}	
	
	}
	
	void deletion(int d)
	{
		struct node *ptr,*prev;
	     	ptr=head;
while(1)
{
		while(d<ptr->data && ptr->left!=NULL)
		{
			prev=ptr;
			ptr=ptr->left;
		}
		if(d==ptr->data)
		{

		prev->left=NULL;
		break;
		}
	
		while(d>ptr->data && ptr->right!=NULL)
		{
			prev=ptr;
			ptr=ptr->right;
		}
		
		if(d==ptr->data)
		{
		  
		prev->right=NULL;
		break;
		}
		
    }
	}

	void show(struct node *t)
	{

	   if(t==NULL)
	    {
	        return;
	    }   

		show(t->left);

		printf("%d ",t->data);
		show(t->right);
	   
	}

int main()
{
	insert(50);
	insert(25);
	insert(75);
	insert(55);
	insert(52);
	show(head);
	deletion(55);
	printf("\n");
	show(head);
	return 0;
}
