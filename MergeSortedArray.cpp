#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[7]={2,4,6,8,10,11,12};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size1+size2];
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<size1){
        arr3[k++]=arr1[i++];
    }
    while(j<size2){
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<size1+size2;i++)
    cout<<arr3[i]<<" ";
}

