#include<iostream>
using namespace std;

int main(){

    string name, id,department;
    double cgpa;

    cout << "Enter your name: ";
    getline(cin, name);
    cout<<"Enter your id: ";
    getline(cin, id);
    cout<<"Enter your department: ";
    getline(cin, department);
    cout  << "Enter your cgpa: ";
    cin>> cgpa;

    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"CGPA: "<<cgpa<<endl;

    return 0;
}