#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const double pi = acos(-1);
template<class T> bool chmin(T& a,T b) { if(a > b){a = b; return true;} return false; }
template<class T> bool chmax(T& a,T b) { if(a < b){a = b; return true;} return false; }
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define all(p) (p).begin(), (p).end()
#define exists(c, e) ((c).find(e) != (c).end())

struct INIT{
 INIT(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  cout << fixed << setprecision(20);
 }
}INIT;

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    vector<double> l(n), r(n);
    rep(i, n) cin >> t[i] >> l[i] >> r[i];

    rep(i, n){
        if(t[i] == 2){
            r[i] -= 0.1;
        }else if(t[i] == 3){
            l[i] += 0.1;
        }else if(t[i] == 4){
            l[i] += 0.1;
            r[i] -= 0.1;
        }
    }

    ll ans = 0;
    rep(i, n){
        rep2(j, i+1, n){
            if(max(l[i], l[j]) <= min(r[i], r[j])) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}