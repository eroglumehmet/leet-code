class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int , int> freq;
     priority_queue<pair<int, int>, vector<pair<int , int>> , greater<>> pq;
     vector<int> result;
     for(size_t i = 0 ; i < nums.size() ; i++){
        freq[nums[i]]++;
     }
     for(auto& [num, count] : freq){
        pq.push({count, num});
        if(pq.size() > k){
            pq.pop();
        }
     }
     while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
     } 
     return result;
    }
};
