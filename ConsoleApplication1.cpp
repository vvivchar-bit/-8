#include <iostream>
using namespace std;

class Vect {
public:
    Vect(char);
    ~Vect() {
        delete[] p;
    }

    int& operator[](int i) {
        return p[i];
    }

    void Print();

private:
    int* p;
    char size;
};

Vect::Vect(char n) : size(n) {
    p = new int[size];
    if (!p) {
        cerr << "Error of Vect constructor" << endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        p[i] = int();
    }
}

void Vect::Print() {
    for (int i = 0; i < size; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    Vect a(3);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a.Print();

    Vect a1(200);
    a1[10] = 5;
    a1.Print();

    return 0;
}