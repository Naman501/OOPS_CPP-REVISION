#include<iostream>
using namespace std;

class Student{ // Student is a new data-type
public:
string name;
int rollNo;
float cgpa;
string gender;
// constructor

//Parameterized
Student(string s, int r , float c){
name=s;
rollNo=r;
cgpa=c;
}

//Default
Student(){

}
};



int main(){

Student s1 ("Naman",221030359,7.80);
s1.gender="male";
// s1.name ="Naman";
// s1.rollNo=221030359;
// s1.cgpa=7.80;

Student s2("Sanjeev",221030375,8.32);
// s2.name ="Sanjeev";
// s2.rollNo=221030375;
// s2.cgpa=8.32;
Student s3;
s3.name ="Animesh";
s3.rollNo=221030360;
s3.cgpa=9.14;

Student s5=s1;
s5.name="Khatri"; // Deep Copy
Student s6(s1);
s6.name="Samson";

cout<<s1.name<<" has Roll Number "<<s1.rollNo<<" ("<<s1.gender<<")"<<endl;
cout<<s2.name<<" has Roll Number "<<s2.rollNo<<endl;
cout<<s3.name<<" has Roll Number "<<s3.rollNo<<endl;
cout<<s5.name<<" has Roll Number "<<s5.rollNo<<" ("<<s5.gender<<")"<<endl;
cout<<s6.name<<" has Roll Number ";


}
