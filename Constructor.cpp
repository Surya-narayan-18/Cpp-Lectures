#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        Student(string name , int age){
            this->name = name;
            this->age = age;
        }
        void getdetails(){
            cout<<name<<endl;
            cout<<age<<endl;
        }
};
int main(){
    Student s1("Surya",20);
    s1.getdetails();
}

