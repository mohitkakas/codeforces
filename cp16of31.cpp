#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isSorted=true;
    int min=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            isSorted=false;
        }
        else{
        if((a[i+1]-a[i])<min){
            min=(a[i+1]-a[i]);
        }
    }
    }
    if(isSorted){
    int ans=(min)/2;
    cout<<ans+1<<endl;
}
    else{
        cout<<0<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
}