#include <iostream>

using namespace std;

int n;
int arr[100001];
int dp[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = -2000;
    dp[0] = arr[0];
    for(int i = 1; i < n; i++){
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        if (dp[i] > result) result = dp[i];
    }

    if (dp[0] > result) result = dp[0];
    cout << result << '\n';

    return 0;
}