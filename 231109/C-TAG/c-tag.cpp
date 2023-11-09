#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int n, m;
string groupA[501];
string groupB[501];
unordered_set<string> s1;

bool Func(int i, int j, int k){
    s1.clear();

    for(int l = 0; l<n; l++){
        s1.insert(groupA[l].substr(i, 1) + groupA[l].substr(j, 1) + groupA[l].substr(k, 1));
    }
    for(int l = 0; l<n; l++){
        if(s1.find(groupB[l].substr(i, 1) + groupB[l].substr(j, 1) + groupB[l].substr(k, 1)) != s1.end())
            return false;
    }
    return true;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> groupA[i];
    }
    for(int i = 0; i<n; i++){
        cin >> groupB[i];
    }

    int cnt = 0;

    for(int i = 0; i<m; i++){
        for(int j = i+1; j<m; j++){
            for(int k = j+1; k<m; k++){
                if(Func(i,j,k)) cnt++;
            }
            
        }
    }

    cout << cnt;
    return 0;
}