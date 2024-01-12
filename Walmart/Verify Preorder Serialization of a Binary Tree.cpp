#include <bits/stdc++.h>
using namespace std;
bool isValidSerialization(string preorder)
{
    int val = 1;
    for (int i = 0; i < preorder.length(); i++)
    {
        if (preorder[i] == ',')
            continue;
        // cout << "pre = " << val << '\n';
        val--;
        // cout << val << " ";
        if (val < 0)
            return false;
        if (preorder[i] != '#')
        {
            val += 2;
            while (i + 1 < preorder.length() && preorder[i + 1] != ',')
            {
                i++;
            }
        }
    }
    return val == 0;
}
int main()
{
    string s;
    cin >> s;
    isValidSerialization(s) ? cout << "True" : cout << "False";
}