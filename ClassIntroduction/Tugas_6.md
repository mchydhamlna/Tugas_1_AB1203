## Modifikasi program dari praktikum [P10](https://github.com/mchydhamlna/Tugas_AB1203/blob/main/ClassIntroduction/Praktikum_P10.md) dengan membagi proteksi level data menjadi Public dan Private.

## 1. OOP Robot
Program :
```c++
#include <iostream>
#include <string>

class Robot {
private:
    std::string nama, mbti;
    int umur;

public:
    Robot(std::string n, std::string m, int u) {
        nama = n;
        umur = u;
        mbti = m;
    }

    void perkenalan_diri() {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Umur: " << umur << std::endl;
        std::cout << "MBTI: " << mbti << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Robot prototipe1("Wall-E", "INTJ", 30);
    Robot prototipe2("Astro-29", "INTJ", 20);
    Robot prototipe3("Bay-Max", "INTJ", 10);

    prototipe1.perkenalan_diri();
    prototipe2.perkenalan_diri();
    prototipe3.perkenalan_diri();

    return 0;
}

```
Capture Hasil Running :

![Screenshot 2024-05-29 024807](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/769946b6-3b7f-4cd5-8031-a2571d191e22)

## 2. OOP Handphone
Program :
```c++
#include <iostream>
using namespace std;

class HandPhone {//class
private:
    string nama, warna, tipegaransi;//variable
    int ram, rom, harga, tahun, lamagaransi;

public:
    HandPhone(string n, string w, int r, int ro, int h, int t, int la, string tg) {
        nama = n;
        warna = w;
        ram = r;
        rom = ro;
        harga = h;
        tahun = t;
        lamagaransi = la;
        tipegaransi = tg;
    }

    void spesifikasi() { //method
        cout << "Nama: " << nama << endl;
        cout << "Warna: " << warna << endl;
        cout << "RAM: " << ram << endl;
        cout << "ROM: " << rom << endl;
        cout << "Harga: " << harga << endl;
        cout << endl;
    }

    void tahunkeluaran() {
        cout << "Nama: " << nama << endl;
        cout << "Tahun Keluaran: " << tahun << endl;
        cout << endl;
    }

    void garansi(){
        cout << "Nama: " << nama << endl;
        cout << "Lama Garansi: " << lamagaransi << endl;
        cout << "Tipe Garansi: " << tipegaransi << endl;
        cout << endl;
    }
};

int main() {
    HandPhone jenis_1("Xiaomi 11C", "Putih", 4, 64, 5000000, 0, 0, "");//objek jenis_1
    HandPhone jenis_2("Samsung A11", "Hitam", 2, 32, 3000000, 0, 0, "");
    HandPhone jenis_3("Oppo A95", "Biru", 4, 64, 4000000, 0, 0, "");

    jenis_1.spesifikasi();

    jenis_2.spesifikasi();

    jenis_3.spesifikasi();

    HandPhone tahun_1("Xiaomi 11C", "", 0, 0, 0, 2018, 0, "");//objek tahun_1
    HandPhone tahun_2("Samsung A11", "", 0, 0, 0, 2019, 0, "");
    HandPhone tahun_3("Oppo A95", "", 0, 0, 0, 2020, 0, "");

    tahun_1.tahunkeluaran();

    tahun_2.tahunkeluaran();

    tahun_3.tahunkeluaran();

    HandPhone garansi_1("Xiaomi 11C", "", 0, 0, 0, 0, 1, "Produsen");//objek garansi_1
    HandPhone garansi_2("Samsung A11", "", 0, 0, 0, 0, 2, "Resmi");
    HandPhone garansi_3("Oppo A95", "", 0, 0, 0, 0, 3, "Pabrik");

    garansi_1.garansi();

    garansi_2.garansi();

    garansi_3.garansi();

    return 0;

}
```
Capture Hasil Running :

![Screenshot 2024-05-29 025807](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/4db2d468-b9c6-4016-90ba-81d1aa2a7742)
