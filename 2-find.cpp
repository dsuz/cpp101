#include <iostream>
#include <algorithm>
#include <vector>
// using namespace std;

int main() {
    int find = 60;
    std::vector<int> v = { 1, 21, 3, 43, 60, 6, 7, 4, 9, 0 };
    auto it = std::find(v.begin(), v.end(), find);

    if (it == v.end()) {
        std::cout << "Not found" << std::endl;
    } else {
        std::cout << it - v.begin() << std::endl;   // これで何番目の要素なのかわかる
    }   // 見つかった場合
}