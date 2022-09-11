#include<iostream>
using namespace std;
class SimpleIntrest
{
private:
    int t,p;
    float r;
public:
    SimpleIntrest(){
        cout<<"enter principle:"<<endl;
        cin>>p;
        cout<<"enter time:"<<endl;
        cin>>t;
        cout<<"enter rate:"<<endl;
        cin>>r;
        cout<<"simple intrest="<<p*r*t<<endl;
    }
    
};


int main (){
SimpleIntrest dc;
dc.~SimpleIntrest();

}