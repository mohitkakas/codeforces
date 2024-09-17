#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n , f = 1 , s = 0;
    cin>>n;
    bool flag = true;
    pair<int , int> p(0,0);
    int x; cin>>x;
    p.first = x;
    for(int i = 1 ;i < n ;i++){
        int y; cin>>y;
        if(y == p.first){
            f++;
        }
        else if(y == p.second || p.second == 0){
            p.second = y;
            s++;
        }
        else flag = false;
    }
    if(!flag) cout<<"NO"<<endl;
    else {
        if(abs(f - s) <= 1 || s == 0 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}