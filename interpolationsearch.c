#include<stdio.h>
#include<stdlib.h>
#define max 10

int array[]={10,14,19,26,27,31,33,35,42,44};
int low=0;
int high=sizeof(array)/sizeof(array[0])-1;
int mid=-1;

void find(int data)
{

while(low<high)
{
		
mid=low+(((double)high-low)/(array[high]-array[low])*(data-array[low]));

if(data=mid)
{
	printf("Data is find at %d position",mid);
	break;
}
else if(data>mid)
{
	low=mid;
}
else if(data<mid)
{
	high=mid;
}
}
}

int main()
{
	find(44);
	return 0;
}
