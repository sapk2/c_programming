#include <stdio.h>
int main() {
    float marks;
    // Ask the user to enter the marks
    printf("Enter the student's marks (0 - 100): ");
    scanf("%f", &marks);
    // Check if marks are valid and evaluate pass/fail status
    if (marks < 0 || marks > 100) {
        printf("Invalid input! Please enter marks between 0 and 100.\n");
    } else if (marks >= 40) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }
    return 0;
}
