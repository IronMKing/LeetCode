class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int i = 0;
        for (int in = 1; in < nums.size(); ++in) {
            if (nums[in] != nums[i]) {
                ++i;
                nums[i] = nums[in];
            }
        }
        return i + 1;
    }
};