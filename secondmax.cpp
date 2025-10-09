#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int secmax = (a>b && a>c)?(b>c)?b:c:(b>c)?(a>c)?a:c:(a>b)?a:b;
    cout<<secmax;
}