#include <stdlib.h>
#include <stdio.h>

// Index Number = AS20250454

int main() {
    int math = 0;
    int science = 0;
    int english = 0;
    int total = 0;
    float average = 0.0;
    char grade;

    printf("----------------------------\n");
    printf(" - Student Grade Analyzer -\n");
    printf("----------------------------\n");

    // Input marks
    printf("----------------------------\n");
    printf("   Input Marks Out of 100\n");
    printf("----------------------------\n");

    printf("Enter Mathematics marks : ");
    scanf("%d", &math);

    printf("Enter Science marks     : ");
    scanf("%d", &science);

    printf("Enter English marks     : ");
    scanf("%d", &english);

    // Calculate total and average
    total = math + science + english;
    average = total / 3.0;

    // Determine grade
    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Output results
    printf("----------------------------\n");
    printf("     Final Result Sheet\n");
    printf("----------------------------");
    printf("\n  Total   : %d\n", total);
    printf("  Average : %.2f\n", average);
    printf("  Grade   : %c\n", grade);

    // Pass/Fail check
    if (math >= 40 && science >= 40 && english >= 40)
        printf("  Result  : PASS\n");
    else
        printf("  Result  : FAIL\n");
    printf("----------------------------\n");

    return 0;
}
