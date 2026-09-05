#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter the 1st & 2nd :";
    cin>>a>>b;
    int gcd =0;
    // int n = min(a,b);
    // if(n<0) n = -n;
    // for(int i=1;i<n;i++){
    //      if(a%i==0 && b%i==0){
    //         gcd=i;
    //      }
    // }
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) gcd =b;
    else gcd =a;
    if(gcd <0 ) gcd = -gcd;
    cout<<"GCD is : "<<gcd;
}