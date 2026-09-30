#include<iostream>
#include<string>
using namespace std;


class Student{
private:
 int studentId;
 string studentName;
 string studentEmail;
 int numCourses;
 double cgpa;

public:

Student(int studentId, string studentName, string studentEmail, int numCourses, double cgpa){
    this->studentId = studentId;
    this->studentName = studentName;
    this->studentEmail = studentEmail;
    this->numCourses= numCourses;
    this->cgpa=cgpa;
   

    
}

Student(Student &obj){
     this->studentId =obj.studentId;
    this->studentName =obj.studentName;
    this->studentEmail =obj.studentEmail;
    this->numCourses=obj.numCourses;
    this->cgpa=obj.cgpa;
    obj.studentName="Name Changed";
   
}



 void showinfo(){
    cout<<"ID of the Student: "<<studentId<<endl;
    cout<<"Name of the Student: "<<studentName<<endl;
    cout<<"Email of the student: "<<studentEmail<<endl;;
    cout<<"Number of Courses taken by the student: "<<numCourses<<endl;
    cout<<"CGPA of the Student: "<<cgpa<<endl;
    
}

};


int main(){
    Student s1(101,"rana","rana@yahoo.com",7,3.65);
    s1.showinfo();

    Student newStudent(s1);
    s1.showinfo();


   return 0;
}