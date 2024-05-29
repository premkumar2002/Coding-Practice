class Solution {
public:
    int numSteps(string s) {
        int c = 0;
        reverse(s.begin(),s.end());
        while(s.length()!=1){
            c++;
            if(s[0]=='1'){ 
                int i = 0;
                while(s[i]!='0'&&i<s.length()){
                    s[i]='0';
                    i++;
                }
                if(i==s.length()){
                    s+='1';
                }else{
                    s[i] = '1';
                }
            }else{
               string l = s.substr(1,s.length()-1);
                s = l;
            }
        }
        return c;
    }
};