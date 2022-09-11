#include<iostream>
using namespace std;

class construct
{
private:
    string l,h,b;
    float t;
public:
    construct(){
cout<<"enter the name of the lecturer:"<<endl;
cin>>l;
cout<<"enter the number of the lecture:"<<endl;
cin>>t;
cout<<"enter the course name:"<<endl;
cin>>h;
cout<<"enter the subject name:"<<endl;
cin>>b;


cout<<"details of the lecture"<<endl;


    }
    void main (){
        cout<<"------details of the faculty------"<<endl;
        cout<<"name of the factulity:"<<l<<endl;
        cout<<"number of lecture:"<<t<<endl;
        cout<<"course name:"<<h<<endl;
        cout<<"name of subject:"<<b<<endl;

    }
};








int main(){
  construct obj;
  obj.main();  
}
