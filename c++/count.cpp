#include <iostream>
#include <map>
#include <cctype>
using namespace std;

void countCharacters(const string &str) {
    map<char, int> freq;
    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            freq[ch]++;
        }
    }

    for (const auto &entry : freq) {
        cout << entry.first << ":" << entry.second << endl;
    }
}

int main() {
    string str;
    cout << "Moi ban nhap mot xau: ";
    getline(cin, str);

    cout << "Tan suat cua cac ky tu:\n";
    countCharacters(str);
    return 0;
}
