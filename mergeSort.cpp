#include<iostream>
using namespace std;
#include<vector>

int merge(vector<int> &arr , int st , int mid ,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
    int invCount=0;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
    }
    else{
     temp.push_back(arr[j]);
     invCount += (mid - i + 1); 
        j++;
      }
}

while(i<=mid){
    temp.push_back(arr[i]);
    i++;
}

while(j <=end){
    temp.push_back(arr[j]);
    j++;
}

for(int index=0;index<temp.size();index++){
    arr[index+st]=temp[index];
}

return invCount;

}

int mergeSort(vector<int> &arr , int st , int end){
if(st<end){
    int mid=(st+end)/2;

   int leftInvCount= mergeSort(arr, st , mid);
   int rightInvCount = mergeSort(arr , mid+1 , end);
   int invCount= merge(arr,st,mid,end);

   return leftInvCount+rightInvCount+invCount;
}
return 0;
}

int main(){
vector<int> arr={6,3,5,2,7};


int ans =mergeSort(arr, 0, arr.size()-1);
cout<<ans;
    return 0;
}