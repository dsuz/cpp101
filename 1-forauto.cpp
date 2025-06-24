#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto a = v[4];  // 型が自明な時は、auto にしておけばよい
    auto b = 1.5;
    auto s = "abc";
    auto c = 'c';

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    for (const auto i: v) {
        cout << i << " ";
    }   // 範囲 for で書くと、こう

    cout << endl;
}