//Maximum Sum Increasing Subsequence
#include<bits/stdc++.h>
using namespace std;

int msi(int l[],int n)
{
  int  dp[n];
    for(int i=0;i<n;i++)
        dp[i]=l[i];
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            if(l[j]<l[i] && dp[j]+l[i]>dp[i])
                dp[i]=dp[j]+l[i];
    int max=dp[0];
    for(int i=1;i<n;i++)
        if(max<dp[i])
            max=dp[i];
    return max;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<msi(a,n)<<endl;
    }
	return 0;
}
