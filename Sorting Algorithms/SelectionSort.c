//SELECTION SORT
#include<stdio.h>
void selection(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;//min stores the index of minimum value
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		//swap
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
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
	selection(a,n);
	printf("after sorting  ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
/*OUTPUT
enter the no of elements 5
enter the elements 5 4 3 2 1
after sorting  1 2 3 4 5
*/
