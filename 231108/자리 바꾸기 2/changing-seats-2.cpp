#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

// 각각 사람이 앉게 되는 자리의 수를 출력


int main(){
    int n, k;
    cin >> n >> k;
    int arr[100001];
    int ans[100001];
    int a[100001];
    int b[100001];
    unordered_set<int> s[100001];
    unordered_set<int>::iterator it;

    for(int i = 1; i<=n; i++){
        arr[i] = i;
        s[i].insert(i);
        ans[i] = 1;
    }

    for(int i = 0; i<k; i++){
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i<3; i++){
        for(int j =0; j<k; j++){
            // swap()함수 쓰기
            int tmp = arr[a[j]];
            arr[a[j]] = arr[b[j]];
            arr[b[j]] = tmp;

            if(s[arr[a[j]]].find(a[j]) == s[arr[a[j]]].end()){
                s[arr[a[j]]].insert(a[j]);
                ans[arr[a[j]]]++;
            }
            if(s[arr[b[j]]].find(b[j]) == s[arr[b[j]]].end()){
                s[arr[b[j]]].insert(b[j]);
                ans[arr[b[j]]]++;
            }
        }
    }

    for(int i =1; i<=n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}