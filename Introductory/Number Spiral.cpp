#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 998244353
 
#pragma GCC optimize("O3,inline")
 
void solve(){
    /* left diagonal is  n*(n+1)+1 starting from n=0 
       left triangle is easy 
       if odd row then decrease by 1
       if even row then increase by 1
       to the left
       if right
       if odd row then increase by 1
       if even row then decrease by 1
       easy
    */
    int y,x;cin>>y>>x;
    //left part
    if(x<=y){
        int cur = y*y-y+1;
        //go back if needed
        if(y%2==1){
            cout<<cur-(y-x)<<"\n";
        }else{
            cout<<cur+(y-x)<<"\n";
        }
    }else{
        int cur=x*x-x+1;
        if(x%2==0){
            cout<<cur-(x-y)<<"\n";
        }else{
            cout<<cur+(x-y)<<"\n";
        }
    }
}
 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;cin>>t;
    while(t--)
        solve();
}
