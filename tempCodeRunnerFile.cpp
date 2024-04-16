// encapsulation:

#include <iostream>
using namespace std;

class ABC
{

    int x;

public:
    void set(int n=3)
    {
        x = n;
    }

    int get()
    {
        return x;
    }
};

int main()
{
    ABC obj1;
    
    cout << obj1.get() << endl;
    return 0;
}