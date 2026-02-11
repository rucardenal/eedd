#include <stdio.h>

int busquedaSecuencia (int * array, int tam, int elem);
int busquedaBinaria (int * array, int tam, int elem);


int main(void) {
    printf("Hello, World!\n");
    return 0;
}

int busquedaSecuencia (int * array, int tam, int elem) {
    int i = 0;
    while (array[i] != elem) {
        i++;
    }
    return i;
}