// this is tabulation method 
class Solution {
public:
    int climbStairs(int n) {
         if (n <= 2) return n;
     vector<int>dp(n+1);

     dp[0]=1,dp[1]=1;

     for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
     }
   return dp[n];
    }
    
};

// this is memoization method using dp 

class Solution {
public:
    int climbStairs(int n) {
   vector<int>dp(n+1,-1);
   return func(n,dp);
    }
    
    int func(int n,vector<int> &dp){
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=func(n-1,dp)+func(n-2,dp);
}

};
