//
// Created by r.cardenal.2025 on 16/02/2026.
//



#ifndef OPERACIONES_H
#define OPERACIONES_H

typedef struct {
    float real;
    float imaginario;
} tComplejo;

void fCrearComplejo(float real, float complejo, tComplejo *pComplejo);

void fParteReal(tComplejo complejo, float *pReal);

void fParteImaginaria(tComplejo complejo, float *pImaginaria);

void fModulo(tComplejo complejo, float *pModulo);

void fConjugado (tComplejo complejo, tComplejo *pConjugado);

void fSumar (tComplejo complejo1, tComplejo complejo2, tComplejo *pSuma);

void fRestar (tComplejo complejo1, tComplejo complejo2, tComplejo *pResta);

void fMultiplicar (tComplejo complejo1, tComplejo complejo2, tComplejo *pProducto);

void fDividir (tComplejo complejo1, tComplejo complejo2, tComplejo *pCociente);

#endif //OPERACIONES_H
