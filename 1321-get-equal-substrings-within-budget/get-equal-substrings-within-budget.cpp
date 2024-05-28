class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int count = 0;
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            maxCost -= abs(s[right] - t[right]);

            while (maxCost < 0) {
                maxCost += abs(s[left] - t[left]);
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
