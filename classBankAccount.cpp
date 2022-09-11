#include<iostream>
using namespace std;
class CA
{
private:
    int balance,number;
    string name,type;
public:
    CA(){
       cout<<"enter the name:"<<endl;
       cin>>name;
       cout<<"enter the type of account:"<<endl;
       cin>>type;
       cout<<"enter the balance:"<<endl;
       cin>>balance;
       cout<<"enter the account number:"<<endl;
       cin>>number;
        

    }
    void sum (){
           cout << "-----details of customer-----" << endl;
           cout << "Name of the customer:" << name << endl;
           cout << "Accout type :" << type << endl;
           cout << "your balance:" << balance << endl;
           cout << "AccountNumber:" << number << endl;
       }
    
};
int main(){
    CA dc;
    dc.sum();
}




