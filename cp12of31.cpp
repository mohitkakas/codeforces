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
    
    vector<int>r;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            r.push_back(a[i]);
        }
        else{
            r.push_back(a[i]);
            r.push_back(1);
            
        }
       
    }
     r.push_back(a[n-1]);
    cout<<r.size()<<endl;
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}