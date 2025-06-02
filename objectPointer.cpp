#include<iostream>
using namespace std;

class Cricketer{
    public:
            string name;
            int runs;
            float avg;

            Cricketer(string name,int runs,float avg){
                this->name=name;
                this->runs=runs;
                this->avg=avg;
            }

           
};

 void change(Cricketer* c){
// (*c).avg=69.6;
c->avg=68.5; 
            }

int main(){


    // int x=5,y=5;

    // cout<<&x<<endl;
    // cout<<&y<<endl;

    // int* p=&x;
    // int* p2=&y;

    // cout<<p<<endl;
    // cout<<p2<<endl;
    // cout<<*p2<<endl;

    Cricketer c1("Virat",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,45.7);

    // Cricketer* p1=&c1;
    // cout<<(*p1).runs<<endl;
        cout<<c1.avg<<endl;
        change(&c1);
        cout<<c1.avg<<endl;

    return 0;
}