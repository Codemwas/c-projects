#include <stdio.h>

int main(void)
 {
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
     switch (grade)
     {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'C':
            printf("Well done!\n");
            break;
        case 'D':
            printf("Pass.\n");
            break;
        case 'E':
            printf("Try again.\n");
            break;
        case 'F':
            printf("Come and see me.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }
    return 0;
}