# Nomor 1
## Program
```c++
    std::cout << "Menampilkan informasi satu satu:" << std::endl;
    std::cout << "Nama: " << mhs.getNama() << std::endl;
    std::cout << "Umur: " << mhs.getUmur() << std::endl;
    std::cout << "Prodi: " << mhs.getProdi() << std::endl;
    std::cout << "Fakultas: " << mhs.getFakultas() << std::endl;
```
## Capture Hasil Runninng
![image](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/d87ec2fb-f6c1-40ed-98b9-3e1809bc4a94)

# Nomor 2
## Program
```c++
#include <iostream>
#include <string>

class Mahasiswa {
private:
    std::string nama, prodi, fakultas;
    int umur;

public:
    Mahasiswa(std::string n, std::string p, std::string f, int u) {
        nama = n;
        umur = u;
        prodi = p;
        fakultas = f;
    }

    void setNama(std::string n) {
        nama = n;
    }

    std::string getNama() {
        return nama;
    }

    void setUmur(int u) {
        umur = u;
    }

    int getUmur() {
        return umur;
    }

    void setProdi(std::string p) {
        prodi = p;
    }

    std::string getProdi() {
        return prodi;
    }

    void setFakultas(std::string f) {
        fakultas = f;
    }

    std::string getFakultas() {
        return fakultas;
    }
    


    void tampilkanInfo() {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Umur: " << umur << std::endl;
        std::cout << "Prodi: " << prodi << std::endl;
        std::cout << "Fakultas: " << fakultas << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Mahasiswa mhs("Yudha", "Agribisnis", "Fakultas Sains dan Teknologi", 19);
    
    std::cout << "Informasi awal Mahasiswa:" << std::endl;
    mhs.tampilkanInfo();

    mhs.setNama("Abdul");
    mhs.setUmur(20);
    mhs.setProdi("Sains Data");
    mhs.setFakultas("Fakultas Sains dan Teknologi");

    std::cout << "Informasi setelah diubah:" << std::endl;
    mhs.tampilkanInfo();

    return 0;
}
```
## Capture Hasil Running
![Screenshot 2024-05-27 084721](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/8bc71296-30f8-4020-9c0e-ea568e8d22b3)
