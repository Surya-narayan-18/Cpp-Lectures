#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        void setname(string s){
            name = s;
        }
        void setage(int a){
            age = a;
        }
        void getage(){
            cout<<age<<endl;
        }
        void getname(){
            cout<<name<<endl;
        }
};
int main(){
    Student arr[2];
    arr[0].setname("Surya");
    arr[0].setage(20);
    arr[0].getname();
    arr[0].getage();
    arr[1].setname("Mayank");
    arr[1].setage(21);
    arr[1].getname();
    arr[1].getage();
}
