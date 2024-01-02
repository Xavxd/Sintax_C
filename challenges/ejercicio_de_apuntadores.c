#include <stdio.h>

int main() {
    int num = 10;
    int *p; // Declaración de un apuntador

    p = &num; // Asignación del valor del apuntador

    printf("Valor de num: %d\n", num);
    printf("Dirección de num: %p\n", (void*)&num);
    printf("Valor de p: %p\n", (void*)p);
    printf("Contenido apuntado por p: %d\n", *p);

    return 0;
}
