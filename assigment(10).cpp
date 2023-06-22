#include <iostream>

class Matrix {
private:
    int size;
    int* data;

public:
    Matrix(int size) {
        this->size = size;
        data = new int[size];
    }

    ~Matrix() {
        delete[] data;
    }

    void readData() {
        std::cout << "Enter matrix elements: ";
        for (int i = 0; i < size; i++) {
            std::cin >> data[i];
        }
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void display() {
        std::cout << "Matrix elements: ";
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the matrices: ";
    std::cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    std::cout << "Enter elements for Matrix 1:" << std::endl;
    matrix1.readData();

    std::cout << "Enter elements for Matrix 2:" << std::endl;
    matrix2.readData();

    Matrix sum = matrix1 + matrix2;
    std::cout << "Sum of the two matrices:" << std::endl;
    sum.display();

    return 0;
}
