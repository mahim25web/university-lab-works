#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    double gpa;

    void display(){

        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"GPA: "<< gpa<< endl;
        cout<<"\n"<<endl;
    }
};


int main(){

    Student student1;

    student1.name="John";
    student1.age=20;
    student1.gpa=3.65;
    student1.display();

     Student student2;

    student2.name="Tommy";
    student2.age=22;
    student2.gpa=3.60;
    student2.display();

    return 0;
}