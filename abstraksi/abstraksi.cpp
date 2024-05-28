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
    //menampilkan nilai
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
