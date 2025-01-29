#include<iostream>
#include<algorithm>

using namespace std;

int coins[21];
int dp[10001];

int t, n, val;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for(int i = 0; i < t; i++){
        fill(dp, dp+10001, 0);
        dp[0] = 1;
        cin >> n; //동전 개수
        for(int j = 0; j < n; j++) cin >> coins[j];
        
        cin >> val; //목표 금액
        for(int coinIdx = 0; coinIdx < n; coinIdx++){
            for(int j = coins[coinIdx]; j <= val; j++){
                dp[j] = dp[j] + dp[j-coins[coinIdx]];
            }
        }
        cout << dp[val] << '\n';
    }

    return 0;
}