#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
// This code Time - O(N) Space - O(N) {O(N)+O(N)=O(N)}
int highest(vector<int> &arr){
    int value = INT_MIN;
    int most = 0;
    unordered_map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
         mpp[arr[i]]++;
    }
    for(auto x: mpp){
      int  maxi = x.first;
      int can = x.second;
      if(can>most){
        most=can;
        value = maxi;
      }else if(most==can){
        value = max(value,most);
      }
    }
    return value;
}

int main(){
    vector<int> arr = {2,6,2,8,9,5,6,8,9,12,42,3,2,21};
    cout<<"Highest occurense in array :" << highest(arr);
}