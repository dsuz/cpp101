#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = { 1, 21, 3, 43, 60, 6, 7, 4, 9, 0 };
    // std::sort(v.begin(), v.end());  // 昇順ソート (ascendant sort)
    // std::sort(v.begin(), v.end(), std::greater<int>());  // 降順ソート
    std::sort(v.rbegin(), v.rend());  // 降順ソート

    for (auto i : v) {
        std::cout << i << " ";
    }
}