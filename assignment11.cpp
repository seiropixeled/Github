#include <iostream>
using namespace std;
const int MATRIX_SIZE = 3;
class Matrix {
private:
    int data[MATRIX_SIZE][MATRIX_SIZE];
public:
// Constructor to initialize matrix
    Matrix(const int (&matrixData)[MATRIX_SIZE][MATRIX_SIZE]) {
        for (int i = 0; i < MATRIX_SIZE; ++i)
            for (int j = 0; j < MATRIX_SIZE; ++j)
                data[i][j] = matrixData[i][j];
    }
// Overloaded operator+ for matrix addition
    Matrix operator+(const Matrix& other) const {
        Matrix result({{0, 0, 0}, {0, 0, 0}, {0, 0, 0}});
        for (int i = 0; i < MATRIX_SIZE; ++i)
            for (int j = 0; j < MATRIX_SIZE; ++j)
                result.data[i][j] = data[i][j] + other.data[i][j]; //adding matrices 
        return result;
    }

    void display() const {
        for (int i = 0; i < MATRIX_SIZE; ++i) {
            for (int j = 0; j < MATRIX_SIZE; ++j)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    int obj1Data[MATRIX_SIZE][MATRIX_SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int obj2Data[MATRIX_SIZE][MATRIX_SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    Matrix OBJ1(obj1Data);
    Matrix OBJ2(obj2Data);

    Matrix OBJ3 = OBJ1 + OBJ2;

    cout << "Matrix OBJ3 (sum of OBJ1 and OBJ2):" << endl;
    OBJ3.display();

    return 0;
}
