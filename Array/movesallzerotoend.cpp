#include<iostream>
using namespace std;
// Naive Solution
void moves(int *arr,int n){
for(int i=0;i<n;i++){
    if(arr[i]==0){
        for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
}


// Efficient Solution
void moves(int* arr,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
         int temp = arr[i];
         arr[i] = arr[count];
         arr[count] = temp;
         count++;
        }
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
    moves(arr,n);
    return 0;
}