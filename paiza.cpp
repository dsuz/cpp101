#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, x, p;    // n: 人数, x: 転校生の身長 p: paizaの身長
    cin >> n >> x >> p;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }   // 身長を読み込む

    v.push_back(x);
    v.push_back(p);
    sort(v.begin(), v.end());
    // paiza 君の身長を探す
    auto it = find(v.begin(), v.end(), p);
    cout << it - v.begin() + 1 << endl;
}
