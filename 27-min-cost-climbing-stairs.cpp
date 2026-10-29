class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> a(cost.size());
        a[0] = cost[0];
        a[1] = cost[1];
        for(size_t i = 2 ; i < cost.size() ; i++){
            a[i] = cost[i] + min(a[i - 1] , a[i - 2]);
        }
        return min(a.back() , a[a.size() - 2]);
    }
};
