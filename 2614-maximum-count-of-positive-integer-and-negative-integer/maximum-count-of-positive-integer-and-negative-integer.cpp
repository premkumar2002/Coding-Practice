class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        for(auto v:nums){
            if(v>0){
                pos++;
            }else{
                if(v<0){
                neg++;
                }
            }
        }
        return max(pos,neg);
    }
};