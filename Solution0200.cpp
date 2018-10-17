#include "Solution0200.h"

bool Solution0200::inArea(int x, int y) {
    return x >= 0 && y >= 0 && x < m && y < n;
}

void Solution0200::dfs(vector<vector<char>> &grid, int x, int y) {
    visited[x][y] = true;
    for (auto &i : d) {
        int newX = x + i[0];
        int newY = y + i[1];
        if (inArea(newX, newY) && !visited[newX][newY] && grid[newX][newY] == '1') {
            dfs(grid, newX, newY);
        }
    }
}

int Solution0200::numIslands(vector<vector<char>> &grid) {
    m = grid.size();
    if (m == 0) {
        return 0;
    }
    n = grid[0].size();
    visited = vector<vector<bool>>(m, vector<bool>(n, false));
    int res = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1' && !visited[i][j]) {
                res++;
                dfs(grid, i, j);
            }
        }
    }
    return res;
}