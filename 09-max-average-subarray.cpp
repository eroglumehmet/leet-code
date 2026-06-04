class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = std::accumulate(nums.begin() , nums.begin() + k , 0);
        int max_sum = sum;
        for(size_t i = k ; i < nums.size() ; i++){
            sum += nums[i];
            sum -= nums[i - k];
            max_sum = max(max_sum , sum);
        }
        return max_sum / (double)k;
    }
};
