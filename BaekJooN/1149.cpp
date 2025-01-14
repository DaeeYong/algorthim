#include <iostream>
#include <climits>

using namespace std;

int dp[1002][3];
int cost[1002][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i < n+1; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    //init table
    dp[1][0] = cost[1][0];
    dp[1][1] = cost[1][1];
    dp[1][2] = cost[1][2];

    //calc table
    for (int i = 2; i < n+1; i++) {
        dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }


    int result = INT_MAX;
    for(int i = 0; i < 3; i++){
        if(dp[n][i] < result) result = dp[n][i];
    }

    cout << result << '\n';

    return 0;
}