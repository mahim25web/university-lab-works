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
        obj.studentName="New Name";

}

void showInfo(){
    cout<<"ID of the student: "<<studentId<<endl;
    cout<<"Name of the student: "<<studentName<<endl;
    cout<<"Email of the student: "<<studentEmail<<endl;
    cout<<"Course taken by student: "<<numCourses<<endl;
    cout<<"CGPA of the Student: "<<cgpa<<endl;
    cout<<"\n"<<endl;

}


};

int main(){
    Student s1(101,"Rahim", "rahim@yahoo.com",5,3.65);
    s1.showInfo();

    Student s2(s1);
    s1.showInfo();

    return 0;
}