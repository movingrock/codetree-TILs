#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    int n, m;
    unordered_set<int> s1, s2;
    cin >> n;
    for(int i =0; i<n; i++){
        int num;
        cin >> num;
        s1.insert(num);
    }
    cin >> m;
    for(int i = 0; i<m; i++){
        int num;
        cin >> num;
        if(s1.find(num) != s1.end()) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}