class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        if(s[0] != ' '){
            ++count;
        }
        for(int i = 1;i<s.size();++i){
            if(s[i] != ' '){
                if(s[i-1] == ' '){
                    count = 0;
                }
                ++count;
            }
        }
        return count;
    }
};