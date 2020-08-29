//COUNTING SORT
#include<stdio.h>
void counting(int a[],int n)
{
	int min=a[0],max=a[0];
  //Finding the minimum and maximum in the array
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	int c=max-min+1;
  //Creating a array to store the count value of each element
	int count[c];
	for(int i=0;i<c;i++)
	count[i]=0;
	for(int i=0;i<n;i++)
	{
		count[a[i]-min]+=1;
	}
	int k=0;
	for(int i=0;i<c;i++)
	{
		int j=count[i];
		while(j--)
		{
			a[k]=i+min;
			k++;
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
	counting(a,n);
	printf("after sorting  ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
