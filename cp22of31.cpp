#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    long long int n,k;
    cin>>n>>k;
    
    if(n%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        if(k%2==0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}