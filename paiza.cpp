#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int q;
    cin >> q;
    stack<char> st;

    for (int i = 0; i < q; i++) {
        int cmd;    // 1 = push, 2 = pop
        cin >> cmd;

        if (cmd == 1) { // push
            char tmp;
            cin >> tmp;
            st.push(tmp);
        } else {    // pop
            cout << st.top() << endl;
            st.pop();
        }

        vector<char> v;  // 出力のための vector
        auto tmp_st = st;   // 値をコピーするための stack

        while (!tmp_st.empty()) {
            v.emplace_back(tmp_st.top());
            tmp_st.pop();
        }   // tmpst -> v に値をコピーしている（ただし順番が逆になる

        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i];

            if (i > 0)
                cout << " ";
        }   // 逆順に出力する

        cout << endl;
    }

    return 0;
}
