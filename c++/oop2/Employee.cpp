#include "Employee.h"


Employee::Employee(int id, string firstName, string lastName, int salary) {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }

int Employee::getId() {
    return id;
}

string Employee::getFirstName() {  
    return firstName;
}

string Employee::getLastName() {
    return lastName;
}

string Employee::getName() {
    return firstName + " " + lastName;
}

int Employee::getSalary() {
    return salary;
}

void Employee::setSalary(int salary) {
    this->salary = salary;
}

int Employee::getAnnualSalary() {
    salary = 12*salary;
    return salary;
}

int Employee::raiseSalary(int percent) {
    salary = salary + (salary*percent)/100;
    return salary;
}

string Employee::toString() {
    return "Employee[id=" + to_string(id) + ", name=" + firstName + " " + lastName + ", salary=" + to_string(salary) + "]";
}
