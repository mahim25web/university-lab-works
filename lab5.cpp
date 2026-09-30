#include<bits/stdc++.h>
using namespace std;

class Student {
private:
int studentId;
string studentName;
string studentEmail;
int numCourse;
double cgpa;

public:

 Student(int studentId, string studentName,string studentEmail,int numCourse,double cgpa){

  this->studentId=studentId;
  this->studentName=studentName;
  this->studentEmail=studentEmail;
  this->numCourse=numCourse;
  this->cgpa=cgpa;
 }
  
 Student(){

  cout<<"Unknown student . Didn't fillup id, name and other info"<<endl;
 }

 Student(int studentId,string studentName){

  cout<<"Hello "<<studentName<<" PLease fill up other informations"<<endl;
 }

 Student(Student &obj){

  this->studentId=obj.studentId;
  this->studentName=obj.studentName;
  this->studentEmail=obj.studentEmail;
  this->numCourse=obj.numCourse;
  this->cgpa=obj.cgpa;
 

  obj.studentName="Name changed";
 }

void showInfo(){
  cout<<"Id id the student: "<<this->studentId<<endl;
  cout<<"Name of the student: "<<this->studentName<<endl;
  cout<<"Email id the student: "<<this->studentEmail<<endl;
  cout<<"Number of course student: "<<this->numCourse<<endl;
  cout<<"student cgpa: "<<this->cgpa<<endl;
}

};




class Teacher{
private:
int teacherId;
string teacherName;
string teacherEmail;
int numCourseTaken;
string dept;

public:

 Teacher(int teacherId, string teacherName,string teacherEmail,int numCourseTaken,string dept){

  this->teacherId=teacherId;
  this->teacherName=teacherName;
  this->teacherEmail=teacherEmail;
  this->numCourseTaken=numCourseTaken;
  this->dept=dept;

 }
Teacher(){

  cout<<"Unknown teacher . Didn't fillup id, name and other info"<<endl;
 }

Teacher(int teacherId,string teacherName){

  cout<<"Hello"<<teacherName<<"PLease fill up other informations"<<endl;
 }
 void showInfo(){
  cout<<"Id id the teacher"<<this->teacherId<<endl;
  cout<<"Name of the teacher"<<this->teacherName<<endl;
  cout<<"Email of the Teacher"<<this->teacherEmail<<endl;
  cout<<"Number of course Teacher"<<this->numCourseTaken<<endl;
  cout<<"student dept"<<this->dept<<endl;
}

};




double calculate(int a,int b)
{

  double sum=a+b;
  cout<<"Sum: "<<sum<<endl;
  return sum;

}

double calculate(int a,int b,int c)
{

  double multiply=a*b*c;
   cout<<"Multiply: "<<multiply<<endl;
  return multiply;

}

double calculate(int a,double b)
{

  double divide=a/b;
   cout<<"Divide: "<<divide<<endl;
  return divide;

}

void calculate(){

    cout<<"Multiple overloaded functions called"<<endl;
};

int main(){

Student Rahim(101,"Mr.Rahim Ahmed","rahim@yahoo.com",5,3.89);
Rahim.showInfo();
// Student Karim;
// Student Rahi(102,"Munzir Rahi");

// Teacher t1;
// Teacher t2(201,"Tahmid Hasan","th@yahoo.com",5,"cse");
// Teacher t3(202,"Tahmid hasan");

Student newStudent(Rahim);
newStudent.showInfo();
Rahim.showInfo();

    return 0;
}