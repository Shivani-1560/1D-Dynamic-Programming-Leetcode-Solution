class Solution {
public:
     int pick_or_not(int i,vector<int>& dp,vector<int>& nums){
    if(i==0) return nums[i];
    if(i<0) return 0;

    if(dp[i]!=-1) return dp[i];

    int take_i0=nums[i]+ pick_or_not(i-2,dp,nums);
    int take_i1=0+ pick_or_not(i-1,dp,nums);
    return dp[i]=max(take_i0,take_i1);

     }
     
    int rob(vector<int>& nums) {
      int n=nums.size();
      vector<int>dp(n+1,-1);
      return  pick_or_not(n-1,dp,nums);
    }
};