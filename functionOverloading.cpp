#include<iostream>
using namespace std;

class Loading{
    public:
            void sum(int a,int b){
                cout<<a+b<<endl;
            }
            void sum(int a,int b,int c){
                cout<<a+b+c<<endl;
            }
};

int main(){
 Loading a;
 a.sum(6,9);
 a.sum(5,6,9);


    return 0;
}