#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    map<string, int>::iterator it;

    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        if(m.find(str) == m.end()) m[str] = 1;
        else m[str]++;
    }

    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}