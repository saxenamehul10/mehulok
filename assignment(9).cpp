#include <iostream>

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int product = multiply(num1, num2);
    std::cout << "Multiplication: " << product << std::endl;

    int cubicNum1 = cube(num1);
    int cubicNum2 = cube(num2);
    std::cout << "Cubic value of num1: " << cubicNum1 << std::endl;
    std::cout << "Cubic value of num2: " << cubicNum2 << std::endl;

    return 0;
}
