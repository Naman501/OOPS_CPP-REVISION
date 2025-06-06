#include<iostream>
using namespace std;

class Scooty{
    public:
    int topSpeed;
    float mileage;
     virtual   void sound(){
            cout<<"vroom vroom"<<endl;
        }
    private:
    int bootSpace;
};

class Bike : public Scooty{
    public:
    int gears;
    void sound(){
            cout<<"dhroom dhroom"<<endl;
        }
};

int main(){

    Bike b;
    b.sound();
    Bike b2;
    b2.sound();
    Scooty s;
    s.sound();

    Bike* bn=new Bike(); // object pointer
    bn->sound();
    (*bn).gears=55;

    Scooty* bb= new Bike();
    bb->sound();

    return 0;
}