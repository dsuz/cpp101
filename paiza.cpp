// 文字列に一致しているか判定する
#include <iostream>
using namespace std;

int main() {
    string greeting;
    cin >> greeting;

    if (greeting == "Hello") {
        cout << "こんにちは" << endl;
    } else if (greeting == "Morning") {
        cout << "おはよう" << endl;
    } else {
        cout << "はじめまして" << endl;
    }
}
