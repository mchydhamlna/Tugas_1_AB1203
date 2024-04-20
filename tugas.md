# TUGAS KELOMPOK 1
https://github.com/sevinurafni/AB1203/blob/main/Structure.md#tugas

## Program
```c++
#include <iostream>
#include <string>
#include <iomanip>

struct Tanaman {
    std::string nama;
    double hargaPerKg;
    int jumlahPanenTahunan;
};

struct Hewan {
    std::string nama;
    int jumlah;
    double hargaPerEkor;
};

struct Petani {
    std::string nama;
    int usia;
    int pendapatanTahunan;
};

//input
void inputTanaman(Tanaman& tanaman) {
    std::cout << "Masukkan informasi tanaman:\n";
    std::cout << "Nama: ";
    std::getline(std::cin, tanaman.nama);
    std::cout << "Harga per kilogram: ";
    std::cin >> tanaman.hargaPerKg;
    std::cout << "Jumlah panen tahunan: ";
    std::cin >> tanaman.jumlahPanenTahunan;
    std::cin.ignore();
}

void inputHewan(Hewan& hewan) {
    std::cout << "Masukkan informasi hewan:\n";
    std::cout << "Nama: ";
    std::getline(std::cin, hewan.nama);
    std::cout << "Jumlah: ";
    std::cin >> hewan.jumlah;
    std::cout << "Harga per ekor: ";
    std::cin >> hewan.hargaPerEkor;
    std::cin.ignore();
}

void inputPetani(Petani& petani) {
    std::cout << "Masukkan informasi petani:\n";
    std::cout << "Nama: ";
    std::getline(std::cin, petani.nama);
    std::cout << "Usia: ";
    std::cin >> petani.usia;
    std::cout << "Pendapatan tahunan: ";
    std::cin >> petani.pendapatanTahunan;
    std::cin.ignore();
}


//output
void outputTanaman(const Tanaman& tanaman) {
    std::cout << "\nInformasi Tanaman Asgar Farm:\n";
    std::cout << "Nama: " << tanaman.nama << "\n";
    std::cout << "Harga per kilogram: Rp." << tanaman.hargaPerKg << "\n";
    std::cout << "Jumlah panen tahunan: " << tanaman.jumlahPanenTahunan << " kg\n";
}

void outputHewan(const Hewan& hewan) {
    std::cout << "\nInformasi Hewan Asgar Farm:\n";
    std::cout << "Nama: " << hewan.nama << "\n";
    std::cout << "Jumlah: " << hewan.jumlah << " ekor\n";
    std::cout << "Harga per ekor: Rp." << std::setprecision(10) << hewan.hargaPerEkor << "\n";
}


void outputPetani(const Petani& petani) {
    std::cout << "\nInformasi Petani Asgar Farm:\n";
    std::cout << "Nama: " << petani.nama << "\n";
    std::cout << "Usia: " << petani.usia << " tahun\n";
    std::cout << "Pendapatan tahunan: Rp." << petani.pendapatanTahunan << "\n";
}

int main() {
    Tanaman tanaman;
    Hewan hewan;
    Petani petani;

    inputTanaman(tanaman);
    inputHewan(hewan);
    inputPetani(petani);

    outputTanaman(tanaman);
    outputHewan(hewan);
    outputPetani(petani);

    return 0;
}
```

## Capture Hasil Running
Input :

Output: 
