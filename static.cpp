#include<iostream>
using namespace std;


class ABC{
public:
ABC(){
    cout<<"constructor \n";
}
~ABC(){
    cout<<"destructor \n";
}
};

class A{
public:
int a;

void incrementX(){
 a=a+1;
}
};

void fun(){
static int x=0;
cout<<x<<endl;
x++;

}

int main(){
    fun();
    fun();
    fun();

    A obj;
    A obj2;
    obj2.a=100;

    cout<<obj.a<<endl;
    obj.incrementX();
    cout<<obj.a<<endl;


cout<<obj2.a<<endl;
    obj2.incrementX();
    cout<<obj2.a<<endl;

    if(true){
      static  ABC obj;
    }
cout<<"end of main function"<<endl;

    return 0;
}