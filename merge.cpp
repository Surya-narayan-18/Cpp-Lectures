#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size1+size2];
    for(int i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=size1;i<size1+size2;i++){
        arr3[i]=arr2[i-size1];
    }
    for(int i=0;i<size1+size2;i++){
        cout<<arr3[i]<<" ";
    }
}

