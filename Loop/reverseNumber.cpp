#include<iostream>
using namespace std;
// function of reverseNumber
int reverseNumber(int number){
  int ans = 0;
  while(number){
    ans = ans*10+(number%10);
   number = number/10;
  }
  return ans;
}


int main(){
    // Make a number variable
    int number;
   // now take input  from the user
    cin>>number;
  // function 
    cout<<reverseNumber(number);

    return 0;
}