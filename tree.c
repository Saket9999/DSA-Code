#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left
	int data;
	struct node *right; 
};
struct node *head=NULL;

void insert(int d)
{
	struct node *ptr,*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=d;
	p->link=NULL;
	p->link=NULL;
	
	if(head==NULL)
	{	
		head=p;
		ptr=p;
		return;
	}
		while(d<ptr->data && ptr->left!=NULL)
		{
			ptr=ptr->left;
		}
		if(d<ptr->data)
		{
			ptr->left=p;
			ptr=p;
		}
	
		while(d>ptr->data && ptr->right!=NULL)
		{
			ptr=ptr->right;
		}
		
		if(d>ptr->data)
		{
			ptr->right=p;
			ptr=p;
		}
	}

	void show(struct node *t)
	{
		show(t->left);
		printf("%d ",t->data);
		show(t->right);
	}

int main()
{
	insert(50);
	insert(30);
	insert(20);
	insert(35);
	insert(44);
	show(head);
	return 0;
}
