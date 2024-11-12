#include <iostream>
using namespace std;

class Student {
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number();  // Removed int parameter
};

void Student::set_roll_number(int r) {
    roll_number = r;
}

void Student::get_roll_number() {
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public Student {  // Corrected typo: "student" to "Student"
protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m1, float m2) {
    maths = m1;
    physics = m2;
}

void Exam::get_marks() {
    cout << "Maths: " << maths << endl;  // Fixed variable names
    cout << "Physics: " << physics << endl;  // Fixed variable names
}

class Result : public Exam {
    float percentage;
public:
    void display() {
        get_roll_number();
        get_marks();
        percentage = (maths + physics) / 2;  // Use maths and physics variables correctly
        cout << "Your percentage is: " << percentage << "%" << endl;
    }
};

int main() {
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94, 90);
    harry.display();  // Corrected function call
    return 0;
}
