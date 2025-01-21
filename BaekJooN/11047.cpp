#include <iostream>

using namespace std;
int n, k;
int a[11];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = n-1; i >= 0; i--){
        ans += k / a[i]; //동전 몇개 사용했는지
        k %= a[i]; //얼마나 남았는지
    }

    return 0;
}