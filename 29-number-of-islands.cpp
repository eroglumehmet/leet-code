class Solution {
public:
    void sink(vector<vector<char>>& grid , int i , int j){
        if(i < 0 || j < 0 || grid.size() == i || grid[0].size() == j || grid[i][j] != '1') return;
        grid[i][j] = '0';
        sink(grid , i + 1 , j);
        sink(grid , i , j + 1);
        sink(grid , i - 1 , j);
        sink(grid , i , j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(size_t i = 0 ; i < grid.size() ; i++){
            for(size_t j = 0; j < grid[i].size() ; j++){
                if(grid[i][j] == '1'){
                    count++;
                    sink(grid , i , j);
                }
            }
        }
        return count;
    }
};
