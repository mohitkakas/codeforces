#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    long long int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<0){
        if((-1*a[i])<min){
            min=(-1*a[i]);
        }
        }
        else{
            if(a[i]<min){
                min=a[i];
            }
        }
    }
    cout<<min<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();
    }
}