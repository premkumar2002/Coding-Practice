class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i=0;i<details.size();i++){
            char x = details[i][11];
            char y = details[i][12];
            string res = "";
            res += x;
            res += y;
            int final = stoi(res);
            if(final>60){
                count += 1;
            }
        }
        return count;
    }
};