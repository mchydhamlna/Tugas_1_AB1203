# 1. OOP Robot
## Program
```c++
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
```
## Capture Hasil Running

![image](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/5b8c50e5-b228-4401-a2f7-e5cede2125be)

# 2. OOP Handphone
## Program
```c++
#include <iostream>
using namespace std;

class HandPhone {//class
public:
    string nama, warna, tipegaransi;//variable
    int ram, rom, harga, tahun, lamagaransi;

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
    HandPhone jenis_1;//objek jenis_1
    HandPhone jenis_2;
    HandPhone jenis_3;

    jenis_1.nama = "Xiaomi 11C";
    jenis_1.warna = "Putih";
    jenis_1.ram = 4;
    jenis_1.rom = 64;
    jenis_1.harga = 5000000;
    jenis_1.spesifikasi();

    jenis_2.nama = "Samsung A11";
    jenis_2.warna = "Hitam";
    jenis_2.ram = 2;
    jenis_2.rom = 32;
    jenis_2.harga = 3000000;
    jenis_2.spesifikasi();

    jenis_3.nama = "Oppo A95";
    jenis_3.warna = "Biru";
    jenis_3.ram = 4;
    jenis_3.rom = 64;
    jenis_3.harga = 4000000;
    jenis_3.spesifikasi();

    HandPhone tahun_1;
    HandPhone tahun_2;
    HandPhone tahun_3;

    tahun_1.tahun = 2018;
    tahun_1.nama = "Xiaomi 11C";
    tahun_1.tahunkeluaran();

    tahun_2.tahun = 2019;
    tahun_2.nama = "Samsung A11";
    tahun_2.tahunkeluaran();

    tahun_3.tahun = 2020;
    tahun_3.nama = "Oppo A95";
    tahun_3.tahunkeluaran();

    HandPhone garansi_1;
    HandPhone garansi_2;
    HandPhone garansi_3;

    garansi_1.nama = "Xiaomi 11C";
    garansi_1.lamagaransi = 1;
    garansi_1.tipegaransi = "Produsen";
    garansi_1.garansi();

    garansi_2.nama = "Samsung A11";
    garansi_2.lamagaransi = 2;
    garansi_2.tipegaransi = "Resmi";
    garansi_2.garansi();

    garansi_3.nama = "Oppo A95";
    garansi_3.lamagaransi = 3;
    garansi_3.tipegaransi = "Pabrik";
    garansi_3.garansi();

    return 0;

}
```
## Capture Hasil Running

![Screenshot 2024-05-20 091330](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/f6a1ac60-b530-4018-9757-f301c7f9809e)


