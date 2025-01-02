#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    int id;
    string fullname;
    Date birthday;
    string yclass;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Nhap ID: ";
    cin >> s.id;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, s.fullname);
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> s.birthday.day >> s.birthday.month >> s.birthday.year;
    cin.ignore();
    cout << "Nhap lop: ";
    getline(cin, s.yclass);
    students.push_back(s);
}

bool compareName(const Student &a, const Student &b) {
    stringstream sa(a.fullname), sb(b.fullname);
    vector<string> partsA, partsB;
    string temp;
    while (sa >> temp) partsA.push_back(temp);
    while (sb >> temp) partsB.push_back(temp);

    if (partsA.back() != partsB.back()) return partsA.back() < partsB.back();
    return a.fullname < b.fullname;
}

bool compareClass(const Student &a, const Student &b) {
    return a.yclass < b.yclass;
}

void printStudents() {
    for (const auto &s : students) {
        cout << "ID: " << s.id << ", Name: " << s.fullname 
             << ", DOB: " << s.birthday.day << "/" << s.birthday.month << "/" << s.birthday.year
             << ", Class: " << s.yclass << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Nhap sinh vien\n2. Sap xep theo ho ten\n3. Sap xep theo lop\n4. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: 
                sort(students.begin(), students.end(), compareName);
                printStudents();
                break;
            case 3:
                sort(students.begin(), students.end(), compareClass);
                printStudents();
                break;
        }
    } while (choice != 4);

    return 0;
}
