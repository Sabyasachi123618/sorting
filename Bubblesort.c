#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The required sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
