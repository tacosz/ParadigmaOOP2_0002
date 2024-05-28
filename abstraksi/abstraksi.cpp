#include <iostream>
using namespace std;

class AbstaksiKlas
{
private: string x, y;

public:
    // method unt mengisi nilai
    //private member
    void setXY(string a, string b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
