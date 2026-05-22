#include <stdio.h>

float notas[] = {6.5, 7.1, 6, 5, 8.1};

int main() {

    for (int i = 0; i < 5; i++) {
        printf("%.1f\n", notas[i]);
    }

    return 0;
}
