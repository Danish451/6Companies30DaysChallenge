#include <bits/stdc++.h>
using namespace std;
vector<int> smallestTrimmedNumbers(vector<string> &nums, vector<vector<int>> &queries)
{
    vector<int> res;
    for (auto q : queries)
    {
        priority_queue<pair<string, int>, vector<pair<string, int>>, greater<pair<string, int>>> pq;
        int k = q[0], trim = q[1];
        for (int i = 0; i < nums.size(); i++)
            pq.push({nums[i].substr(nums[i].size() - trim), i});
        for (int i = 1; i < k; i++)
            pq.pop();
        res.push_back(pq.top().second);
    }
    return res;
}
int main()
{
    vector<string> nums;
    vector<vector<int>> queries;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        nums.push_back(s);
    }
    int k;
    cin >> k;
    for(int i=0; i<k; i++){
        vector<int> temp;
        for(int j=0; j<k; j++){
            cin >> temp[i];
        }
        queries.push_back(temp);
    }
    vector<int> ans = smallestTrimmedNumbers(nums, queries);
}