#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        int num;
        cin >> num;
        if(str == "add"){
            s.insert(num);
        }else if(str == "remove"){
            s.erase(num);
        }else if(str == "find"){
            if(s.find(num) == s.end()) cout << "false" << endl;
            else cout << "true" << endl;
        }
    }
    return 0;
}