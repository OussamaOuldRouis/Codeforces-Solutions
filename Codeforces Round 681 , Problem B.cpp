#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define ll long long

int MOD = 1e9 ;
 
signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    int a,b;
    cin >> a >> b;
    string w;
    cin >> w;
    int wi_size = 0;
    int cost = 0;
    for(int i = 0;i<w.length();i++){
      if(w[i] == '0' and w[i-1] == '1'){
        int j= i ;
        while(w[j] == '0'){
          j++;
          wi_size++;
        }
        if(w[j] == '1') cost += min(wi_size*b,a);
        wi_size= 0;
        i = j-1;
      }
    }
    bool f = false;
    bool have=  false;
    if(cost != 0) {cost += a; cout << cost << endl;}
    else {
      for(int i = 0;i<w.length();i++){     // here we check if we have just one segment of ones
        if(w[i] == '1'){
          if(f){
            have = true;
            break;
          }
          int j = i;
          while(w[j] == '1'){
            j++;
          }
          i = j- 1;
          f = true;
        }
      }
      if((!have and f) or w == "1" or w == "01" or w == "10") cout << a << endl;
      else cout << cost << endl;
    }
  }
 
 
}
