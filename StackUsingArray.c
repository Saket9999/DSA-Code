
#include<stdio.h>
#include<stdlib.h>
#define max 10


int stack[max];
int top=-1;
void push(int p);
void pop();
int tops();
void isempty();
void display();

void push(int p)
{
	if(top==max)
	{
		printf("Overflow");
		return;
	}
	else
	{
		stack[++top]=p;
		
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Underflow");
		return;
	}
	else
	{
		printf("Poped Data is %d",stack[top]);
		top--;
		
	}
}
void isempty()
{
	if(top==-1)
	{
	    printf("YES");
    	return;
	}
	else
	{
	    printf("NO");
    	return;
	}
}

int tops()
{
	return stack[top];
}

void display()
{
	int i;
	for(i=top;i>-1;i--)
	{
		printf("%d",stack[i]);
	}
}


int main() {
    // Write C code here
    int data,ch;
    while(1)
    {
    	printf("\n1)push\n 2)pop\n 3)top\n 4)isempty\n 5)display\n");
    	printf("Enter Your Choice:");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:
    			printf("Enter Data:");
    			scanf("%d",&data);
    			push(data);
    			break;
    		case 2:
				pop();
				break;
			case 3:
				printf("Top element is %d",top);
				break;
			case 4:
				isempty();
				break;		
			case 5:
				display();
				break;
			case 6:
				exit(0);	
			default:	
				printf("You have Entered Wrong Choice Enter it again");
				break;		
    		
		}
	}
   

    return 0;
}
