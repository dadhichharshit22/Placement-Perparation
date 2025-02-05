#include<iostream>
using namespace std;

bool twoSum(int arr[],int number,int k){

  for(int i=0;i<number;i++){
    for(int j=0;j<number;j++){
        if(arr[i]+arr[j]==k){
             return true;
        }
    }
  }
  return false;

}

int main(){
    int number ;
    cout<<"Enter the size of the array";
    cin>>number;
     int arr[number];
    for(int i=0;i<number;i++){
        cout<<"Enter the"<<i<<"th element of the array";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the equal to value";
    cin>>k;
    cout<<twoSum(arr,number,k);

    return 0;
}