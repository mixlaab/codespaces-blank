#include <stdio.h>

int main()
{
    int c;

    printf("Ingresa un caracter: ");
    c = getchar(); // Lee un caracter de entrada

    printf("El caracter ingresado es: ");
    putchar(c); // Imprime el caracter leído
    putchar('\n');

    return 0;
}
