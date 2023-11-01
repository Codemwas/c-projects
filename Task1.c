#include<stdio.h>

int main()
 {
int score;
    printf("Enter the score:\n ");
    scanf("%d",&score);
    switch(score/10)
    {
    case 9:
    printf("DISTINCTION 1");
    break;
    case 8:
    printf("distinction 2.\n");
    break;
        case 7:
            printf("credit 3.\n");
            break;
        case 6:
            printf("credit 4.\n");
            break;
        case 5:
            printf("pass 5\n");
            break;
        case 4:
            printf("pass 6.\n");
            break;
        case 3:
            printf("refer 7.\n");
            break;
        case 2:
            printf("refer 8.\n");
            break;
    default:
    printf("Invalid Grade");
   } 
    return 0;
}