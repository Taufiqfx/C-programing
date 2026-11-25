/*
 * Experiment No. 3
 * Aim: WAP to develop a menu-driven Student Grade and Result Management System using switch and goto.
 * Name: Taufiq Shaikh
 * UIN: 261C044
 * Div: D
 */

#include <stdio.h>

int main() {
    int choice;
    float marks;

    // goto label to restart the menu loop
    menu:
    printf("\n--- STUDENT RESULT MANAGEMENT SYSTEM ---\n");
    printf("1. Check Grade\n");
    printf("2. Check Pass/Fail Status\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter total marks (out of 100): ");
            scanf("%f", &marks);

            if(marks >= 75 && marks <= 100)
                printf("Grade: A (Distinction)\n");
            else if(marks >= 60 && marks < 75)
                printf("Grade: B (First Class)\n");
            else if(marks >= 50 && marks < 60)
                printf("Grade: C (Second Class)\n");
            else if(marks >= 40 && marks < 50)
                printf("Grade: D (Pass)\n");
            else if(marks >= 0 && marks < 40)
                printf("Grade: F (Fail)\n");
            else
                printf("Invalid marks entered!\n");
            break;

        case 2:
            printf("Enter total marks (out of 100): ");
            scanf("%f", &marks);

            if(marks >= 40 && marks <= 100)
                printf("Status: PASS\n");
            else if(marks >= 0 && marks < 40)
                printf("Status: FAIL\n");
            else
                printf("Invalid marks entered!\n");
            break;

        case 3:
            printf("Exiting program. Thank you!\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
    }

    // Asking user if they want to go back to the menu using goto
    char ch;
    printf("\nDo you want to continue? (y/n): ");
    scanf(" %c", &ch);

    if(ch == 'y' || ch == 'Y') {
        goto menu; // Jumps back to the 'menu' label
    }

    printf("Program ended.\n");
    return 0;
}
