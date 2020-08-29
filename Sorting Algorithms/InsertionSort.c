//INSERTION SORT
#include<stdio.h>
void insertion(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i,temp;
		while(j>0&&a[j-1]>a[j])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;
		}
	}
}
int main()
{
	int n,i;
	printf("enter the no of elements ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	insertion(a,n);
	printf("after sorting  ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}

/*
OUTPUT
enter the no of elements 6
enter the elements -2 35 56 121 -5 15
after sorting  -5 -2 15 35 56 121
*/
