#include <bits/stdc++.h>

using namespace std;


void solve(){
    // code
    int n;
    cin>>n;
    string a;
    cin>>a;
    while (a.length() > 1) {
        if ((a.front() == '1' && a.back() == '0') || (a.front() == '0' && a.back() == '1')) {
            a.erase(a.begin());   
            a.pop_back();         
        } else {
            break;                
        }
    }
    if(a.length()==0) cout<<0<<endl;
    else{
    cout<<a.length()<<endl;
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