#include<iostream>
using namespace std;

class Vehicle{
    public:
    int topSpeed;
    float mileage;
    string fuel;
};
class TwoWheeler : public Vehicle{
    public:
    
};
class Car : public Vehicle{
    public:
        bool sunRoof;
};

class Bike : public TwoWheeler{
    public:
    
};
class Truck  : public Vehicle{
    public:
    
};
int main(){

    


    return 0;
}