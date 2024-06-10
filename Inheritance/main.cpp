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