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
    int a,b;
    cin >> a >> b;
    int cnt = INT32_MAX ;
    for(int increase = 0;increase <= 20;increase++){
      int cnt2 = increase;
      int a2 = a;
      int b2 = b;
      if(b2 == 1 ){
        b2++;
        cnt2++;
      } 
      b2 += increase ;
      
      while(a2){
        a2/= b2;
        cnt2++;
      }
      cnt = min(cnt , cnt2);
    }
    cout << cnt << endl;

    
  }    
}


