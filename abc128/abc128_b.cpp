#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const double pi = acos(-1);
template<class T> bool chmin(T& a,T b) { if(a > b){a = b; return true;} return false; }
template<class T> bool chmax(T& a,T b) { if(a < b){a = b; return true;} return false; }
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(p) (p).begin(), (p).end()
#define exists(c, e) ((c).find(e) != (c).end())

struct INIT{
 INIT(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  cout << fixed << setprecision(20);
 }
}INIT;

bool asc_desc(tuple<string, int, int>& left, tuple<string, int, int>& right) {
  if (get<0>(left) == get<0>(right)) {
    return get<1>(right) < get<1>(left);
  } else {
    return get<0>(left)  < get<0>(right);
  }
}

int main() {
    int n;
    cin >> n;
    vector<tuple<string, int, int>> r;
    rep(i, n){
        string s;
        int p;
        cin >> s >> p;
        r.emplace_back(s, p, i+1);
    }
    sort(r.begin(), r.end(), asc_desc);

    for(auto [s, p, ans] : r) cout << ans << endl;
}