#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    int studentId;
    string studentName;
    string studentEmail;
    int numCourses;
    double cgpa;

public:

   
    Student(int studentId, string studentName, string studentEmail, int numCourses, double cgpa) {

        this->studentId = studentId;
        this->studentName = studentName;
        this->studentEmail = studentEmail;
        this->numCourses = numCourses;
        this->cgpa = cgpa;
    }

    // Copy Constructor
    Student(Student &obj) {

        this->studentId = obj.studentId;
        this->studentName = obj.studentName;
        this->studentEmail = obj.studentEmail;
        this->numCourses = obj.numCourses;
        this->cgpa = obj.cgpa;

        obj.studentName = "Name Changed";
    }

    void showinfo() {
        cout << "ID of the Student: " << studentId << endl;
        cout << "Name of the Student: " << studentName << endl;
        cout << "Email of the Student: " << studentEmail << endl;
        cout << "Number of Courses: " << numCourses << endl;
        cout << "CGPA of the Student: " << cgpa << endl;
    }
};

int main() {

    int id;
    string name;
    string email;
    int courses;
    double cgpa;

    // Taking input from user
    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore();  // leftover newline remove

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student Email: ";
    getline(cin, email);

    cout << "Enter Number of Courses: ";
    cin >> courses;

    cout << "Enter CGPA: ";
    cin >> cgpa;


    // Creating object using user input
    Student s1(id, name, email, courses, cgpa);

    cout << "\n--- Original Student ---\n";
    s1.showinfo();


    // Copy Constructor
    Student newStudent(s1);

    cout << "\n--- After Copy Constructor ---\n";
    cout << "S1 Information:\n";
    s1.showinfo();

    cout << "\nNew Student Information:\n";
    newStudent.showinfo();

    return 0;
}