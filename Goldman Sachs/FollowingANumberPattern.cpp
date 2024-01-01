#include <bits/stdc++.h>
using namespace std;
string printMinNumberForPattern(string S)
{
    // code here
    int s = S.size();
    string ans = "";
    char ch = '1';
    while (ans.size() <= s)
    {
        ans.push_back(ch);
        ch += 1;
    }
    int i = 0;
    // O(s)
    while (i < s)
    {
        int j = i + 1;
        if (S[i] == 'D')
        {
            while (j < s && S[i] == S[j])
            {
                j++;
            }
            int dif = j - i;
            // O(no of times D occur)
            reverse(ans.begin() + i, ans.begin() + i + dif + 1);
        }
        i = j;
    }
    return ans;
}
int main(){
    string s;
    cin >> s;
    cout << printMinNumberForPattern(s);
}