#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int,int> occs;
    for(int i=  0;i<n;i++){
      cin >> arr[i];
      occs[arr[i] - i]++;
    }
    int res = 0;
    for(auto p : occs) res += p.second * (p.second - 1) / 2;
    cout << res << endl;
  }
}
