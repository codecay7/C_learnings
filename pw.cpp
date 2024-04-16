#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;

    Rectangle() //(1) default constructor-no arguments passed
    {
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) // parameterized constructor
    {
        l = x;
        b = y;
    }

    Rectangle(Rectangle&r) // copy constructor:- when initialize an OBJECT on existing object.
    {
        l=r.l;
        b=r.b;
    }

    ~Rectangle(){
        cout<<"destructor  called"<<endl;
    }
};

int main()
{
    // r1,r2,r3 are the objects created

    Rectangle r1;
    cout << r1.l << "  " << r1.b << endl;


    Rectangle r2(3, 5);
    cout << r2.l << "  " << r2.b << endl;

    Rectangle r3=r2;
    cout << r3.l << ", " <<r3.b << endl;

    return 0;
}
