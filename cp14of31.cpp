#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        if(c%2==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    else if(b>a){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}