
#include<iostream>
#include<string>
using namespace std;

class Student
{
//Create 5 properties studentId, studentName,studentEmail, numCourses, cgpa - all private
private:
    int studentId;
    string studentName;
    string studentEmail;
    int numCourses;
    double cgpa;

public:
    //Constructor Overloading - Create at least 3  constructor
    Student()
    {
        cout<<"Parameterless Constructor called"<<endl;
        cout<<"Unknown student, Didn't fill up Id,Name and other credentials"<<endl;
    }

    //Create a parameterized constructor to initialize all properties at the time of object creation
    Student(int studentId, string studentName, string studentEmail, int numCourses, double cgpa)
    {
        cout<<"5 Parameterized Constructor called"<<endl;
        this->studentId = studentId;
        this->studentName = studentName;
        this->studentEmail = studentEmail;
        this->numCourses = numCourses;
        this->cgpa = cgpa;
    }

    Student(int studentId, string studentName)
    {
        cout<<"2 Parameterized Constructor called"<<endl;
        cout<<"Hello "<<studentName<<" Please Fill up Email, number of courses and your CGPA"<<endl;
    }

    //Our generated copy constructor
    Student(Student &obj)
    {
        this->studentId = obj.studentId;
        this->studentName = obj.studentName;
        this->studentEmail = obj.studentEmail;
        this->numCourses = obj.numCourses;
        this->cgpa = obj.cgpa;
        obj.studentName = "Copy Constructor changed student Name";
    }

    //Create a method showinfo() to show the properties of the specific object by which the method will be called.
    void showinfo()
    {
        cout<<"Id of the student:"<<this->studentId<<endl;
        cout<<"Name of the student:"<<this->studentName<<endl;
        cout<<"Email of the student:"<<this->studentEmail<<endl;
        cout<<"Number of courses taken by the student:"<<this->numCourses<<endl;
        cout<<"CGPA of the student:"<<this->cgpa<<endl;
    }
};

class Teacher
{
//Create 5 properties teacherId, teacherName, teacherEmail, numCoursesTaken, dept - all private
private:
    int teacherId;
    string teacherName;
    string teacherEmail;
    int numCoursesTaken;
    string dept;

public:
    //Create a parameterized constructor to initialize all properties at the time of object creation
    Teacher(int teacherId, string teacherName, string teacherEmail, int numCoursesTaken, string dept)
    {
        this->teacherId = teacherId;
        this->teacherName = teacherName;
        this->teacherEmail = teacherEmail;
        this->numCoursesTaken = numCoursesTaken;
        this->dept = dept;
    }

    //Constructor Overloading - Create at least 2 more constructor
    Teacher()
    {
        cout<<"Unknown Teacher, Didn't fill up Id,Name and other credentials"<<endl;
    }

    Teacher(int teacherId, string teacherName)
    {
        cout<<"Hello "<<teacherName<<" Please Fill up Email, number of courses and your Department"<<endl;
    }
};

//Function overloading
double calculate(int a,int b)
{
    double sum = a+b;
    cout<<"Sum:"<<sum<<endl;
    return sum;
}

double calculate(int a,int b, int c)
{
    double multiply = a*b*c;
    cout<<"Multiplication:"<<multiply<<endl;
    return multiply;
}

double calculate(int a,double b)
{
    double divide = a/b;
    cout<<"Division:"<<divide<<endl;
    return divide;
}

void calculate()
{
    cout<<"Multiple overloaded function called"<<endl;
}

int main()
{
    //Student Karim;
    Student Rahim(101, "Mr. Rahim Ahmed", "rahim@yahoo.com", 5, 3.89);
    // Rahim.showinfo();
    //Student Rahi(102, "Munzir Rahi");

    //Teacher t1;
    //Teacher t2(201, "Tahmid Hasan","t1@yahoo.mail",5,"CSE");
    //Teacher t3(202, "Tahmid Hasan");

    //Make a default copy constructor which is being called by compiler but invisible. We cannot see it

    Student newStudent(Rahim);
    newStudent.showinfo();
    Rahim.showinfo();
    //cout<<newStudent.studentId<<endl;
    //cout<<newStudent.studentName<<endl;
    //cout<<newStudent.studentEmail<<endl;
    //cout<<newStudent.numCourses<<endl;
    //cout<<newStudent.cgpa<<endl;


    /*
    //Calling Overloaded Function calculate()
    calculate(5,3); //Print out 8.0
    calculate(5,4,7); // Print out 140.0
    calculate(5,6.9); // 5/6.9
    calculate(); //
    */



    return 0;
}