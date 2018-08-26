/*queue in linked list
 date:30-07-2018*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[5],front=-1,rear=-1,i;
void enqueue()
{
	if(front==-1)
	{
		front++;
		rear++;
	}
  else
	{
		printf("enter the element");
		scanf("%d",&queue[rear]);
		rear++;
	}
	if(rear>4)
	{
	printf("queue is full:");
	return;
   }
}
void dequeue()
{
	if(rear==-1)
	printf("queue is empty");
	else
	printf("element removed is %d", queue[front]);
	front++;
}
void view()
{
	int i;
	if(rear==-1)
	printf("queue is empty:");
	else
	{
		for(i=front;i<rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
}
 int main()
{
	int no;
	while(1)
	{
	printf("\nenter 1 to insert\n enter 2 to delete\n enter 3 to view");
	scanf("%d",&no);
	switch(no)
	{
		case 1:enqueue();
		break;
		case 2:dequeue();
		break;
		case 3:view();
	}
}
}
