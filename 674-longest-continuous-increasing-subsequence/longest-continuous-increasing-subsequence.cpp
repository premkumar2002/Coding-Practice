class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxlen = 0;
        int i = 0, j = 1;
        int n = nums.size();
        int len = 1;
        while (j < n) {
            if (nums[j] > nums[j - 1]) {
                len += 1;
            } else {
                maxlen = max(maxlen, len);
                len = 1;
            }
            j += 1;
        }
        return max(maxlen, len);
    }
};
