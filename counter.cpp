#include<iostream>
using namespace std;
class counter
{
private:
    int numb=0;
public:
    counter(){
cout<<"before calling counter function,cout="<<numb<<endl;
    }
void mint(){
    numb++;
    cout<<"after calling counter function,cout="<<numb<<endl;
}
};
int main (){
counter dc;
dc.mint();

}
