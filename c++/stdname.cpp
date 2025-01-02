#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void trim(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (isspace(str[start])) start++;
    while (isspace(str[end])) end--;
    for (int i = start; i <= end; i++) {
        str[i - start] = str[i];
    }
    str[end - start + 1] = '\0';
}

void removeExtraSpaces(char str[]) {
    char result[256] = "";
    int len = strlen(str), j = 0;
    bool spaceFlag = false;
    for (int i = 0; i < len; i++) {
        if (!isspace(str[i])) {
            result[j++] = str[i];
            spaceFlag = false;
        } else if (!spaceFlag) {
            result[j++] = ' ';
            spaceFlag = true;
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

void capitalizeWords(char str[]) {
    bool capitalize = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalize = true;
        } else if (capitalize) {
            str[i] = toupper(str[i]);
            capitalize = false;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[256];
    cout << "Nhap mot xau: ";
    cin.getline(str, 256);

    trim(str);
    cout << "Sau khi bo dau cach o hai dau:\n" << str << endl;

    removeExtraSpaces(str);
    cout << "Sau khi loai bo dau cach giua cac tu:\n" << str << endl;

    capitalizeWords(str);
    cout << "Sau khi viet hoa cac chu cai dau cac tu:\n" << str << endl;

    return 0;
}
