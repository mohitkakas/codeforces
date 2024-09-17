#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n,k,x;
    cin>>n>>k>>x;
   if(k==1 && x==1) cout<<"No"<<endl;
   else if(x==1 && k==2 && n%2!=0) cout<<"No"<<endl;
   else{
    if(x!=1){
        cout<<"Yes"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }cout<<endl;
    }
    else{
        if(n%2==0){
            cout<<"Yes"<<endl;
            cout<<(n/2)<<endl;
            for(int i=0;i<(n/2);i++){
                cout<<2<<" ";
            }cout<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            cout<<(n/2)<<endl;
            cout<<3<<" ";
            for(int i=0;i<n/2 - 1;i++){
                cout<<2<<" ";
            }cout<<endl;
        }
    }
   }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}