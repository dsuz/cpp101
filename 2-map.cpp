#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;
    m[13] = "濱口";
    m[2] = "カーター";
    m[11] = "津森";
    m[10] = "上沢";
    m[2] += "・スチュワート・ジュニア";

    for (auto x : m) {
        cout << x.first << ": " << x.second << endl;
    }
}