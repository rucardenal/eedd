#ifndef PUNTO_LIBRARY_H
#define PUNTO_LIBRARY_H

struct punto {
    float x;
    float y;
} typedef tPunto;



void hello(void);

void fDefinirPunto(float &x, float &y);

float fCoordenadaX (float *px);

#endif //PUNTO_LIBRARY_H