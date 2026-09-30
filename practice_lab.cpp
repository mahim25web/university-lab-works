#include<iostream>
#include<string>

using namespace std;

class Student {
public:
    int age;
    string name;
    float cgpa;
    int attendance_check;

    void attendance() {
        if (attendance_check >= 80) {
            cout << "Can sit for exam" << endl;
        }
    }

    void study() {
        cout << name << " is studying" << endl;
        cgpa += 0.1;
    }

    void exam() {
        cout << name << " is taking exam" << endl;
    }

    void grade() {
        if (cgpa >= 2.5) {
            cout << "Passed" << endl;
        } else {
            cout << "cgpa is low" << endl;
        }
    }
}; 

int main() {
    Student mahim;
    mahim.age = 22;
    mahim.name = "Mahim Ahmmad";
    mahim.cgpa = 3.70;
    mahim.attendance_check = 80;

    mahim.exam();
    mahim.attendance();
    mahim.grade();
    mahim.study();

    return 0;
}