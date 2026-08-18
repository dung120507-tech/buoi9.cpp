#include <iostream>
using namespace std;
int main (){
    int n;
    int sobandau;
    int sodaonguoc = 0;
    cout << "Moi nhap n: ";
    cin >> n;
    sobandau = n;
    while (n > 0) {
        int chuso = n % 10;
        sodaonguoc = sodaonguoc * 10 + chuso;
        n = n / 10;
    }
    if (sobandau == sodaonguoc) {
        cout << "n la so doi xung";
    }
    else {
        cout << "n ko phai so doi xung";
    }
    return 0;
}