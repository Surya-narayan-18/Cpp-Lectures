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
    Student s1;
    s1.setname("Surya");
    s1.setage(20);
    s1.getname();
    s1.getage();
}

