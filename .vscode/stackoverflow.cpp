#include<iostream>
using namespace std;

int count =0;
int f(){
    if(count == 6){
        return ;
    }
    cout<<count<<endl;
    count++;
    f();
}

int main(){

    f();

}