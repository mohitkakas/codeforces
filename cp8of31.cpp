#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool find=false;
    for(int i=0;i<n;i++){
        if(a[i]==k){
           find=true;
        }
    }
    if(find){
        cout<<"Yes"<<endl;
       
    }
     else{
            cout<<"No"<<endl;
        }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}