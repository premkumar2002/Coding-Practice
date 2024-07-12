class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int maxPoints = 0;
        if (x > y) {
            // Remove "ab" first
            std::stack<char> st;
            for (char c : s) {
                if (!st.empty() && st.top() == 'a' && c == 'b') {
                    st.pop();
                    maxPoints += x;
                } else {
                    st.push(c);
                }
            }
            std::string remaining;
            while (!st.empty()) {
                remaining.push_back(st.top());
                st.pop();
            }
            std::reverse(remaining.begin(), remaining.end());

            for (char c : remaining) {
                if (!st.empty() && st.top() == 'b' && c == 'a') {
                    st.pop();
                    maxPoints += y;
                } else {
                    st.push(c);
                }
            }
        } else {
            std::stack<char> st;
            for (char c : s) {
                if (!st.empty() && st.top() == 'b' && c == 'a') {
                    st.pop();
                    maxPoints += y;
                } else {
                    st.push(c);
                }
            }
            std::string remaining;
            while (!st.empty()) {
                remaining.push_back(st.top());
                st.pop();
            }
            std::reverse(remaining.begin(), remaining.end());

            for (char c : remaining) {
                if (!st.empty() && st.top() == 'a' && c == 'b') {
                    st.pop();
                    maxPoints += x;
                } else {
                    st.push(c);
                }
            }
        }

        return maxPoints;
    }
};

