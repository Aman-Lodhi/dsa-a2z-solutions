#include<iostream>
using namespace std;

int sum(int n){
    if(n<1) return 0;
    n = n + sum(n-1);
    return n;
}

int main(){
    int n ;
    cout<<"Enter the number to sum :";
    cin>>n;
    int num = sum( n);
    cout<<num;
}