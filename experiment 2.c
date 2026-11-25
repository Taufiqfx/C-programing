#include <stdio.h>

int main() {
    int choice;
    float m1, m2, m3, total, per;
    char ch;

    menu:
    printf("\n--- STUDENT RESULT SYSTEM ---\n");
    printf("1. Calculate Percentage and Grade\n");
    printf("2. Check Pass or Fail\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter marks of 3 subjects (out of 100): ");
            scanf("%f %f %f", &m1, &m2, &m3);
            total = m1 + m2 + m3;
            per = total / 3;
            printf("Total = %.2f / 300\n", total);
            printf("Percentage = %.2f%%\n", per);

            if(per >= 75)
                printf("Grade: A (Distinction)\n");
            else if(per >= 60)
                printf("Grade: B (First Class)\n");
            else if(per >= 40)
                printf("Grade: C (Pass)\n");
            else
                printf("Grade: F (Fail)\n");
            break;

        case 2:
            printf("Enter marks of 3 subjects (out of 100): ");
            scanf("%f %f %f", &m1, &m2, &m3);
            if(m1 >= 40 && m2 >= 40 && m3 >= 40)
                printf("Result: PASS in all subjects\n");
            else
                printf("Result: FAIL\n");
            break;

        case 3:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
    }

    printf("\nCheck another student? (y/n): ");
    scanf(" %c", &ch);

    if(ch == 'y' || ch == 'Y') {
        goto menu;
