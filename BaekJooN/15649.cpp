#include <iostream>

using namespace std;

int arr[10];
bool isused[10];
int n, m;

//k개의 숫자를 선택했을 때, arr[k]를 결정하는 함수
//0-based idx
void func(int k){
    //base condition
    if(k == m){
        for(int i = 0; i < m; i++) cout << arr[i] << ' ';
        cout << '\n';
    }

    for(int i = 1; i <= n; i++){
        if(!isused[i]){
            arr[k] = i;
            isused[i] = true;
            func(k+1);
            isused[i] = false;
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0); 

    return 0;
}