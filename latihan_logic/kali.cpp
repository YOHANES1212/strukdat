#include <iostream>
using namespace std;

int perkalian(int a, int b) {
    int hasil = a * b;
    return hasil;
}

int main() {
    int hasil = perkalian(10, 6);
    cout << "Hasil: " << hasil << endl;
    return 0;
}