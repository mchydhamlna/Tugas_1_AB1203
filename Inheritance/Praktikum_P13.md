# PROGRAM KE SATU
## Program C++ 
```c++
#include <iostream>
using namespace std;

class Hewan {
public:
    void predator() {
        cout << "Ini adalah hewan predator" << endl;
        cout << endl;
    }

    void taring() {
        cout << "Hewan ini memiliki taring" << endl;
        cout << endl;
    }

    void cakar() {
        cout << "Hewan ini memiliki cakar" << endl;
        cout << endl;
    }
};

class Harimau : public Hewan {
public:
    void info() {
        cout << "Hewan ini adalah Harimau" << endl;
        cout << endl;
    }
};

class Singa : public Hewan {
public:
    void info() {
        cout << "Hewan ini adalah Singa" << endl;
        cout << endl;
    }
};

class Macan : public Hewan {
public:
    void info() {
        cout << "Hewan ini adalah Macan" << endl;
        cout << endl;
    }
};

int main() {
    Harimau harimau;
    Singa singa;
    Macan macan;
    
    harimau.info();
    harimau.predator();
    harimau.taring();
    harimau.cakar();

    singa.info();
    singa.predator();
    singa.taring();
    singa.cakar();

    return 0;
}
```
## Output

![Screenshot 2024-06-10 082926](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/f67f944c-b3ca-49a8-8c74-54457eb64d8e)

# PROGRAM KE DUA
## Program C++
```c++
#include <iostream>
using namespace std;

class Hewan {
public:
    void predator() {
        cout << "Ini adalah hewan predator" << endl;
        cout << endl;
    }

    void taring() {
        cout << "Hewan ini memiliki taring" << endl;
        cout << endl;
    }

    void cakar() {
        cout << "Hewan ini memiliki cakar" << endl;
        cout << endl;
    }
};

class Harimau : public Hewan {
public:
    void predator() {
        cout << "Hewan ini adalah Harimau" << endl;
        cout << endl;
    }
};

class Singa : public Hewan {
public:
    void predator() {
        cout << "Hewan ini adalah Singa" << endl;
        cout << endl;
    }
};

class Macan : public Hewan {
public:
    void predator() {
        cout << "Hewan ini adalah Macan" << endl;
        cout << endl;
    }
};

int main() {
    Harimau harimau;
    Singa singa;
    Macan macan;
    
    harimau.predator();
    harimau.predator();
    harimau.taring();
    harimau.cakar();

    singa.predator();
    singa.predator();
    singa.taring();
    singa.cakar();

    return 0;
}
```
## Output

![image](https://github.com/mchydhamlna/Tugas_AB1203/assets/144500877/a32bd2c2-ecd0-41c2-9858-d2df619ca2c9)

## Kesimpulan Output ke 2

Berdasarkan output ke 2 tersebut, dapat disimpulkan bahwa:

Setiap kelas turunan (Harimau, Singa, dan Macan) memiliki implementasi sendiri untuk fungsi predator(), yang dioverride dari kelas dasar Hewan.
Fungsi predator() pada setiap kelas turunan mengembalikan nilai yang berbeda-beda, sesuai dengan nama kelasnya masing-masing.
Fungsi taring() dan cakar() diwarisi dari kelas dasar Hewan dan dipanggil pada setiap instance, mengembalikan nilai yang sama untuk setiap kelas turunan.
