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

Student(int studentId, string  studentName, string studentEmail, int numCourses, double cgpa){
    this->studentId=studentId;
    this->studentName=studentName;
    this->studentEmail=studentEmail;
    this->numCourses=numCourses;
    this->cgpa=cgpa;

}

Student(Student &obj){
    this->studentId=obj.studentId;
    this->studentName=obj.studentName;
    this->studentEmail=obj.studentEmail;
    this->numCourses=obj.numCourses;
    this->cgpa=obj.cgpa;
    obj.studentName="Name Changed";
    

}
void showInfo(){
    cout<<"student id is: "<<studentId<<endl;
    cout<<"student name is: "<<studentName<<endl;
    cout<<"student email is: "<<studentEmail<<endl;
    cout<<"number of courses taken: "<<numCourses<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}



};

int main(){

int studentId;
string studentName;
string studentEmail;
int numCourses;
double cgpa;

cout<<"Enter your id: "<<endl;
cin>>studentId;
cin.ignore();
cout<<"Enter your name: "<<endl;
getline(cin, studentName);
cout<<"Enter your email: "<<endl;
getline(cin, studentEmail);
cout<<"Enter Number of courses: "<<endl;
cin>>numCourses;
cout<<"Enter your cgpa: "<<endl;
cin>>cgpa;

Student s1(studentId,studentName,studentEmail,numCourses,cgpa);
s1.showInfo();

Student s2(s1);
s1.showInfo();



}
