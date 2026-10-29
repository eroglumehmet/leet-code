class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0;
        int minutes = 0;
        queue<pair<int , int>> rotten;
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 1){
                    fresh++;
                }
                if(grid[i][j] == 2){
                    rotten.push({i, j});
                }
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = { 0, 0,-1, 1};
        while(!rotten.empty() && fresh > 0){
            int levelSize = rotten.size();
            for(int k = 0 ; k < levelSize ; k++){
                auto [r, c] = rotten.front();
                rotten.pop();
                for(int d = 0; d < 4 ; d++){
                    int nr=r+dr[d], nc=c+dc[d];
                    if(nr<0 || nr >= grid.size() || nc<0 || nc>=grid[0].size()) continue;
                    if(grid[nr][nc]!=1) continue;
                    grid[nr][nc]=2; fresh--; rotten.push({nr,nc});
                }
            }
            minutes++;
        }
        return fresh==0 ? minutes : -1;
    }
};
