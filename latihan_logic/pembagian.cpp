#include <iostream>
using namespace std;

int pembagian(int a, int b) {
    int hasil = a / b;
    return hasil;
}

int main() {
    int hasil = pembagian(8, 10);
    cout << "Hasil: " << hasil << endl;
    return 0;
}