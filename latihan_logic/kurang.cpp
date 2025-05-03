#include <iostream>
using namespace std;

int pengurangan(int a, int b) {
    int hasil = a - b;
    return hasil;
}

int main() {
    int hasil = pengurangan(10, 5);
    cout << "Hasil: " << hasil << endl;
    return 0;
}