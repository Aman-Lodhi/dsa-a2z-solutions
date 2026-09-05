#include<iostream>
using namespace std;

int factorial(int n){
    if(n<1) return 1;
    n = n * factorial(n-1);
    return n;
}

int main(){
    int n ;
    cout<<"Enter the number to sum :";
    cin>>n;
    int num = factorial( n);
    cout<<num;
}