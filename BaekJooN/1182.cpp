#include <iostream>

using namespace std;

int n, s;
int arr[21];
int cnt = 0;
void func(int cur, int total) {
    //base case
    if(cur == n){
        if(total == s) cnt++;
        return ;
    }

    func(cur+1, total); //left
    func(cur+1,total + arr[cur]); //right
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> arr[i];
    func(0, 0);
    
    if(s == 0) cnt -=1;
    cout << cnt;

    return 0;
}