#include <bits/stdc++.h>

using namespace std;



void solve(){
    // code
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    bool sorted = true;
    int x; cin>>x;
    a[0] = x;
    for(int i = 1 ; i < n ; i++){
        cin>>a[i];
        if(a[i] < a[i-1]) sorted = false;
    }
    if(sorted || k>1){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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