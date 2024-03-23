#include <iostream>
using namespace std;
class Test2; // only declared 2nd class
class Test1
{
    int a;

public:
    void geta()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
    friend void operator>(Test1, Test2);
    // since > is binary operator, two arguments are used
};
class Test2
{
    int b;

public:
    void getb()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
    friend void operator>(Test1, Test2); // overloading greater than operator
};
void operator>(Test1 t1, Test2 t2)
{
    t1.a > t2.b ? cout << "A is bigger" : cout << "B is bigger";
}

int main()
{
    Test1 t1;
    Test2 t2;
    t1.geta();
    t2.getb();
    t1 > t2;
    return 0;
}