class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size() , 0);
        stack<int> wait;
        wait.push(0);
        for(int i = 1 ; i < temperatures.size() ; i++){
            while(!wait.empty() && temperatures[wait.top()] < temperatures[i]){
                result[wait.top()] = i - wait.top();
                wait.pop();
            }
            wait.push(i);
        }
        return result;
    }
};
