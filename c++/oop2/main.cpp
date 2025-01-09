#include <iostream>
#include "Employee.cpp"



using namespace std;


int main() {
    Employee a(1, "Xuan", "Son", 5000);
    cout << a.toString() << endl;
    a.raiseSalary(15);
    cout << a.toString() << endl;
    int id, salary;
    string fn, ln;
    cout << "Input ID: " ;
    cin >> id;
    cout << "Input First Name: ";
    cin >> fn;
    cout << "Input Last Name: ";
    cin >> ln;
    cout << "Input Salary: ";
    cin >> salary;
    Employee b(id, fn, ln, salary);
    cout << b.toString();
    return 0;
}

