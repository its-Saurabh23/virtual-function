#include <iostream>
#include <conio.h>
using namespace std;
// class Name
class Base
{
public:
    virtual void disk()
    {
        cout << "\n I am from base class disk function";
    }
    void get()
    {
        cout << "\n I am from base class get function";
    }
};

// Drived Class Name.
class drived : virtual public Base
{
public:
    void disk()
    {
        cout << "\n I am from drived class disk function ";
    }
    void get()
    {
        cout << "\n I am  from drived class get function";
    }
};
int main()
{
    Base *p;
    drived objD;
    p = &objD;
    p->disk();
    p->get();
    objD.get();
}
