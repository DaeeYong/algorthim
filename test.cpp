#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> s[100];
int n;

int main(){

    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i].first >> s[i].second;

    sort(s, s+n);
    cout << "-----------------------------"<<'\n';
    for(int i = 0; i < n; i++){
        cout << s[i].first <<' '<< s[i].second;
        cout << '\n';
    }

    return 0;
}