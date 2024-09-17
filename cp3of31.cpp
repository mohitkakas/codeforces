#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n;
    cin>>n;
    string a;
    cin>>a;
    int count=0;
    int countHash=0;
    for(int i=0;i<=n-3;i++){
        if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.'){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]=='#'){
            countHash++;
        }
    }
    if(count>=1){
        cout<<2<<endl;
       
    }
    else{
            cout<<n-countHash<<endl;
        }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}