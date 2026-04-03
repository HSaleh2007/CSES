#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

void solve(){
    string s;cin>>s;
    sort(s.begin(),s.end());
    set<string>dist;
    do{
        dist.insert(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<dist.size()<<"\n";
    for(auto i:dist){
        cout<<i<<"\n";
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    while(t--){
        solve();
    }
}
