#include <iostream>
using namespace std;

class Student {

public:

    string name;
    int id;
    double cgpa;

    void showInfo() {

        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {

    Student s1;

    s1.name = "Mahim";
    s1.id = 101;
    s1.cgpa = 3.64;

    s1.showInfo();

    return 0;
}