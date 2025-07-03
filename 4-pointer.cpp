#include <iostream>

int main() {
    int a = 1221; // a はint型であり、ポインタではなく、値である。
    int* b = NULL; // b はint型であり、ポインタである。初期値は null である。
    int *c = nullptr; // c はint型であり、ポインタである。初期値は null である。直前の行と微妙に違うが、どちらの書き方をしても結果は同じ。
    b = &a; // 値をアドレスに変換するには、&を前置する
    std::cout << *b << std::endl; // アドレスを値に変換するには、*を前置する
    return 0;
}