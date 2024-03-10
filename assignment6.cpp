#include <iostream>
using namespace std;

class sample {
public:
    // Method to compute a function pointer passed as argument with an integer argument
    int Compute(int (sample::*func)(int), int n) {
        // Call the member function pointed to by 'func' with argument 'n'
        return (this->*func)(n); 
    }

    // Method to compute factorial of a number recursively
    int findFactorial(int n) {
        // Base case: factorial of 0 or 1 is 1
        if (n <= 1) return 1;
        // Recursive case: multiply n with factorial of (n-1)
        return n * findFactorial(n - 1);
    }

    // Method to compute square of a number
    int findSquare(int n) {
        return n * n;
    }

    // Method to compute cube of a number
    int findCube(int n) {
        return n * n * n;
    }
};

int main() {
    sample obj;

    cout << "Factorial: " << obj.Compute(&sample::findFactorial, 5) << endl;
    cout << "Square: " << obj.Compute(&sample::findSquare, 4) << endl;
    cout << "Cube: " << obj.Compute(&sample::findCube, 3) << endl;

    return 0;
}
