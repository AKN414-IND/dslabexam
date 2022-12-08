#include <stdio.h>
#include <string.h>
#define n 100
int stack[n],top=-1,x,i;
void push(char x)
{
	if(top>=n-1)
	{
		printf("STACK OVERFLOW");
	}
	else
	{
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
		printf("%c",stack[top]);
		top--;
	}
}
int main()
{
	char str[100];
	printf("enter the string");
	gets(str);
	int len=strlen(str);
	for(i=0;i<len;i++)
		push(str[i]);
	for(i=top;i>=0;i--)
		pop();
}
