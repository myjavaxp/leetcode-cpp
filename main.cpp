#include <iostream>
#include "Solution0200.h"

int main() {
    Solution0200 solution0200;
    vector<vector<char >> c = {{'1', '1', '0', '0', '0'},
                               {'1', '1', '0', '0', '0'},
                               {'0', '0', '1', '0', '0'},
                               {'0', '0', '0', '1', '1'}};
    int res = solution0200.numIslands(c);
    cout << res << endl;
    return 0;
}