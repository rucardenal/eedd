//
// Created by r.cardenal.2025 on 16/02/2026.
//

#include "circuito.h"

#define PI 3.14159265

void fImpedanciaL (float r1, float r2, tComplejo *pResultado) {
    fCrearComplejo(0, 1*r1*r2, pResultado);
}

void fImpedanciaR (float r, tComplejo *pResultado) {
    fCrearComplejo(r, 0, pResultado);
}

void fImpedanciaC (float r1, float r2, tComplejo *pResultado) {
    fCrearComplejo(0, (1/1*r1*r2), pResultado);
}

void fImpedanciaTotal (tComplejo c1, tComplejo c2, tComplejo c3, tComplejo *pResultado) {

}

void fFrecuenciaAngular (float r, float *pResultado) {
    fCrearComplejo(2*PI*r, 0, pResultado);
}

void fIntensidad (tComplejo c1, tComplejo c2, tComplejo *pResultado) {

}

void fCaidaPotencial (tComplejo c1, tComplejo c2, tComplejo *pResultado) {
   
}
