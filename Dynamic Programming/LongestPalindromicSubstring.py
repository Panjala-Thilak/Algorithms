def lps(s):
    n=len(s)
    dp=[[0 for x in range(n)]for x in range(n)]
    maxlen=1
    first=0
    for i in range(n):
        dp[i][i]=True
    for i in range(n-1):
        if s[i]==s[i+1]:
            dp[i][i+1]=True
            maxlen=2
            first=i
    k=3
    while k<=n:
        i=0
        while i<n-k+1:
            j=i+k-1
            if(dp[i+1][j-1]==True and s[i]==s[j]):
                dp[i][j]=True
                if(maxlen<k):
                    maxlen=k
                    first=i
            i+=1
        k+=1
    print(s[first:first+maxlen],maxlen)
input1="ababa"
input2="abcaba"
lps(input1)
lps(input2)

#OUTPUT
#ababa 5
#aba 3
