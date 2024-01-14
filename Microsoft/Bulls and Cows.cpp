#include <bits/stdc++.h>
using namespace std;
string getHint(string secret, string guess) {
        int a[1001] = {0};
        int b[1001] = {0};
        int x = 0, y=0;
        for(int i=0; i<secret.size(); i++){
            if(secret[i]==guess[i]) x++;
            else{
                a[secret[i]]++;
                b[guess[i]]++;
            }
        }
        for(int i=0; i < 1001; i++){
              y = y+(min(a[i], b[i]));
        }
        string ans = to_string(x);
        ans += 'A';
        ans += to_string(y);
        ans += 'B';
        return ans;
    }
int main(){
    string s, t;
    cin >> s >> t;
    string ans = getHint(s, t);
    cout << ans;
}