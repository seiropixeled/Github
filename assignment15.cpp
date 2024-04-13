#include <iostream>
using namespace std;
class B;
class A {
private:
    int numA = 0;
    friend int sum(const A& objA, const B& objB);
public:
    void setNumA(int val) {
        numA = val;
    }
};

class B {
private:
    int numB = 0;
    friend int sum(const A& objA, const B& objB);
public:
    void setNumB(int val) {
        numB = val;
    }
};

int sum(const A& objA, const B& objB) {
    return objA.numA + objB.numB;
}

int main() {
    A objA;
    B objB;

    objA.setNumA(10);
    objB.setNumB(20);

    cout << "Sum: " << sum(objA, objB) << endl;

    return 0;
}
