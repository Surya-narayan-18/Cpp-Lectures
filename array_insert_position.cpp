#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    cout<<"Enter Position : ";
    int position;
    cin>>position;
    for(int i=7;i>=position;i--){
        arr[i]=arr[i-1];
    }
    cout<<"Enter Element : ";
    cin>>arr[position-1];

    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
}