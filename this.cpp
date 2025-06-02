#include <iostream>

using namespace std;

class Cricketer{
    public:
    string name;
    int runs;

    Cricketer(string name, int runs){
       this-> name=name;
       this-> runs=runs;
    }
};

int main() {

    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);

    // c1.name="Rames Kohli";
    // c1.runs=2000;
    cout<<c1.name<<"     "<<c1.runs<<" runs"<<endl;
    cout<<c2.name<<"    "<<c2.runs<<" runs";

    return 0;

}