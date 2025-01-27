#include <stdio.h>

int main() {
    int a, sum = 0;

    // Solicitar el tamaño del arreglo
    printf("Introduce el tamaño del arreglo: ");
    scanf("%d", &a);

    int b[a];

    // Solicitar los elementos del arreglo
    printf("Introduce los elementos del arreglo:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }

    // Calcular la suma de los elementos
    for (int i = 0; i < a; i++) {
        sum += b[i];
    }

    // Imprimir la suma
    printf("La suma de los elementos del arreglo es: %d\n", sum);

    return 0;
}