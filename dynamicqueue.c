#include<stdio.h>
#include<stdlib.h>
struct QueueADT
{
int capacity ;
int front ;
int rear;
int *arr;	
};
struct QueueADT*creatQueue(int capacity)
{
struct QueueADT*temp=(struct QueueADT*)malloc(sizeof(struct QueueADT));
temp->capacity=capacity;
temp->front=-1;
temp->rear=-1;
temp->arr=(int*)malloc(sizeof(int)*temp->capacity);
return temp;
}
int isEmtyQueue(struct QueueADT* Q)
{
	if(Q->front ==-1)
	return 1;
	else 
	return 0;
}
int isFullQueue(struct QueueADT* Q)
{
	if(Q->front==0&&Q->rear==Q->capacity-1)
	{
		return 1;
	}
	else if(Q->front=Q->rear+1)
	{
		return 1;
	}
	else 
	return 0;
}
int Queuecapacity(struct QueueADT* Q)
{
	return (Q->capacity);
}
void doubleQueue(struct QueueADT* Q)
{

	Q->capacity=Q->capacity*2;
		int *temp=(int *)malloc(Q->capacity*sizeof(int));
		int i,j;
		for(i=Q->front,j=0;i!=Q->rear;j++)
		{
			temp[j]=Q->arr[i];
			if(i==Q->capacity/2-1 && Q->rear!=i)
			{
				i=0;
			}
			else
			i++;
		}
		free(Q->arr);
		Q->arr=temp;
		Q->front=0;
		Q->rear=Q->capacity/2-1;
}
void halfQueue(struct QueueADT* Q)
{
	Q->capacity=Q->capacity/2;
int* temp=(int *)malloc(Q->capacity*sizeof(int));
int i,j,l;
l=Q->capacity/2;
for(i=0,j=Q->front;i<l;i++)
{
temp[i]=Q->arr[j];
if(j==Q->capacity-1)
j=0;
else
j++;
}
free(Q->arr);
Q->arr=temp;
Q->capacity=l;
Q->front=0;
Q->rear=Q->capacity-1;
}

int main()
{
	struct QueueADT*Q=creatQueue(4);
	if(isEmtyQueue(Q))
	{
		
	}
	if(isFullQueue(Q))
	{
	}
	printf("\n Capacity of the Queue is %d",Queuecapacity(Q));
	return 0;
}
