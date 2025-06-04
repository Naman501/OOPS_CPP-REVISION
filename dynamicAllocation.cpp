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

    Cricketer c1("Sachin Tendulkar",28000,43.4);
    Cricketer* c2= new Cricketer("Ashish Nehra",4500,13.4);

    int x1=3; 
  int* x2=new int(4);


    cout<<*x2<<endl;
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<(*c2).name<<" "<<c2->runs<<endl;

    return 0;
}