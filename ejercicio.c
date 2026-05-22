#include <stdio.h>

float notas[] = {6.5, 7.1, 6, 5, 8.1};
float suma = 0;
float promedio;

int main() {

    int cantidad = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < cantidad; i++) {
        printf("%.1f\n", notas[i]);
        suma = suma + notas[i];
    }

    promedio = suma / cantidad;

    printf("Promedio: %.2f", promedio);

    return 0;
}