#Longest Increasing Subsequence
def lis(l):
    n=len(l)
    dp=[1]*n
    for i in range(1,n):
        for j in range(0,i):
            if(l[j]<l[i] and dp[i]<dp[j]+1):
                dp[i]=dp[j]+1
    return max(dp)
    
l=[2,15,1,30,47,6]
print(lis(l))
    
#OUTPUT
#4
