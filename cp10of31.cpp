#include <bits/stdc++.h>

using namespace std;

int a[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};


void solve(){
    // code
   vector<vector<char>> arr(10, vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
           cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X'){
                sum+=a[i][j];
            }
        }
    }
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}