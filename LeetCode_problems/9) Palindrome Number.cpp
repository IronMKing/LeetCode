class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int num = 0;
        int num2 = x;
         while(x>0){
                num = num * 10;
                num = num +(x % 10);
                x /=10;
            }
        if(num == num2){
            return true;
        }
         return false;
    }
};