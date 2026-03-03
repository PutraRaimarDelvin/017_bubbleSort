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

void display() {
    cout << "\nElemen Array:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

int main() {
    input();
    display();
    return 0;
}