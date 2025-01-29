#include <iostream>

using namespace std;

int arr[1001];
int dp[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        dp[i] = arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        if(dp[i] > result) result = dp[i];
    }

    cout << result << '\n';
    
    return 0;
}