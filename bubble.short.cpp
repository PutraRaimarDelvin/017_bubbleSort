#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "Array maksimal 20 elemen.\n";
    }

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}

int main() {
    input();
    return 0;
}