class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
            }
        }
        int x = abs(v[0]-start);
        for(int i=1;i<v.size();i++){
            x = min(x,abs(v[i]-start));
        }
        return x;
    }
};