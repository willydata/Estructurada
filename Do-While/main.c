#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador Do-While\n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra: \n");
        scanf("%c", &value);
    } while (value != answer);

    printf("Coinciden los caracteres %c == %c", value, answer);

    return 0;
}
