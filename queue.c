#include <stdio.h>
int a[100],n,front=-1,rear=-1;
void enqueue(int item)
{
	if(rear==n-1)
		printf("QUEUE IS FULL");
	else if(front==-1&&rear==-1)
	{
		front=0;rear=0;
		a[rear]=item;
	}
	else
	{
		rear=rear+1;
		a[rear]=item;
	}
}
void dequeue()
{
	if (front==-1&&rear==-1)
		printf("queue is empty");
	else if(rear==front)
	{
		printf("the deleted item is %d",a[front]);
		front=rear=-1;
	}
	else
	{
		printf("the deleted item is %d",a[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
		printf("queue is empty");
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
int main()
{
	int item,choice=0;
	printf("enter the size");
	scanf("%d",&n);
	while(choice!=4)
	{
	printf("\nenter the choice from below\n");
	printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
		switch (choice)
		{
			case 1:printf("enter the item to be inserted:");
				   scanf("%d",&item);
			       enqueue(item);
					break;
			case 2:dequeue();
					break;
			case 3:display();
					break;
			case 4:printf("Exiting.....");
					break;
			default:printf("enter valid operator");
					break;
		}
	}
}
		
