class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> a;
        a.push_back(nums[0]);
        if(nums.size() == 1) return a[0];
        a.push_back(max(nums[0] , nums[1]));
        if(nums.size() == 2) return a[1];
        for(size_t i = 2 ; i < nums.size() ; i++){
            a.push_back(max(a[i - 1] , nums[i] + a[i - 2]));
        }
        return a.back();
    }
};
