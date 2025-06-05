#include<iostream>
using namespace std;

class Student{
    public:                                        
        int rollNo;
        string name;


       void display();
       float getMarks();
        void setMarks(float x){
            marks=x;
        }
        Student(){

        }

        Student(int rollNo , string name , float marks){
            this->rollNo=rollNo;
            this->name=name;
            this->marks=marks;
        }

       private:
        float marks;


};

float Student::getMarks(){
    return marks;
}
void Student:: display(){
            cout<<name<<" "<<rollNo<<" "<<marks<<endl;
        }

int main(){

    Student s1(123,"Naman",21.1);
    Student s2;
    s2.name="Sanju";
    s2.rollNo=456;
    // s2.marks=38.4;
   cout<<s1.getMarks()<<endl;
    s1.setMarks(69.69);
    s1.display();

    return 0;
}