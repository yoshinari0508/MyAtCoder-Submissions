#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const double pi = acos(-1);
template<class T> bool chmin(T& a,T b) { if(a > b){a = b; return true;} return false; }
template<class T> bool chmax(T& a,T b) { if(a < b){a = b; return true;} return false; }
#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(p) (p).begin(), (p).end()
#define exists(c, e) ((c).find(e) != (c).end())

struct INIT{
 INIT(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  cout << fixed << setprecision(20);
 }
}INIT;

ll n, l, k;
ll a[1<<18];

bool solved(ll mid){
    ll cnt = 0;
    ll pre = 0;
    rep(i, 1, n+1){
        if(a[i] - pre >= mid && l - a[i] >= mid){
            cnt++;
            pre = a[i];
        }
    }
    if(cnt >= k) return true;
    else return false;
}

int main(){
    cin >> n >> l >> k;
    rep(i, n) cin >> a[i+1];

    int left = -1;
    int right = l+1;

    //答えで二分探索
    while(right - left > 1){
        ll mid = left + (right-left)/2;

        if(solved(mid) == false) right = mid;
        else left = mid;
    }
    cout << left << endl;
    return 0;
}