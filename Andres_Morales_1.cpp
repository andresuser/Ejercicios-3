#include <stdio.h>
int main() {
    int num1, num2, num3, num4, mayor;

    
    printf("Ingrese el primer n�mero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo n�mero entero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer n�mero entero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto n�mero entero: ");
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

    printf("El mayor de los cuatro n�meros es: %d", mayor);

    return 0;
}
