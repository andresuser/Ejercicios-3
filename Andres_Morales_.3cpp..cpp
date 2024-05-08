#include <stdio.h>

int main() {
    int opcion;
    float lado, base, altura, radio, area;

    printf("Seleccione la figura para calcular el área:\n");
    printf("1. Cuadrado\n");
    printf("2. Triángulo\n");
    printf("3. Círculo\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la longitud del lado del cuadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("El área del cuadrado es: %.2f\n", area);
            break;
        case 2:
            printf("Ingrese la base del triángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triángulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El área del triángulo es: %.2f\n", area);
            break;
        case 3:
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            area = 3.14159 * radio * radio;
            printf("El área del círculo es: %.2f\n", area);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
