class Solution {
public:
    int findComplement(int num) {
        
        int ones=0;
        int temp=num;
     
     while(temp>0){
        ones= (ones<<1) |1;
        temp>>=1;
     }
     return num^ones;
    }
};