#ifndef LEETCODE_SOLUTION0200_H
#define LEETCODE_SOLUTION0200_H

#include <vector>

using namespace std;

class Solution0200 {
private:
    int d[4][2] = {{-1, 0},
                   {0,  1},
                   {1,  0},
                   {0,  -1}};;
    int m;
    int n;
    vector<vector<bool>> visited;

    bool inArea(int x, int y);

    void dfs(vector<vector<char>> &grid, int x, int y);

public:
    int numIslands(vector<vector<char>> &grid);
};

#endif