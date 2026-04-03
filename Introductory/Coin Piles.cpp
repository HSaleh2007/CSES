#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

string stress(int a,int b){
    while(max(a,b)>=2 && min(a,b)>=1){
        if(a>b){
            a-=2;
            b-=1;
        }else{
            a--;
            b-=2;
        }
    }
    if(a==0 && b==0){
        return "YES";
    }
    return "NO";
}

void solve(){
    int a,b;cin>>a>>b;
    if(a>b)swap(a,b);
    //(a+b) mod 3=0 must hold
    if((a+b)%3==0 && b<=2*a){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
    for(int i=1;i<=6;i++){
        for(int j=1;j<=100;j++){
            if(stress(i,j)=="YES"){
                cerr<<i<<" "<<j<<"\n";
            }
        }
    }
    */

    int t=1;cin>>t;
    while(t--){
        solve();
    }
}
