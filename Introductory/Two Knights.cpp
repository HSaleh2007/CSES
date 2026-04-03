#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

void solve(){
    //OEIS A172132
    //https://oeis.org/A172132
    int k;cin>>k;
    for(int n=1;n<=k;n++){
        cout<<(n - 1)*(n + 4)*(n*n - 3*n + 4)/2<<"\n";
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
