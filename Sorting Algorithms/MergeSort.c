#include<stdio.h>
void merge_sort(int a[],int low,int high,int mid);
void partition(int a[],int low,int high)
{
int mid;
if(low<high)
{
	mid=(low+high)/2;
	partition(a,low,mid);
	partition(a,mid+1,high);
	merge_sort(a,low,high,mid);
	}	
}
void merge_sort(int a[],int low,int high,int mid)
{
	int i,temp[60],l,m;
	l=low;
	m=mid+1;
	i=0;
	while(l<=mid&&m<=high)
	{
		if(a[l]<=a[m])
	{
		temp[i]=a[l];
		l++;
	}
	else
	{
		temp[i]=a[m];
		m++;	
	}
		i++;
	}
	if(l>mid)
	{
		for(int k=m;k<=high;k++)
		{
				temp[i]=a[k];
		i++;
	}
	}
	else
	{
		for(int k=l;k<=mid;k++)
		{
				temp[i]=a[k];
		i++;
	}
	}
	i=0;
	for(int k=low;k<=high;k++)
	a[k]=temp[i++];
}
int main()
{
	int n,i;
	printf("Enter the no of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elememnts into the array ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	partition(a,0,n-1);
	printf("Elements in the array after sorting ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}

