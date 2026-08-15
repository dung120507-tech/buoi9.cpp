#include <iostream>
using namespace std;
int main () {
    int n;
    int UNN = 0;
    cout << "Vui long nhap n: ";
    cin >> n;
    if (n < 2) {
        cout << "n khong hop le vui long nhap lai n!";
    }
    else {
        for (int i = 2; i < n; i++ ) {
            if (n % i == 0) {
                UNN = i;
                break;
            }

        }
        if (UNN == 0) {
            cout << "n la so nguyen to";
        }
        else {
            cout << "Uoc nho nhat cua n la: " << UNN;
        }
    }
    return 0;
}