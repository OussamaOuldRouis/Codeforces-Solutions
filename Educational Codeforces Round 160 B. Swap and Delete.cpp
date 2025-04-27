#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define ll long long

 
signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    bool f = false;
    string word;
    cin >> word;
    vector<int> oc(2,0);
    for(auto c : word) oc[c-'0']++;
    for(int i = 0;i<word.length();i++){
      if(oc[1 - (word[i] - '0')] == 0){
        cout << word.length() - i << endl;
        f = true;
        break;
      }
      oc[1 - (word[i] - '0')]--;
    }
    if(!f) cout << 0 << endl;
  }
 
 
}
