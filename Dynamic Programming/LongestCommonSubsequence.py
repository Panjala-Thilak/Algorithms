def lcs(s,s1):
    m=len(s)
    n=len(s1)
    dp=[[0 for x in range(n+1)]for x in range(m+1)]
    for i in range(1,m+1):
        for j in range(1,n+1):
            if s[i-1]==s1[j-1]:
                dp[i][j]=dp[i-1][j-1]+1
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
    index=dp[m][n]
    print(index)
    res=[""]*(index+1)
    res[index]=""
    i=m
    j=n
    while i>0 and j>0:
        if s[i-1]==s1[j-1]:
            res[index-1]=s[i-1]
            i-=1
            j-=1
            index-=1
        elif dp[i-1][j]>dp[i][j-1]:
            i-=1
        else:
            j-=1
    print("".join(res))
lcs("thilaknani","tashgkivltahkd")
'''
OUTPUT
6                                                                                                                                             
thilak
'''
