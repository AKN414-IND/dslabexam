#include <stdio.h>
int binsearch(int a[],int low,int high,int element)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(element==a[mid])
			return mid;
		else if (element<a[mid])
			return binsearch(a,low,mid-1,element);
		else
			return binsearch(a,mid+1,high,element);
	}
	return -1;
}
int main()
{
	int a[100],i,n,item;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&item);
	int result=binsearch(a,0,n-1,item);
	if (result==-1)
		printf("element not found");
	else
	{
		printf("element found at position %d",result+1);
	}
}
