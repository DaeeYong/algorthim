#include<iostream>

using namespace std;

int n, m, s, e;
int arr[2001];
int dp[2001][2001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        dp[i][i] = 1;
    }
    
    
    //dp init
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]) dp[i][i+1] = 1;
    }
    
    
    //dp table
     for(int i = n - 3; i >= 0; i--){
         for(int j = i + 2; j < n; j++){
             if(arr[i] == arr[j]) dp[i][j] = dp[i+1][j-1];
         }
     }
     
    
     cin >> m;
     for(int i = 0; i < m; i++){
         cin >> s >> e;
         cout << dp[s-1][e-1] << '\n';
     }
    
    return 0;
}
