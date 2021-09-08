class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string tmp = strs[0];
        string prefix = "";
        for(int i = 1 ; i < strs.size() ; ++i){
            if(tmp == ""){
                return "";
            }
            int in = 0;
            while(tmp[in] == strs[i][in] && in < tmp.length()){
                prefix += tmp[in];
                ++in;
            }
            tmp = prefix;
            prefix = "";
        }
        return tmp;
        
    }
};