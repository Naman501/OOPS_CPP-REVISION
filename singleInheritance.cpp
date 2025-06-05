#include<iostream>
using namespace std;

class Scooty{
    public:
    int topSpeed;
    float mileage;
};
class Bike : public Scooty{
    public:
    int gears;
};

int main(){
Scooty s1;
s1.mileage=23.4;
    Bike b1;
    b1.topSpeed=120;
    cout<<b1.topSpeed<<endl;
    


    return 0;
}