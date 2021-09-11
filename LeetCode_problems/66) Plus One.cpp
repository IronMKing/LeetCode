class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = 1;
        for(int i = digits.size()-1;i>-1;--i){
            if(digits[i] == 9){
                if(i == 0){
                    digits.push_back(0);
                    digits[i] = 1;
                    return digits;
                }
                digits[i] = 0;
            }
            else{
                digits[i] += 1;
                return digits;
            }
        }
        return digits;
    }
};