class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        vector<int> a(nums.size() , 1);
        for(int i = nums.size() - 1; i >= 0; i--){
            for(int j = i + 1 ; j < nums.size() ; j++){
                if(nums[j] > nums[i]) a[i] = max(a[i] , a[j] + 1);
            }
        }
        return *max_element(a.begin(), a.end());
    }
};
