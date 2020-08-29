#include <stdio.h>
int partition(int a[],int low,int high)
{
    int pivot=a[low],temp;
    int i=low;
    int j=high;
    while(i<j)
    {
        while(a[i]<=pivot)
        i++;
        while(a[j]>=pivot)
        j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void QuickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=partition(a,low,high);
        QuickSort(a,low,mid-1);
        QuickSort(a,mid+1,high);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int low=0;
    int high=n-1;
    QuickSort(a,low,high);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
