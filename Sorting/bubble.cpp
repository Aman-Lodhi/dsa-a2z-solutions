#include<iostream>
#include<vector>
using namespace std ;
void bubble(vector<int>& arr){
   for(int i =0 ;i<arr.size();i++){
    int maxi =i;
    for(int j=0;j<=arr.size()-1-i;j++){
        if(arr[maxi]<arr[j]){
            swap(arr[maxi],arr[j]);
            maxi =j;
        }
    }
   }
}

int main(){
    vector<int> arr = { 5,4,3,2,1};
    bubble(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }

}