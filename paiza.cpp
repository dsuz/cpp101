#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        m[name] = 0;
    }   // 名前を読み込む

    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int damage;
        cin >> name >> damage;
        m[name] += damage;
    }   // ダメージのデータを読み込む

    for (auto x : m) {
        cout << x.second << endl;
    }
}
