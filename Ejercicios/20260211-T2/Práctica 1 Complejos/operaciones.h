//
// Created by r.cardenal.2025 on 16/02/2026.
//



#ifndef OPERACIONES_H
#define OPERACIONES_H

typedef struct {
    float real;
    float complejo;
} tComplejo;

void fCrearComplejo(float real, float complejo, tComplejo *pComplejo);

void fParteReal(tComplejo complejo, float &real);

#endif //OPERACIONES_H
