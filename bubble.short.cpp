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

void bubbleSortArray() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
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
    bubbleSortArray();
    display();
    return 0;
}