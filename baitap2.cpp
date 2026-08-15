#include <iostream>
using namespace std ;
int main () {
    int N, dem = 0, tong = 0;
    cout << "Nhap N: ";
    cin >> N;
    for (int i = 1;i <= N; i++) {
        if (i % 3 != 0) {
            continue;
        }
        dem++;
        tong += i;
    }
    cout << "So luong cac so chia het cho 3 la: " << dem++ << endl;
    cout << "Tong cac so chia het cho 3 la: " << tong;
    return 0;
}