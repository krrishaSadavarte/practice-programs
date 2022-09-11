#include<iostream>
using namespace std;
class Person
{
    protected:
    int age;
    string name;
    public:
    void mint(int a,string b){
        a=age;
        b=name;
    cout<<"enter the details-----"<<endl;
    cout<<"enter the name:"<<a<<endl;
    cout<<"enter the age :"<<b<<endl;

    }
};
class Student:public Person
{
    protected:
    double percentage;
    public:
    void sint(double c){
        c=percentage;
        cout<<"enter the percentage:"<<c<<endl;
    }

};
class Teacher:public Student
{
protected:
int salary;
public:
void kint(int d){
    d=salary;
    cout<<"enter the salary:"<<d<<endl;
}

};
int main (){
    Teacher dx;
    dx.mint(44,"tanvi");
    dx.sint(89.56);
    dx.kint(40000);
}
