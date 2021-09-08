class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        vector<int> result(n,0);
        
        for(int i=0; i<n; i++){
            nums[i] *= nums[i];
        }        
        
        for(int i=n-1; i>=0; i--) {
            if(nums[left] > nums[right]) {
                result[i] = nums[left];
                left++;
            }
            else {
                result[i] = nums[right];
                right--;
            }
        }
        return result;
    }
};