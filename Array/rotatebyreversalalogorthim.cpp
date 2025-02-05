#include<iostream>
using namespace std;
void reverse(int *arr,int low,int high){
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}
void reversal(int *arr,int n,int d){
reverse(arr,0,d-1);
reverse(arr,d,n-1);
reverse(arr,0,n-1);
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
    reversal(arr,n,d);
return 0;
}