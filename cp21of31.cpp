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
    int count=0;
    int maxlength=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        }
        else{
            if(maxlength<count){
                maxlength=count;
            }
            count=0;
        }
        
}
if(count>maxlength){
           maxlength=count;
        }
        cout<<maxlength<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}