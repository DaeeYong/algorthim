#include<iostream>

using namespace std;

int n =0;
int cnt = 0;
bool isused1[15];
bool isused2[30];
bool isused3[30];

void func(int cur){
    // base condition
    if(cur == n){
        cnt++;
        return ;
    }
    for(int i = 0; i < n; i++){
        if(isused1[i] || isused2[cur + i] || isused3[n-1+cur-i]) continue;
        isused1[i] = true;
        isused2[cur + i] = true;
        isused3[n-1+cur-i] = true;
        func(cur+1);
        isused1[i] = false;
        isused2[cur + i] = false;
        isused3[n-1+cur-i] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0);
    cout << cnt << '\n';

    return 0;
}