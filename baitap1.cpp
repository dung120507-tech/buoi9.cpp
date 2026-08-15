#include <iostream>
using namespace std;
int main () {
    int N; 
    long N_giai_thua = 1;
    cout << "Nhap so nguyen N: ";
    cin >> N;
    if (N < 0 || N > 12) {
        cout << "N khong hop le";
    }
    else {
        for (int i = 1; i <= N; i++ ) {
        N_giai_thua = N_giai_thua * i;
        }
        cout << N << "! = " << N_giai_thua;
    }
    return 0;

}