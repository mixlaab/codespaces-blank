#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
/* print Celsius-Fahrenheit table
for celsius = 0, 20, ..., 300 */
main()
{
    float celsius;
    printf("| %-10s | %-10s |\n", "Celsius", "Fahrenheit");
    printf("|------------|------------|\n");
    for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
    {
        printf("| %11.0f|\t%10.1f|\n", celsius, (9.0 / 5.0) * celsius + 32);
    }
    printf("|------------|------------|\n");
}