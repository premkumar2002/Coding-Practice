class Solution {
public:
    long long wonderfulSubstrings(string word) {
        std::vector<int> prefixCount(1024, 0);
        int prefix = 0, n = word.size();
        long long result = 0;
        prefixCount[0] = 1;
        for (int i = 0; i < n; i++) {
            int c = word[i] - 'a';
            prefix ^= (1 << c);
            result += prefixCount[prefix];
            prefixCount[prefix]++;
            for (int bit = 0; bit < 10; bit++) {
                int diff = (1 << bit) ^ prefix;
                result += prefixCount[diff];
            }
        }
        return result;
    }
};