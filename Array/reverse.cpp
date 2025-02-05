#include<iostream>
using namespace std;
void reverse(int *arr,int n){
    int low = 0;
    int high = n;
    while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high] = temp;
        low++;
        high--;
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
    reverse(arr,n);

    for(int i=0;i<n;i++){
        cout<<"The "<<i<<"Element of the array: "<<arr[i]<<endl;

    }
    return 0;
}