#include <bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int> &nums, int k)
{
    int ans = 0, j = 0;
    int cnt = 0, temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        // if num is odd then increase its count
        if (nums[i] & 1)
        {
            cnt++;
            // cnt >= k then iterate till we get odd num and add the count of even num
            if (cnt >= k)
            {
                temp = 1;
                while (!(nums[j++] & 1))
                    temp++;
                ans += temp;
            }
        }
        // for right part of array
        // num is even and cnt >= k then just double the subarray count
        else if (cnt >= k)
            ans += temp;
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> num(n, 0);
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    cout << "Nice Subarrays are = " << numberOfSubarrays(num, k);
}