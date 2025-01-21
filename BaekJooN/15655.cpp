#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];
int idx[10];

int n, m;

//k개의 숫자를 선택했을 때, idx[k] 결정
void func(int k){
    //base condition
    if(k == m){
        for(int i = 0; i < m; i++) cout << arr[idx[i]] << ' ';
        cout << '\n';
        return ;
    }

    int curPos = 0; //arr의 idx
    if(k != 0) curPos = idx[k-1] + 1;
    for(int i = curPos; i < n; i++){
        idx[k] = i;
        func(k+1);
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    std::sort(arr, arr + n);
    
    func(0);

    return 0;
}