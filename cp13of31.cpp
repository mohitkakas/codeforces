#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n;
    cin>>n;
    vector<int>a(n);
    int x; cin>>x;
    a[0] = x;
    int m = x;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i] > m){
            m = a[i];
        }
    }
    vector<int>f;
    
    vector<int>s;

    for(int i = 0 ;i< n ;i++){
        if(a[i] == m) s.push_back(a[i]);
        else f.push_back(a[i]);
    }
    if(f.size()==0){
        cout<<-1<<endl;
    }
    else{
        cout<<f.size()<<" "<<s.size()<<endl;  
        for(int i=0;i<f.size();i++){
            cout<<f[i]<<" ";
        }  cout<<endl;

        for(int j=0;j<s.size();j++){
            cout<<s[j]<<" ";
        }cout<<endl;
        }
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}