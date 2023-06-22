#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);
    printf("Enter marks for Subject 5: ");
    scanf("%f", &subject5);

    float totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    float percentage = (totalMarks / 500) * 100;

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
