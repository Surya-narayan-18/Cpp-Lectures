#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,1,1,1,1,0,0,0};
    int l=0;
    int r=7;
    while(l<r){
      if(arr[l]==0){
        l++;
      }
      if(arr[r]==1){
        r--;
      }
      if((arr[r]==0 && arr[l]==1) && l<r){
        swap(arr[r--],arr[l++]);
      }
    }
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
}

