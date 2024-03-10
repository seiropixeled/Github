#include <iostream>
#include <cstring>
using namespace std;

class sample {
public:
    char *name;

    // Parameterized constructor
    sample(const char *str) {
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }

    // Copy constructor
    sample(const sample &other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    // Destructor
    ~sample() {
        delete[] name;
    }
};

int main() {
    sample user1("chitkara");
    sample user2 = user1;
    strcpy(user2.name, "dummy");
    cout << user2.name << " " << user1.name << endl;
    return 0;
}

//the error was that both the pointers were pointing to same memory location.

 