#include <stdio.h>
#include <math.h>

// Function prototypes
float calculateTriangleArea(float base, float height);
float calculateRectangleArea(float length, float width);
float calculateCircleArea(float radius);
void printFibonacciSeries(int n);
void printNumbersInReverseOrder(int n);
int calculateSummation(int n);
void printPyramidPatternA(int n);
void printPyramidPatternB(int n);
void printPyramidPatternC(int n);
int findMaxNumber(int arr[], int size);
void sortArray(int arr[], int size);
int findElementInArray(int arr[], int size, int position);
int findMaxNumberInMatrix(int matrix[][3], int rows, int columns);
void copyString(char source[], char destination[]);
int calculateFactorial(int n);
void printFibonacciSeriesUsingFunction(int n);

int main() {
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Calculate the area of a Triangle\n");
        printf("2. Calculate the area of a Rectangle\n");
        printf("3. Calculate the area of a Circle\n");
        printf("4. Print the Fibonacci series up to a given number\n");
        printf("5. Print numbers in reverse order\n");
        printf("6. Summation of a given number\n");
        printf("7. Print Pyramid Patterns\n");
        printf("8. Find the maximum number in an array\n");
        printf("9. Sort an array\n");
        printf("10. Find an element at a given position in an array\n");
        printf("11. Find the maximum number in a matrix\n");
        printf("12. Copy strings\n");
        printf("13. Find the factorial of a number\n");
        printf("14. Print the Fibonacci series using a function\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                float base, height;
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                float area = calculateTriangleArea(base, height);
                printf("Area of the triangle: %.2f\n", area);
                break;
            }
            case 2: {
                float length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                float area = calculateRectangleArea(length, width);
                printf("Area of the rectangle: %.2f\n", area);
                break;
            }
            case 3: {
                float radius;
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                float area = calculateCircleArea(radius);
                printf("Area of the circle: %.2f\n", area);
                break;
            }
            case 4: {
                int n;
                printf("Enter a number: ");
                scanf("%d", &n);
                printFibonacciSeries(n);
                break;
            }
            case 5
