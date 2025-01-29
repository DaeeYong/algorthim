/*
날짜: 25.01.28
문제 번호: 1699
문제: 제곱수의 합
*/

#include<iostream>

using namespace std;

int n;
int dp[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i <= n; i++) dp[i] = i;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j * j <= i; j++) dp[i] = min(dp[i], dp[i-j*j] + 1);
    }

    cout << dp[n] << '\n';

    return 0;
}
