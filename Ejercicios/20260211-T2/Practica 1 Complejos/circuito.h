//
// Created by r.cardenal.2025 on 16/02/2026.
//

#ifndef CIRCUITO_H
#define CIRCUITO_H

#include "operaciones.h"

void fImpedanciaL (float r1, float r2, tComplejo *pResultado);

void fImpedanciaR (float r, tComplejo *pResultado);

void fImpedanciaC (float r1, float r2, tComplejo *pResultado);

void fImpedanciaTotal (tComplejo c1, tComplejo c2, tComplejo c3, tComplejo *pResultado);

void fFrecuenciaAngular (float r, float *pResultado);

void fIntensidad (tComplejo c1, tComplejo c2, tComplejo *pResultado);

void fCaidaPotencial (tComplejo c1, tComplejo c2, tComplejo *pResultado);

#endif //CIRCUITO_H
