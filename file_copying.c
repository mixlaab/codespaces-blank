#include <stdio.h>

int main()
{
    int c, isValidChar;
    int lastChar = EOF; // Initialize lastChar to EOF

    while ((c = getchar()) != EOF)
    {
        isValidChar = c != '\n' && c != '\r'; // Exclude newline and carriage return characters
        if (isValidChar)
        {
            putchar(c);
            printf("-> Char value: %d, %d\n", c, isValidChar);
        }
        else if (lastChar != EOF)
        {
            printf("\n");
        }
        lastChar = c;
    }
    printf("EOF -> Char value: %d, %d\n", c, isValidChar);

    return 0;
}