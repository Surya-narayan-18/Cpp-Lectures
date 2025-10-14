#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<7;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Enter Element : ";
    cin>>arr[7];
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
}