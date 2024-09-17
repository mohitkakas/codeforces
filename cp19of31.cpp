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
    //int mull=1;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        //mull*=a[i];
        sum+=a[i];
        if(a[i]<0){
        count++;}
    }
    if(count==n){
        cout<<count<<endl;
    }
    else if(count==n-1 && n!=1){
        cout<<1<<endl;
    }
    else if(count<n-1 && sum<0){
        cout<<-1*sum<<endl;
    }
    else{
        cout<<0<<endl;
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