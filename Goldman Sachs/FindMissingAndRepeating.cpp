#include <bits/stdc++.h>
using namespace std;
vector<int> findTwoElement(vector<int> arr, int n)
{
    // code here
    int mis = -1, rep = -1;

    for (int i = 0; i < n; i++)
    {
        // encoded
        arr[arr[i] % (n + 1) - 1] += n + 1;
    }

    for (int i = 0; i < n; i++)
    {
        // check for rep element
        if (arr[i] > 2 * (n + 1))
            rep = i + 1;

        // check for mis element
        if (arr[i] < n + 1)
            mis = i + 1;
    }

    return {rep, mis};
}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> ans = findTwoElement(arr, n);
    cout << ans[0] << " " << ans[1];
}