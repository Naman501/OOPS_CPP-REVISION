#include<iostream>
using namespace std;

class Fractions{
    public:
            int num;
            int den;
            Fractions(int num , int den){
                        this->num=num;
                        this->den=den;
            }

            void display(){
                cout<<num<<"/"<<den<<endl;
            }

            Fractions operator +(Fractions f){
                    int newNum=this->num*f.den + f.num*this->den;
                    int newDen=this->den*f.den;
                    Fractions ans(newNum,newDen);
                    return ans;
            }
};

int main(){

    Fractions f1(1,2);
    Fractions f2(1,3);
    f1.display();
    f2.display();
    Fractions f3=f1+ f2;
    f3.display();
    return 0;
}