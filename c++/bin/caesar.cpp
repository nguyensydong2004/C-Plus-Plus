
/*
./caesar encoding 3 "Nguyen Viet Anh"     mã hóa
./caesar decoding 3 "Qjxbhq Ylhw Dqk"     giải mã
*/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void caesarCipher(string &str, int k, bool encode) {
    for (char &ch : str) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            if (encode)
                ch = (ch - base + k) % 26 + base;
            else
                ch = (ch - base - k + 26) % 26 + base;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        cout << "Usage: caesar <encoding|decoding> <k> <s>\n";
        return 1;
    }

    string mode = argv[1];
    int k = stoi(argv[2]);
    string str = argv[3];

    bool encode = (mode == "encoding");
    caesarCipher(str, k, encode);

    cout << str << endl;
    return 0;
}
