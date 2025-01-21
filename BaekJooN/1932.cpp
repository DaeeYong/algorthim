#include <iostream>

using namespace std;

int n;
int dp[500][500]; //dp[i][j]: i번쨰 층의 j 번째 요소가 목적지일 때의 최대값

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j=0; j < i+1; j++){
            cin >> dp[i][j];
        }
    }

    //대각선 계산
    for(int i = 1; i < n; i++){
        dp[i][0] += dp[i-1][0]; //왼쪽
        dp[i][i] += dp[i-1][i-1]; //오른쪽
    }

    //table 채우기
    for(int i = 2; i < n; i++){
        for(int j = 1; j < i; j++){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + dp[i][j];
        }
    }

    int max = 0;
    for(int j = 0; j < n; j++){
        if(dp[n-1][j] > max) max = dp[n-1][j];
    }

    cout << max << '\n';
    for(int i = 0; i < n; i++){
        for(int j=0; j<i+1; j++){
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}