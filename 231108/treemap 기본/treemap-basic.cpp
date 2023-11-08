#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> m;
    int n;
    cin >> n;
    map<int, int>::iterator it;

    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        if(str == "add"){
            int a, b;
            cin >> a >> b;
            m[a]=b;
        }else if(str == "find"){
            int a;
            cin >> a;
            if(m.find(a) == m.end()) cout << "None" << endl;
            else cout << m[a] << endl;
        }else if(str == "remove"){
            int a;
            cin >> a;
            m.erase(a);
        }else if(str == "print_list"){
            if(m.size() == 0) cout << "None" << endl;
            else{
                for(it = m.begin(); it != m.end(); it++){
                    cout << (it -> second) << " ";
                }
                cout << endl;
            }

        }
    }
    return 0;
}