#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = { 7, 2, 6, 2, 3 };  // 型を <T> に指定する
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    v.erase(v.begin() + 2); // 3番目の要素を消す

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    v.insert(v.begin() + 2, 999);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    v.clear();

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}