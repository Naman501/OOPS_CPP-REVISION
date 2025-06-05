#include<iostream>
using namespace std;

class Cricketer{
    public:
    int reuns;
    int wickets;
    int avg;
};
class Engineer{
    public:
    int experience;
    string domain;
    
};

class Phodu : public Engineer,Cricketer{
public:

};

int main(){


    return 0;
}