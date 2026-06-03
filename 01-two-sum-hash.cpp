class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // value → index
        vector<int> result;
    for(size_t i = 0 ; i < nums.size() ; i++){
        int complement = target - nums[i];
        if (seen.count(complement)){
            result.push_back(seen[complement]);
            result.push_back(i);
            return result;
        }
        seen[nums[i]] = i;
    }
    return result;
    }
};
