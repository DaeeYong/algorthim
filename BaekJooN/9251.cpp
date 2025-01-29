#include <iostream>
#include <string>

using namespace std;

int dp[1001][1001];
string arr1, arr2;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);			

	cin >> arr1;
	cin >> arr2;

	int len_arr1 = arr1.length();
	int len_arr2 = arr2.length();
	
	for(int i = 1; i <= len_arr1; i++){
		for(int j = 1; j <= len_arr2; j++){
			if(arr1[i-1] == arr2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);	
		}
	}

	cout << dp[len_arr1][len_arr2] << '\n';

	return 0;
}
