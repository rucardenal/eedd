//Creado 02 FEB 2026 1:40 PM - Rubén Cardenal - EEDD
//Ultima modificacion 02 FEB 2026

/* ENUNCIADO (Repado mem dinamica ej2): •Ahora hagamos el del módulo del vector:
•Implementa un programa y una función. El programa llama
a la función. La función calcula el módulo de un vector. Se
pide una implementación válida para cualquier tamaño de
vector. Este dato se pedirá por teclado al usuario y se creará
con memoria dinámica. El módulo se devuelve al programa
principal. El programa principal lo imprimirá por pantalla.
•Por ejemplo, para un vector de tamaño 3, v = (v1, v2, v3), el
módulo se calcula como:
modulo=sqrt(pow(v1,2)+pow(v2,2)+pow(v3,2)); */

//ERRORES que he visto: el vector se pide en el main y luego se pasa a la funcion
//El modulo se imprime tambien en el main

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float fModuloVector (int tamanyo);

int main(void) {
    int tamanyo;
    int modulo;
    printf("Introduzca tamanyo vector: \n");
    scanf("%d", &tamanyo);
    modulo = fModuloVector(tamanyo);
    return 0;
}

float fModuloVector (int tamanyo) {
    float *pCoordenadas = (float *) malloc((tamanyo) * sizeof(float));
    float modulo;
    float suma = 0;
    if (pCoordenadas != NULL) { //Comprobacion funcionamiento correcto memoria dinamica
        for (int i = 0; i < tamanyo; i++) {
            printf("Introduzca coordenada Nº %d: \n", i+1); //Pido los valores de las coordenadas
            scanf("%f", &pCoordenadas[i]);
            suma += pow(pCoordenadas[i], 2); // Sumo los cuadrados
        }
        modulo = sqrt(suma); //Hago la raiz cuadrada y obtengo el modulo finalmente
        printf("Modulo = %.2f\n", modulo);
        free(pCoordenadas);
    }
    else {
        printf("Error en memoria dinamica [NULL].\n");
        modulo = -1000; //Valor basura?
    }
    return modulo; //Lo devuelvo
}