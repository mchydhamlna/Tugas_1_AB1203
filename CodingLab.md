# Coding Lab

Membuat program untuk menghitung Luas dan Keliling Persegi Panjang

## Penyelesaian :
```c++
#include <iostream>

int main() {
    float luas,keliling,panjang,lebar;

    std::cout << "Menghitung Luas dan Keliling Persegi Panjang" << std::endl;
    
    std::cout << "Masukan Panjang: ";
    std::cin >> panjang;
    std::cout << "Masukan Lebar: ";
    std::cin >> lebar;
    luas=panjang*lebar;
    keliling=2*(panjang+lebar);

    std::cout<<"Luas Persegi Panjang: "<<luas<< std::endl;
    std::cout<<"Keliling Persegi Panjang: "<<keliling<< std::endl;

    return 0;

}
```
## Capture Hasil Running Program

![Screenshot 2024-03-18 081728](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/f56176ba-f710-44a3-8274-048e5c8278bb)
