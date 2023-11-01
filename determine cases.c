#include <stdio.h>

int main()
{
    char ch;
    printf("Lower Case Alphabets:\n");
    for (ch = 'a'; ch <= 'z'; ch++)
        printf("%c ", ch);
{
    printf("Upper Case Alphabets:\n");
    for (ch = 'A'; ch <= 'Z'; ch++)
        printf("%c ", ch);
}
    return 0;
}