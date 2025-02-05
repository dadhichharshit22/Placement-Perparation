#include<iostream>
using namespace std;

void rotate(int *arr,int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
     arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+1] =temp[i];
    }
}

int main(){
    int n;
    cout<<"Enter the Size of the Array";
    cin>>n;
    // declaration of the array
    int arr[n];

    // Initialised the array 
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<< "element of the array";
        cin>>arr[i];
    }
    int d;
    cout<<"How much size to rotate the array";
    cin>>d;
    rotate(arr,n,d);
     for(int i=0;i<n;i++){
        cout<<"The "<<i<<"Element of the array: "<<arr[i]<<endl;

    }
    return 0;
}