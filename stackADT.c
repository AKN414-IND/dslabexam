#include <stdio.h>
int stack[100],top=-1,choice=0,x,n,i;
void push()
{
	if(top>=n-1)
	{
		printf("STACK OVERFLOW");
	}
	else
	{
		printf("enter the element to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("STACK UNDERFLOW");
	}
	else
	{
		printf("the popped item is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top<=-1)
	{
		printf("STACK IS EMPTY");
	}
	else
	{
		printf("The element in the stack is:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("STACK OPERATIONS USING ARRAY\n");
	while(choice!=4)
	{
		printf("\nEnter the choice from the following\n");
		printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("EXITING........");
				break;
			}
			default:
			{
				printf("ENTER VALID OPERATOR....\n");
			}
		}
	}
}
			
		
