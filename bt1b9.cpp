#include <iostream>
using namespace std;
int main () {
    int n;
    int dem = 0;
    int chusolonnhat = 0;
    cout << "Moi nhap n: ";
    cin >> n;
    while (n > 0) {
        int chuso = n % 10;
        if (chuso > chusolonnhat){
            chusolonnhat = chuso;
        }
        dem++;
        n = n / 10;
    }
    cout << "So chu so cua n la: " << dem << endl << "Chu so lon nhat la: " << chusolonnhat;
    return 0;

}