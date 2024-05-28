#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass
{
    void perkenalan()
    {
        cout << "Hallo saya Function dari derived Class";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
