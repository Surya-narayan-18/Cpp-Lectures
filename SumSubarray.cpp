#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,-3,-4,5};
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=i;j<5;j++){
            sum+=arr[j];
            if(sum>max)
            max=sum;
        }
    }
    cout<<max;
}
