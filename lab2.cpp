#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

 class Student{
    public:
    string name;
    int age;
    float gpa;

    void study(){
        cout<< name<<" is studying hard"<<endl;
        gpa+=0.1;
    } 

   void takeExam(){
    cout<<name<<" is taking exam"<<endl;
   }
   void graduate(){
    if(gpa>=2.00){
        cout<<name<<" is graduate"<<endl;
    }
    else{
        cout<<"Gpa is low"<<endl;
    }
   }
   };


  int main(){

  Student std1;

  std1.name="Mahim";
  std1.age=44;
  std1.gpa=3.65;

  Student std;

  std.name="fahim";
  std.age=44;
  std.gpa=1.60;

  std1.study();
  std1.takeExam();
  std1.graduate();

   std.study();
  std.takeExam();
  std.graduate();
return 0;
  }


 