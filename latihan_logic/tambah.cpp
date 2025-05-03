#include <iostream>
using namespace std;


void tambah(int a, int b){
    cout << "hasil tambah = " << a + b;
}


int main() {
    int x,y;
    cout<< "masukan angka * + - /" << endl;
    cin>> x >> y;
    tambah(x, y);
    


    return 0;
}
