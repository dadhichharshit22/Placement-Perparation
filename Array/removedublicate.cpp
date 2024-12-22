#include<iostream>
using namespace std;
int dublicate(int *arr,int n){
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
         arr[res] = arr[i];
         res++;
        }
    }
    return res;
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
    int ans = dublicate(arr, n);
    for(int i=0;i<ans;i++){
        cout<<"The "<<i<<"Element of the array: "<<arr[i]<<endl;
    }
    return 0;
}