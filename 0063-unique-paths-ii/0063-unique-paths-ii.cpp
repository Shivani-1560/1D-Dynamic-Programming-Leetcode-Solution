class Solution {
public:

    int not_takeObs(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>> &dp){
          if(obstacleGrid[0][0]==1 ) return 0;
       if(i==0 && j==0) return 1;
       if(i<0 || j<0) return 0;
       if(dp[i][j]!= -1) return dp[i][j];
       int up=not_takeObs(obstacleGrid,i-1,j,dp);
       int left=not_takeObs(obstacleGrid,i,j-1,dp);
        if(obstacleGrid[i][j]== 0){
       return dp[i][j]=up+left;
        }
       return dp[i][j]=0;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
     vector<vector<int>>dp(m,vector<int>(n,-1));
        return not_takeObs(obstacleGrid,m-1,n-1,dp);
    }
};