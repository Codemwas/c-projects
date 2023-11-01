#include <stdio.h>

int main(void)
 {
    char score;
    printf("Enter the score : ");
    scanf("%c",&score);
     switch (score/10)
     {
        case '>=90':
            printf("distinction 1\n");
            break;
        case '>=80':
            printf("distinction 2\n");
            break;
        case '>=70':
            printf("credit 3.\n");
            break;
        case '>=60':
            printf("credit 4.\n");
            break;
        case '>=50 ':
            printf("pass 5\n");
            break;
            case '>=40':
            printf("pass 6.\n");
            break;
        case '>=30':
            printf("refer 7.\n");
            break;
              case '>=20':
            printf("refer 8.\n");
            break;
    }
    default 
    }
    return 0;
}