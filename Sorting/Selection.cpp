#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num={64,25,12,11,22};
    for(int i=0;i<num.size();i++ ){
        int mini =i;
        for(int j =i;j<num.size();j++){
            if(num[j]<num[mini]) mini =j;
        }
        swap(num[i],num[mini]);
    }
    for(int i:num){
        cout<<i<<" ";
    }
}