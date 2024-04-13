#include <iostream>
using namespace std;
class smallUnit {
public:
    smallUnit(int inches) : inches(inches) {}

    int getInches() const {
        return inches;
    }
    void display() {
        cout << inches << " inches" << endl;
    }

private:
    int inches;
};

class largerUnit {
public:
    largerUnit(int feet, int inches) : feet(feet), inches(inches) {}

    largerUnit(const smallUnit& smallUnitObj) {
        feet = smallUnitObj.getInches() / 12;
        inches = smallUnitObj.getInches() % 12;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

private:
    int feet;
    int inches;
};

int main() {
    smallUnit small_unit_obj(24);
    largerUnit large_unit_obj = small_unit_obj;

    cout << "Small Unit object:" << endl;
    small_unit_obj.display();  // Output: 24 inches

    cout << "Larger Unit object:" << endl;
    large_unit_obj.display();  // Output: 2 feet 0 inches

    return 0;
}