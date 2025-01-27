#include<iostream>

using namespace std;

int n;
int arr[1001];
int dp[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    dp[0] = 1;
    for(int i = 1; i < n; i++){
        
        int max = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i] && dp[j] > max) max = dp[j];
        }
        dp[i] = max + 1;
    }

    int result = dp[0];
    for(int i = 1; i < n; i++){
        if(dp[i] > result) result = dp[i];
    }

    cout << result << '\n';

    return 0;
}
