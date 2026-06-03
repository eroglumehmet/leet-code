class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int max_sum = nums[0];
        for(size_t i = 1 ; i < nums.size() ; i++){
            curr = max(nums[i], curr + nums[i]);
            max_sum = max(max_sum, curr);
        }
        return max_sum;
    }
};
