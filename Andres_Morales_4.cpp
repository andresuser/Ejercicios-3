#include <stdio.h>

int main() {
    char nombreArticulo[50];
    int cantidad;
    float precioUnitario, subtotal, iva, total;

    printf("Ingrese el nombre del artículo: ");
    scanf("%s", nombreArticulo);
    printf("Ingrese la cantidad adquirida: ");
    scanf("%d", &cantidad);
    printf("Ingrese el precio unitario del artículo: ");
    scanf("%f", &precioUnitario);

    subtotal = cantidad * precioUnitario;
    iva = subtotal * 0.12;

    total = subtotal + iva;

    if (total > 50000) {
        total = total - (total * 0.05);
    }

    printf("\n********** Factura de Compra **********\n");
    printf("Artículo: %s\n", nombreArticulo);
    printf("Cantidad: %d\n", cantidad);
    printf("Precio Unitario: %.2f\n", precioUnitario);
    printf("Subtotal: %.2f\n", subtotal);
    printf("IVA (12%%): %.2f\n", iva);
    printf("Total a Pagar: %.2f\n", total);

    return 0;
}
