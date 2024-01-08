#include <bits/stdc++.h>
using namespace std;
int minMoves2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int mid = (n - 1) / 2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + abs(nums[mid] - nums[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << minMoves2(nums);
}