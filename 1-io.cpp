#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;    // 連続して入力できる
    std::cout << a << "-" << b << "-" << c << std::endl;    // 連続して出力できる
    char ch;
    std::cin >> ch;
    std::cout << ch << std::endl;
}