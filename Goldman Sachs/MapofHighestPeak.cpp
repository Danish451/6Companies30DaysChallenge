#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> highestPeak(vector<vector<int>> &water)
{
    int n = water.size(), m = water[0].size();
    vector<vector<int>> ans(n, vector<int>(m, -1));
    queue<pair<int, int>> q;

    // Step 1 : identify where water is present and marks as a zero in new vector push indices in queue to move in four direction

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (water[i][j] == 1)
            {
                ans[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int x = it.first, y = it.second;
        int v = ans[x][y];

        // traversing up down right left in ans array to find where is -1
        vector<int> temp = {-1, 0, 1, 0, -1};
        for (int i = 0; i < temp.size() - 1; i++)
        {
            if (x + temp[i] >= 0 && x + temp[i] < n && y + temp[i + 1] < m && y + temp[i + 1] >= 0)
            {
                if (ans[x + temp[i]][y + temp[i + 1]] == -1)
                {
                    ans[x + temp[i]][y + temp[i + 1]] = v + 1;
                    q.push({x + temp[i], y + temp[i + 1]});
                }
            }
        }
    }

    return ans;
}
int main()
{
    
}