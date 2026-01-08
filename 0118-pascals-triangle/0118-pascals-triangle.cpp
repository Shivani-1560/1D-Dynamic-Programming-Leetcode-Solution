class Solution {
public:
      
      vector<int>print_tree(int n){
        vector<int>list;
          long long ans=1;
      list.push_back(1);

      for(int i=1;i<n;i++){
          ans=ans*(n-i);
          ans=ans/i;
          list.push_back(ans);
      }
      return list;
      }


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>dp;
       
       for(int i=1;i<=numRows;i++){
        dp.push_back(print_tree(i));
       }
       return dp;
    }
};