//
// Created by r.cardenal.2025 on 16/02/2026.
//

#include "operaciones.h"

#include <math.h>

void fCrearComplejo(float real, float imaginario, tComplejo *pComplejo) {
    pComplejo->real = real;
    pComplejo->imaginario = complejo;
}

void fParteReal(tComplejo ncomplejo, float *pReal) {
    pReal = ncomplejo->real;
}

void fParteImaginaria(tComplejo ncomplejo, float *pImaginaria) {
    pImaginaria = ncomplejo->imaginario;
}

void fModulo(tComplejo ncomplejo, float *pModulo) {
    pModulo = sqrt( (pow(ncomplejo->real, 2) + pow(ncomplejo->imaginario, 2) )
}

void fConjugado (tComplejo ncomplejo, float *pConjugado) {
    pConjugado.real = nomplejo->real;
    pConjugado.imaginario = nomplejo->imaginario * (-1);
}

void fSumar (tComplejo ncomplejo1, tComplejo ncomplejo2, tComplejo *pSuma) {
    pSuma.real = ncomplejo1->real + ncomplejo2->real;
    pSuma.imaginario = ncomplejo1->imaginario + ncomplejo2->imaginario;
}

void fRestar (tComplejo complejo1, tComplejo complejo2, tComplejo *pResta) {
    pRestar.real = ncomplejo1->real - ncomplejo2->real;
    pRestar.imaginario = ncomplejo1->imaginario - ncomplejo2->imaginario;
}

void fMultiplicar (tComplejo complejo1, tComplejo complejo2, tComplejo *pProducto) {
    pProducto.real = complejo1->real * complejo2->real - complejo1->imaginario * complejo2->imaginario;
    pProducto.imaginario = complejo1->imaginario * complejo2->real + complejo1->real * complejo2->imaginario;
}

void fDividir (tComplejo complejo1, tComplejo complejo2, tComplejo *pCociente) {
    pCociente.real = (complejo1->real * complejo2->real + complejo1->imaginario * complejo2->imaginario)/(pow(complejo2->real,2) + pow(complejo2->imaginario,2));
    pCociente.imaginario = (complejo1->imaginario * complejo2->real - complejo1->real * complejo2->imaginario)/(pow(complejo2->real,2) + pow(complejo2->imaginario,2));
}