#include<iostream>
using namespace std;

void leftrotate(int *arr,int n){
    int ans = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=ans;
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
    return 0;
    leftrotate(arr,n);
}