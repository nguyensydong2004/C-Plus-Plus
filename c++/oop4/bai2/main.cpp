#include <iostream>
#include <string>
using namespace std;
class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        int getDay() {
            return day;
        }
        int getMonth() {
            return month;
        }
        int getYear() {
            return year;
        }
        
        void setMonth(int month) {
            this->month = month;
        }
        void setYear(int year) {
            this->year = year;
        }
        void setDate(int day, int month, int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        string toString() {
            return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
        }

};

int main() {
    Date a(1,1,2025);
    cout << a.toString();

}