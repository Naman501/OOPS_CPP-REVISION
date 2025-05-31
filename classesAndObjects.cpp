#include<iostream>
using namespace std;
class Car{

    public:
            string name;
            int price;
            string type;
}; 

void print(Car c){
     cout<< c.name << " is a " << c.type << " that costs around "<<c.price<<"."<<endl;
}

void change(int a){
     a=100;
}

void changeCar(Car& a){
a.name="Hyundai Verna";
}

int main(){

    int a=50;
    cout<<a<<endl;
    change(a);
    cout<<a<<endl;

    Car c1;
    c1.name="Honda City";
    c1.price=1000000;
    c1.type="Sedan";
    print(c1);
    changeCar(c1); // Pass By Value
    print(c1);

     Car c2;
    c2.name="Honda Amaze";
    c2.price=850000;
    c2.type="Sedan";
    print(c2);

}