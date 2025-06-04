#include<iostream>
using namespace std;


class Vector{
    public:
            int size;
            int capacity;
            int* arr;

            Vector(){
                size=0;
                capacity=1;
                arr= new int[1];
            }

            void add(int x){
                if(size==capacity){
                    capacity*=2;
                    int* arr2=new int[capacity];
                    for(int i=0;i<size;i++){
                        arr2[i]=arr[i];
                    }
                    arr=arr2;
                }
                arr[size]=x;
                size++;
            }

            void print(){
                for(int i=0;i<size;i++){
                cout<<arr[i]<<" "<<endl;
                }
                cout<<endl;
            }

            int get(int index){
                if(index>size){
                    cout<<"Invalid Bitch!"<<endl;
                }
                return arr[index];
            }

            int remove(){
                size--;
            }
};

int main(){

    // int* arr =new int[5]; // Dynamic Array
    
    // arr[0]=5;
    // cout<<arr[0];

    Vector v1;
    v1.add(10);
    v1.print();
        cout<<v1.size<<endl;
       cout<<v1.capacity<<endl;

        v1.add(10);
    v1.print();
        cout<<v1.size<<endl;
       cout<<v1.capacity<<endl;
 v1.add(550);
    v1.print();
        cout<<v1.size<<endl;
       cout<<v1.capacity<<endl;
cout<<v1.get(1)<<endl;
// cout<<v1.get(100)<<endl;

    return 0;
}