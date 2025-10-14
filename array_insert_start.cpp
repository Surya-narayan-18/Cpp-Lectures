#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=4;i>0;i--){
        arr[i]=arr[i-1];
    }
    cout<<"Enter Element : ";
    cin>>arr[0];
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}