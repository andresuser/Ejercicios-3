#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número ingresado es par.\n");
    } else {
        printf("El número ingresado es impar.\n");
    }

    return 0;
}
