#include <iostream>
using namespace std;
int main () {
    int secretnumber = 23;
    int count = 0;
    int guess;
    do {
        cout << "Nhap so ban doan: ";
        cin >> guess;
        count++;
        if (guess == secretnumber) {
            cout << "Chuc mung ban da doan dung!";
        } else if (guess < secretnumber) {
            cout << "Lon hon\n";
        } else if (guess > secretnumber) {
            cout << "Nho hon\n";
        }
} while (guess != secretnumber && count < 7);
if (guess != secretnumber) {
    cout << "Ban da het luot doan";
}
    
return 0;
}