#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_set<int> m;
    int cnt = 0;
    for(int i =0; i<n; i++){
        int num;
        cin >> num;
        if(m.find(num) == m.end()) cnt++;
        m.insert(num);
    }
    cout << cnt;
    return 0;
}