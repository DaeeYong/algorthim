#include <iostream>

using namespace std;

long long dp[91];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i < 90; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n-1] << '\n';

    return 0;
}