#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
}

int main() {
    char str[256];
    char choice;
    do {
        cout << "Nhap xau: ";
        cin.ignore();
        cin.getline(str, 256);
        reverseString(str);
        cout << str << endl;
        cout << "Nhap tiep (c/k)? ";
        cin >> choice;
    } while (choice == 'c' || choice == 'C');
    return 0;
}
