#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int , int> m;
    map<int , int>::iterator it;

    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        if(m.find(num) == m.end())m[num] = i+1;
    }

    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}