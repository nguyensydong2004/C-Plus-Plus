#include <iostream>
#include <string>
using namespace std;
class Account {
    private:
        string id;
        string name;
        int balance = 0;
    public:
        Account(string id, string name) {
            this->id = id;
            this->name = name;
        }
        Account(string id, string name, int balance) {
            this->id = id;
            this->name = name;
            this->balance = balance;
        }
        string getId() {
            return id;
        }
        string getName() {
            return name;
        }
        int getBalance() {
            return balance;
        }
        int credit(int amount) {
            balance += amount;
            return balance;
        }
        int debit(int amount) {
            if (amount <= balance) {
                balance -= amount;
            }
            else {
                cout << "Amount exceeded balance" << endl;
            }
            return balance;
        }
        int transferTo(Account another, int amount) {
            if (amount <= balance) {
                another.credit(amount);
                balance -= amount;
            }
            else {
                cout << "Amount exceeded balance" << endl;
            }
            return balance;
        }
        string toString() {
            return "Account[id=" + id + ", name =" + name + ", balance =" +to_string(balance) + "]";
        }

};

int main() {
    Account a("1","mot", 4000);
    cout << a.toString() <<endl;
    a.credit(400);
    cout << a.toString() <<endl;
    Account b("2","hai", 4000);
    cout << b.toString() <<endl;
    cout << a.transferTo(b,3000) << endl;
    cout << a.toString() <<endl;
    cout << b.toString() <<endl;

}