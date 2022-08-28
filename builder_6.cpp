#include <iostream>
using namespace std;
class A {
public:
    int sum = 0;
    A(); 
    A(int a, int x = 0) 
    {
        sum = a + x;
    }
    void print() { cout << "Sum =" << sum << endl; }
};
int main()
{

    A obj1(10, 20);
    A obj2(5);
    obj1.print();
    obj2.print();
}
