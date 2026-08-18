#include <iostream>
using namespace std;
int main () {
    unsigned int a, b;
    int sodu;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    while ( b != 0) {
        sodu = a % b;
        a = b;
        b = sodu;
    }
    cout << "Uoc chung lon nhat la: " << a;
    return 0;
}
