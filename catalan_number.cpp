 // catalan number Cn = dp[n] 
    ll dp[10001];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=1000;i++){
        for(int j=0;j<=i-1;j++){
            dp[i]+=(dp[j]*dp[i-j-1])%mod;
            dp[i]=dp[i]%mod;
            
        }
    }
    
    //Cn = summation of j=0 to n-1 ( Cj * Cn-j-1 ) 
