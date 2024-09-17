#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int diff=0;
    if(n==1){
        diff=max;
    }
    else{
    for(int i=0;i<n-1;i++){
        diff=(a[i+1]-a[i]);
        if(max<diff){
            max=diff;
        }
        
    }
    }
    
    int maxi=2*(x-a[n-1]);
    if(maxi>=max){
        cout<<maxi<<endl;
    }
    else{
        cout<<max<<endl;
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