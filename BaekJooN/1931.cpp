//date: 25.01.20
//끝나는 시간이 빠른 순으로, 끝나는 시간이 같다면 시작하는 시간이 빠른 순으로 정렬
//시작하는 시간이 빠른 순으로 정렬하는 이유
// -> 시작하자 마자 끝나는 회의가 존재하기 때문
#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<int, int> s[100001]; //{end time, st time}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i].second >> s[i].first;

    return 0;
}
