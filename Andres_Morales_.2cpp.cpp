#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un n�mero entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El n�mero ingresado es par.\n");
    } else {
        printf("El n�mero ingresado es impar.\n");
    }

    return 0;
}
