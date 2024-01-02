#include <bits/stdc++.h>
using namespace std;
vector<string> findHighAccessEmployees(vector<vector<string>> &access_times)
{
    unordered_map<string, vector<string>> mp;
    for (auto v : access_times)
        mp[v[0]].push_back(v[1]);

    vector<string> ans;
    for (auto p : mp)
    {
        auto v = p.second;
        auto emp = p.first;

        sort(v.begin(), v.end());
        int n = v.size();

        for (int i = 0; i < n - 2; i++)
        {
            if (stoi(v[i + 2]) < stoi(v[i]) + 100)
            {
                ans.push_back(emp);
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<string>> access_times;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        vector<string> temp;
        cin >> temp[0] >> temp[1];
        access_times.push_back(temp);
    }

    vector<string> ans = findHighAccessEmployees(access_times);
}