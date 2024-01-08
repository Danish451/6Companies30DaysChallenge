#include <bits/stdc++.h>
using namespace std;

/* T.C-  O(n*k)
int findTheWinner(int n, int k)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);

    while (q.size() > 1)
    {
        int cnt = k;
        while (cnt > 1)
        {
            int val = q.front();
            q.pop();
            q.push(val);
            cnt--;
        }
        q.pop();
    }
    return q.front();
}
*/

/*T.C-  O(n) */
int solve(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (solve(n - 1, k) + k) % n;
}
int findTheWinner(int n, int k)
{
    int ans = solve(n, k) + 1;
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << findTheWinner(n, k);
}