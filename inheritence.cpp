#include<iostream>
using namespace std;

// Base class 
class Employee {
protected:
    int id;  // Changed to protected to allow access in derived classes

public:
    float salary;
    
    Employee(int intId) {
        id = intId;
        salary = 34;
    }
};

// Derived class
class Programmer : public Employee {  // Added public inheritance
public:
    int languageCode = 9;
    
    Programmer(int intId) : Employee(intId) {  // Call base class constructor
    }

    void getdata() {
        cout << id << endl;  // Now id is accessible as it's protected
    }
};

int main() {
    Employee harry(1), rohan(2);
    cout << "Harry's salary: " << harry.salary << endl;
    cout << "Rohan's salary: " << rohan.salary << endl;

    Programmer skillF(10);
    cout << "Programmer language code: " << skillF.languageCode << endl;
    skillF.getdata();  // Added parentheses to call the function
    return 0;
}
