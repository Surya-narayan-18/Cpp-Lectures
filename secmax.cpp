#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int max=INT_MIN,sec=INT_MIN,third=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            third=sec;
            sec=max;
            max=arr[i];
        }
        else if(arr[i]>sec){
            third=sec;
            sec=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }
    cout<<"Max = "<<max<<endl;
    cout<<"Second Max = "<<sec<<endl;
    cout<<"Third Max = "<<third<<endl;
}