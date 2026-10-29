class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        vector<int> arr(amount+1, amount+1);
        arr[0] = 0;
        for(int i = 1 ; i < amount + 1 ; i++){
            for(size_t j = 0 ; j < coins.size() ; j++){
                if(i - coins[j] < 0) continue;
                arr[i] = min(arr[i] , arr[i - coins[j]] + 1);
            }
        }
        if(arr[amount] > amount) return -1;
        return arr[amount];
    }
};
