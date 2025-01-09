class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i=0;i<words.size();i++){
            bool x = true;
            for(int j=0;j<pref.size();j++){
                if(pref[j]!=words[i][j]){
                    x = false;
                    break;
                }
            }
            if(x){
                count += 1;
            }
        }
        return count;
    }
};