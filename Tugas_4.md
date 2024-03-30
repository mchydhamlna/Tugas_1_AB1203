# TUGAS 4 Pemrograman Matriks

<img width="220" alt="image" src="https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/53a9742d-1165-40d6-b9c7-942a23ece35c">

# Program C++
```c++
#include <iostream>
using namespace std;

int main() {
    int matriks_a11 = 1, matriks_a12 = 2;
    int matriks_a21 = 3, matriks_a22 = 4;

    int matriks_b11 = 5, matriks_b12 = 6;
    int matriks_b21 = 7, matriks_b22 = 8;

    int hasil_jumlah_m11 = 0, hasil_jumlah_m12 = 0;
    int hasil_jumlah_m21 = 0, hasil_jumlah_m22 = 0;

    hasil_jumlah_m11 = matriks_a11 + matriks_b11;
    hasil_jumlah_m12 = matriks_a12 + matriks_b12;
    hasil_jumlah_m21 = matriks_a21 + matriks_b21;
    hasil_jumlah_m22 = matriks_a22 + matriks_b22;

    cout << "Matriks A = " << endl;
    cout << "(" << matriks_a11 << " " << matriks_a12 << ")" << endl;
    cout << "(" << matriks_a21 << " " << matriks_a22 << ")" << endl;
    cout << endl;

    cout << "Matriks B = " << endl;
    cout << "(" << matriks_b11 << " " << matriks_b12 << ")" << endl;
    cout << "(" << matriks_b21 << " " << matriks_b22 << ")" << endl;
    cout << endl;

    cout << "Hasil penjumlahan matriks A dan B adalah = " << endl;
    cout << "(" << hasil_jumlah_m11 << " " << hasil_jumlah_m12 << ")" << endl;
    cout << "(" << hasil_jumlah_m21 << " " << hasil_jumlah_m22 << ")" << endl;

    return 0;
}

```
# Capture hasil running

<img width="484" alt="Screenshot 2024-03-30 185648" src="https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/359ff017-955c-40f7-83fb-267009d64e83">
