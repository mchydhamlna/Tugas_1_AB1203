# Menampilkan 2 class dalam satu program
## Program :
```c++
#include <iostream>

class Kalkulator { //Kalkulator
public:
    int tambah(int a, int b) {
        return a + b;
    }

    int kurang(int a, int b) {
        return a - b;
    }

    int kali(int a, int b) {
        return a * b;
    }

    double bagi(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        }
    }
};

class Penghitung { //Penghitung
public:
    int luasPersegi(int panjang, int lebar) {
        return panjang * lebar;
    }

    int kelilingPersegi(int panjang, int lebar) {
        return 2 * (panjang + lebar);
    }
};

int main() {
    Kalkulator kalkulator;
    Penghitung penghitung;

    int a = 5, b = 3;
    std::cout << "--- Operasi Kalkulator ---" << std::endl;
    std::cout << "5 + 3 = " << kalkulator.tambah(a, b) << std::endl;
    std::cout << "5 - 3 = " << kalkulator.kurang(a, b) << std::endl;
    std::cout << "5 * 3 = " << kalkulator.kali(a, b) << std::endl;
    std::cout << "5 / 3 = " << kalkulator.bagi(a, b) << std::endl;
    std::cout << std::endl;

    std::cout << "--- Operasi Penghitung Luas & Keliling ---" << std::endl;
    std::cout << "Luas persegi panjang (Panjang 5) (Lebar 3) : " << penghitung.luasPersegi(a, b) << std::endl;
    std::cout << "Keliling persegi panjang (Panjang 5) (Lebar 3) : " << penghitung.kelilingPersegi(a, b) << std::endl;
    std::cout << std::endl;

    return 0;
}
```
## Capture output

![Screenshot 2024-06-07 122834](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/fe2128e6-c59e-4d43-b55e-24f56ae83cb8)

