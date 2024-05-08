#include <stdio.h>

int main() {
    int opcion;
    float lado, base, altura, radio, area;

    printf("Seleccione la figura para calcular el �rea:\n");
    printf("1. Cuadrado\n");
    printf("2. Tri�ngulo\n");
    printf("3. C�rculo\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la longitud del lado del cuadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("El �rea del cuadrado es: %.2f\n", area);
            break;
        case 2:
            printf("Ingrese la base del tri�ngulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del tri�ngulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El �rea del tri�ngulo es: %.2f\n", area);
            break;
        case 3:
            printf("Ingrese el radio del c�rculo: ");
            scanf("%f", &radio);
            area = 3.14159 * radio * radio;
            printf("El �rea del c�rculo es: %.2f\n", area);
            break;
        default:
            printf("Opci�n no v�lida.\n");
    }

    return 0;
}
