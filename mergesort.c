#include <stdio.h>
void merge(int a[],int low,int mid,int high);
void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,b[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;k++;
		}
		else
		{
			b[k]=a[j];
			j++;k++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		j++;k++;
	}
	for(i=low;i<=high;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	int n,a[100],i;
	printf("enter the limit of the arraay");
	scanf("%d",&n);
	printf(" enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	
			

			
			
	
