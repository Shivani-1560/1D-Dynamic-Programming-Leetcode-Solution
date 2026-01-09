class Solution {
public:
    int money( int i, vector<int>&dp, vector<int>& nums){
     if(i==0) return nums[0];
     if(i<0) return 0;
     if(dp[i]!= -1) return dp[i];

     int take=nums[i]+money(i-2,dp,nums);
     int not_take=0+money(i-1,dp,nums);

     return dp[i]=max(take,not_take);
    }


    int rob(vector<int>& nums) {
      int n=nums.size();
        if(n==1) return nums[0];

        vector<int> temp1,temp2;

        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
          vector<int>dp1(temp1.size(),-1);
          vector<int>dp2(temp2.size(),-1);
        return max(money(n-2,dp1,temp1),money(n-2,dp2,temp2));
    }
};