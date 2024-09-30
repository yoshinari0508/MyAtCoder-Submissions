#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const double pi = acos(-1);
#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define all(p) (p).begin(), (p).end()
#define exists(c, e) ((c).find(e) != (c).end())
template<class T> bool chmin(T& a,T b) { if(a > b){a = b; return true;} return false; }
template<class T> bool chmax(T& a,T b) { if(a < b){a = b; return true;} return false; }
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};

struct INIT{
 INIT(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  cout << fixed << setprecision(20);
 }
}INIT;

int main(){
    string s, t;
    cin >> s >> t;

    vector<string> st;
    rep(i, s.size()){
        if(s == t) break;

        if(s[i] > t[i]){
            s[i] = t[i];
            st.push_back(s);
        }
    }

    for(int i = (int)s.size()-1; i >= 0; i--){
        if(s == t) break;

        if(s[i] < t[i]){
            s[i] = t[i];
            st.push_back(s);
        }
    }
    cout << st.size() << endl;
    rep(i, st.size()) cout << st[i] << endl;
    return 0;
    
}