#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(a) (a).begin(), (a).end()
using Graph = vector<vector<int>>;
const int dx[]={1,1,1,0,0,-1,-1,-1};
const int dy[]={1,0,-1,1,-1,1,0,-1};
const int di[] = {1, 0, -1, 0};
const int dj[] = {0, 1, 0, -1};
const double PI = acos(-1);

int main(){
    int n, l, r;
    cin >> n;
    vector<int> a(n);
    rep(i, n) a[i] = i+1;
    cin >> l >> r;

    sort(all(a));

    reverse(a.begin() + l -1, a.begin() + r);
    rep(i, n){
        cout << a[i] << ' ';
    }
    cout << endl;

}