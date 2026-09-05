#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num ;
    cout<<"Enter the number :";
    cin>>num;
    // int count =0;
    // int n =num;
    // while(n){
    //     count++;
    //     n/=10;
    // }
    int count=int(log10(num)+1);
    cout<<"Total Digit in "<<num<<" : "<<count;
}
