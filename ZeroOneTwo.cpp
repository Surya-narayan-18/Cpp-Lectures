#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int l=0;
    int mid=0;
    int r=n-1;
    while(mid<=r){
        if(arr[mid]==0){
            swap(arr[l++],arr[mid++]);
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{//if mid == 2
            swap(arr[mid],arr[r--]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

