class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());
        int pre = 1;
        int post = 1;
        for(size_t i = 0 ; i < nums.size() ; i++){
            answer[i] = pre;
            pre *= nums[i];
        }
        for(int i = (int)nums.size() - 1 ; i >= 0 ; i--){
            answer[i] *= post;
            post *= nums[i];
        }
        return answer;
    }
};
