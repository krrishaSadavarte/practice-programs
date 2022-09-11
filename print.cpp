#include <iostream>
using namespace std;
class A

{

public:
    A(int a, int b, int c)
    {
        cout << "value of a:" << a << endl;
        cout << "value of b:" << b << endl;
        cout << "value of c:" << c << endl;
        cout << "--------------" << endl;
    }
    A(int a, char b, int c)
    {
        cout << "value of a:" << a << endl;
        cout << "value of b:" << b << endl;
        cout << "value of c:" << c << endl;
        cout << "--------------" << endl;
    }
    A(int a, int b, double c)
    {
        cout << "value of a:" << a << endl;
        cout << "value of b:" << b << endl;
        cout << "value of c:" << c << endl;
        cout << "--------------" << endl;
    }
    A(int a, char b, double c)
    {
        cout << "value of a:" << a << endl;
        cout << "value of b:" << b << endl;
        cout << "value of c:" << c << endl;
        cout << "--------------" << endl;
    }
};
int main (){
    A a(5,0,0);
    A b(0,'t',0);
    A c(0,0,3.14);
    A d(4,'y',3.45);
}
