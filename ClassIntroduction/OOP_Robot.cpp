#include <iostream>
using namespace std;

class Robot {
public:
    string nama, mbti;
    int umur;

    void perkenalan_diri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
        cout <<  endl;
    }
};

int main() {
    Robot prototipe1;
    Robot prototipe2;
    Robot prototipe3;

    prototipe1.nama = "Wall-E";
    prototipe1.umur = 30;
    prototipe1.mbti = "INTJ";
    prototipe1.perkenalan_diri();

    prototipe2.nama = "Astro-29";
    prototipe2.umur = 20;
    prototipe2.mbti = "INTJ";
    prototipe2.perkenalan_diri();

    prototipe3.nama = "Bay-Max";
    prototipe3.umur = 10;
    prototipe3.mbti = "INTJ";
    prototipe3.perkenalan_diri();

    return 0;
}