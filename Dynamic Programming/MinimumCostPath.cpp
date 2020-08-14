//Minimum Cost Path
#include <bits/stdc++.h>
using namespace std;
int n;
int min(int x,int y,int z)
{
    if(x<y && x<z)
    return x;
    else if(y<x && y<z)
    return y;
    else
    return z;
}
int minicost(vector<vector<int>> a,int n)
{
    for(int i=1;i<n;i++)
    a[i][0]=a[i-1][0]+a[i][0];
    for(int j=1;j<n;j++)
    a[0][j]=a[0][j-1]+a[0][j];
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            a[i][j]=a[i][j]+min(a[i-1][j-1],a[i-1][j],a[i][j-1]);
        }
    }
    return a[n-1][n-1];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<vector<int>> a(n,vector<int> (n));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    cout<<minicost(a,n)<<endl;
	}
	return 0;
}

/*
OUTPUT
1                                                                                                                                             
3                                                                                                                                             
1 2 7                                                                                                                                         
6 4 8                                                                                                                                         
9 1 3
8
*/
