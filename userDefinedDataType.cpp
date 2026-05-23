#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int ur;
    float gpa;
    int age;
};
int main(){
    Student s1;
    s1.name="Shivam";
    s1.ur=34;
    s1.gpa=9.1;
    cin>>s1.age;

    Student s2;
    s2.name="Shivam Mishra ";
    s2.ur=24;
    s2.gpa=7.1;
    s2.age=23;
    cout<<s1.name<<endl;
    cout<<s1.age;
}