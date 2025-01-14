#include<iostream>

using namespace std;

int dp[301];
int stair[301];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    for(int i = 1; i < n+1; i++){
        cin >> stair[i];
    }

    //init dp table
    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    
    //calc dp table
    for (int i = 3; i < n+1; i++) dp[i] = max(stair[i] + dp[i-2], stair[i] + stair[i-1] + dp[i-3]);

    cout << dp[n] << '\n';

    return 0;
}