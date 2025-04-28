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
    int n,p;
    cin >> n >> p;
    vector<pair<int,int>> ab(n);
    for(int i = 0;i<n;i++) cin >> ab[i].second;
    for(int i = 0;i<n;i++) cin >> ab[i].first;
    sort(ab.begin(),ab.end());
    int ans = p;
    int cnt = 1;
    for(int i = 0 ;i<n;i++){
      if(ab[i].first <= p){
        ans += ab[i].first * min(ab[i].second , n - cnt);
        cnt += min(ab[i].second,n - cnt);
      }
      else {
        ans += p * (n- cnt);
        cnt += n - cnt;
      }
      if(cnt == n) break;
    }
    cout << ans << endl;
  }

    
}


