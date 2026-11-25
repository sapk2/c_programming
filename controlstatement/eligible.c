#include <stdio.h>

int main() {
    int age;
    // Ask the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check voting eligibility
    if (age < 0) {
        printf("Invalid age entered.\n");
    } else if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}
