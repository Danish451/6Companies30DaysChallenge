#include <bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int> &nums)
{
    int n = nums.size();
    priority_queue<int> q(nums.begin(), nums.end());
    for (int i = 1; i < n; i += 2)
    {
        nums[i] = q.top();
        q.pop();
    }
    for (int i = 0; i < n; i += 2)
    {
        nums[i] = q.top();
        q.pop();
    }
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
    wiggleSort(nums);
}