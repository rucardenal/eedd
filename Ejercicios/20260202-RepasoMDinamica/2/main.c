//Rubén Cardenal Creado el 02 FEB 2026 2:02 PM, EEDD
//Ultima modificacion 02 FEB 2026

/*ENUNCIADOS: •EjercicioClase1 (T10EjC1). Implementa una
función que reciba un entero n y devuelva un
array con los n primeros enteros. El array debe
estar en memoria dinámica.
•EjercicioClase2 (T10EjC2). Implementa otra
función que reciba un array y su tamaño, y
devuelva la suma de todos los elementos del
array. El array debe estar en memoria dinámica. */

#include <stdio.h>
#include <stdlib.h>

void fArrayEnteros (int n, int *pArray);
int fSumaArray (int n, int *pArray);

int main(void) {
    int n;
    int suma;
    printf("Introduzca numero entero: \n");
    scanf("%d", &n);
    int *pArray = (int *) malloc (n * sizeof(int));
    fArrayEnteros(n, pArray);
    /*for (int i = 0; i < n; i++) {
        printf("[%d] = %d \n",i, pArray[i]);
    }*/
    suma = fSumaArray(n, pArray);
    printf("Suma %d primeros enteros = %d \n", n, suma);
    free(pArray);
    return 0;
}

void fArrayEnteros(int n, int *pArray) {
    for (int i = 0; i < n; i++) {
        pArray[i] = i;
    }
}

int fSumaArray(int n, int *pArray) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += pArray[i];
    }
    return suma;
}