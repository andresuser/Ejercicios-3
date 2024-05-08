#include <stdio.h>
int main() {
    int num1, num2, num3, num4, mayor;

    
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número entero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto número entero: ");
    scanf("%d", &num4);

    mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }

    printf("El mayor de los cuatro números es: %d", mayor);

    return 0;
}
