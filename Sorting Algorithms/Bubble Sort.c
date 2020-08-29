//Bubble Sort
#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-i-1;j++)
		//swap
		if(a[j]>a[j+1])
		{
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
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
	bubble(a,n);
	printf("after sorting  ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
/*
OUTPUT
enter the no of elements 5                                                                                                                    
enter the elements 6 8 1 3 2                                                                                                                  
after sorting  1 2 3 6 8     
*/
