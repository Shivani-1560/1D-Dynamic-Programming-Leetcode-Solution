class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>bit(n+1);
         
         if(n==0) return bit;
         bit[0]=0;
         for(int i=0;i<=n;i++){
            if(i%2!=0){
                bit[i]=bit[i/2]+1;
            }
            else{
                bit[i]=bit[i/2];
            }
         }
         return bit;
    }
};