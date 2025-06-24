#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    s1 = "Hello";
    s2 = "World";
    cout << s1 + s2 << endl;    // + で連結できる
    cout << s1.substr(2, 3) << endl;    // 部分文字列を取ってこられる
}