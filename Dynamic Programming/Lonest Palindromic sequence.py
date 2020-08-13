#Lonest Palindromic sequence
def lcs(s):
    n=len(s)
    dp=[[0 for x in range(n)]for x in range(n)]
    for i in range(n):
            dp[i][i]=1
    k=2
    while(k<=n):
        for i in range(n-k+1):
            j=i+k-1
            if(s[i]==s[j] and k==2):
                dp[i][j]=2
            elif(s[i]==s[j]):
                dp[i][j]=dp[i+1][j-1]+2
            else:
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        k+=1
    return dp[0][n-1];
print(lcs("mhakdlalom"))

'''
OUTPUT
5
'''
