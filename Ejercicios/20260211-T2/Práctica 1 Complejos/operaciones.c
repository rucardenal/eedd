//
// Created by r.cardenal.2025 on 16/02/2026.
//

#include "operaciones.h"

#include <math.h>

void fCrearComplejo(float real, float complejo, tComplejo *pComplejo) {
    pComplejo->real = real;
    pComplejo->complejo = complejo;
}

void fParteReal(tComplejo complejo, float *pReal) {
    pReal = complejo->real;
}

void fParteComplejo(tComplejo complejo, float *pComplejo) {
    pComplejo = pComplejo->complejo;
}

void fModulo(tComplejo complejo, float *pModulo) {
    pModulo = sqrt( (pow(pComplejo->real, 2) + pow(pComplejo->complejo, 2) )
}

void fConjugado (tComplejo complejo, float *pConjugado) {
    pConjugado.real = pComplejo->real;
    pConjugado.complejo = pComplejo->complejo * (-1);
}

void fSumar (tComplejo complejo1, tComplejo complejo2, tComplejo *pSuma) {

}