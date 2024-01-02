#include<bits/stdc++.h>
using namespace std;
string encode(string src)
{     
  //Your code here 
  int cnt = 1;
  string ans = "";
  for(int i=0; i<src.size(); i++){
      if(i+1 < src.size() && src[i]==src[i+1])  cnt++;
      else{
          ans += src[i];
          ans += to_string(cnt);
          cnt = 1;
      }
  }
  return ans;
}     
int main(){
    string s;
    cin >> s;
    
    cout << encode(s);
}