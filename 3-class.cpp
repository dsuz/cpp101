#include <iostream>
#include <ctime>
using namespace std;

class person {
public:
    // メンバ変数群
    string family_name;
    string first_name;
    int birth_year;
    int birth_month;
    int birth_day;

    person(){};

    // コンストラクター（初期化を簡単にするため）
    person(string family_name, string first_name, int birth_year, int birth_month, int birth_day) {
        this->family_name = family_name;
        this->first_name = first_name;
        this->birth_year = birth_year;
        this->birth_month = birth_month;
        this->birth_day = birth_day;
    }

    // メンバ関数: 誕生日から年齢を計算し、取得する
    int get_age() {
        auto t = time(NULL);
        tm* now = localtime(&t);
        int today = (now->tm_year + 1900) * 10000 + now->tm_mon * 100 + now->tm_mday;
        int birthday = birth_year * 10000 + birth_month * 100 + birth_day;
        return (today - birthday) / 10000;
    }

    string get_info() {
        string result = "";
        result += family_name + first_name + "は";
        result += to_string(birth_year) + "年" + to_string(birth_month) + "月" + to_string(birth_day) + "日生まれの";
        result += to_string(get_age()) + "歳です!";
        return result;
    }
};

int main() {
    person* junichiro_koizumi = new person("小泉", "純一郎", 1942, 1, 8);
    cout << junichiro_koizumi->get_info() << endl;
    delete junichiro_koizumi;
    person shinjiro_koizumi = person("小泉", "進次郎", 1981, 4, 14);
    cout << shinjiro_koizumi.get_info() << endl;
    return 0;
}
