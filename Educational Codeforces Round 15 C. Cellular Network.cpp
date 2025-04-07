#include <bits/stdc++.h>
using namespace std;

int get_ceil(int x,int n){
  if(float(x) / n == x / n) return x / n;
  else return x/n + 1;
}
int gcd(int a,int b){
  if(b == 0) return a;
  return gcd(b,a%b);
}
int MOD = 1e9 + 7;
int get_closest(vector<int> & tows,int x){
  auto it = lower_bound(tows.begin(),tows.end(),x);
  if(it == tows.begin()) return *it;
  if(it == tows.end()) return tows.back();
  auto prev = it - 1;
  if(abs(x-*prev) < abs(x - *it))return *prev;
  else return *it;

}
signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
int n,m;
cin >> n >> m;
vector<int> towers(m);
vector<int> cities(n);
for(int i= 0;i<n;i++){
  cin >> cities[i];
}

for(int i= 0;i<m;i++){
 cin >> towers[i];
}
sort(towers.begin(),towers.end());

int ans = -1;

for(int i = 0;i<n;i++){
  int closest = get_closest(towers,cities[i]);
  ans = max(ans,abs(closest - cities[i]));
}
cout << ans ;

}
