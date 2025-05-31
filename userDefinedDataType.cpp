#include<iostream>
using namespace std;

class Student{ // Student is a new data-type
public:
string name;
int rollNo;
float cgpa;
};



int main(){

Student s1;
s1.name ="Naman";
s1.rollNo=221030359;
s1.cgpa=7.80;

Student s2;
s2.name ="Sanjeev";
s2.rollNo=221030375;
s2.cgpa=8.32;

cout<<s1.name<<" has Roll Number "<<s1.rollNo<<endl;
cout<<s2.name<<" has Roll Number "<<s2.rollNo<<endl;



}
