#include <iostream>
#include <vector>
using namespace std;

class hero {
public:
    int level;
    int health;
    int attack;
    int defence;
    int speed;
    int clever;
    int fortune;

    hero(int level, int health, int attack, int defence, int speed, int clever, int fortune) {
        this->level = level;
        this->health = health;
        this->attack = attack;
        this->defence = defence;
        this->speed = speed;
        this->clever = clever;
        this->fortune = fortune;
    }

    void levelup(int health, int attack, int defence, int speed, int clever, int fortune) {
        level++;
        this->health += health;
        this->attack += attack;
        this->defence += defence;
        this->speed += speed;
        this->clever += clever;
        this->fortune += fortune;
    }

    void muscle_training(int health, int attack) {
        this->health += health;
        this->attack += attack;
    }

    void running(int defence, int speed) {
        this->defence += defence;
        this->speed += speed;
    }

    void study(int clever) {
        this->clever += clever;
    }

    void pray(int fortune) {
        this->fortune += fortune;
    }
};

int main() {
    int n, k; // n: パーティーの人数, k: イベントの回数
    cin >> n >> k;
    vector<hero>* party = new vector<hero>();

    for (int i = 0; i < n; i++) {
        int level, health, attack, defense, speed, clever, fortune;
        cin >> level >> health >> attack >> defense >> speed >> clever >> fortune;
        party->push_back(hero(level, health, attack, defense, speed, clever, fortune));
    } // 勇者のデータを読み込む

    for (int i = 0; i < k; i++) {
        int to;
        string event;
        cin >> to >> event;

        if (event == "levelup") {
            int health, attack, defense, speed, clever, fortune;
            cin >> health >> attack >> defense >> speed >> clever >> fortune;
            party->at(to - 1).levelup(health, attack, defense, speed, clever, fortune); // 1-origin -> 0-origin
        } else if (event == "muscle_training") {
            int health, attack;
            cin >> health >> attack;
            party->at(to - 1).muscle_training(health, attack);
        } else if (event == "running") {
            int defence, speed;
            cin >> defence >> speed;
            party->at(to - 1).running(defence, speed);
        } else if (event == "study") {
            int clever;
            cin >> clever;
            party->at(to - 1).study(clever);
        } else if (event == "pray") {
            int fortune;
            cin >> fortune;
            party->at(to - 1).pray(fortune);
        }
    }   // イベントを処理する

    for (auto h : party) {
        cout << h.level << " " << h.health << " " << h.attack << " "
            << h.defence << " " << h.speed << " " << h.clever << " " << h.fortune << endl;
    }   // 全員のデータを出力する
}
