#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LENGTH(array) (sizeof(array) / sizeof(array[0]))

typedef enum {false = 0, true = 1} bool;

// CUSTOM TYPES -----------------------------------------------------------

typedef struct {
    int ID;
    char *nombre;
    char *pais;
    char *deporte;
    int puntaje;
    struct {
        int oro;
        int plata;
        int bronce;
    } medallas;
    bool estado;
} Atleta;

// FUNCTIONS
// Fix Falta asignar de forma aleatoria
void cargarID(Atleta *a, int x) {
    a->ID = x;
}

void cargarNombre(Atleta *a, char *x) {
    a->nombre = x;
}

void cargarPais(Atleta *a, char *x) {
    a->pais = x;
}

void cargarDeporte(Atleta *a, char *x) {
    a->deporte = x;
}

void cargarPuntaje(Atleta *a, int x) {
    a->puntaje = x;
}

void modificarMedallaDeOro(Atleta *a, int x) {
    a->medallas.oro = x;
}

void modificarMedallaDePlata(Atleta *a, int x) {
    a->medallas.plata = x;
}

void modificarMedallaDeBronce(Atleta *a, int x) {
    a->medallas.bronce = x;
}

void modificarEstado(Atleta *a, bool x) {
    a->estado = x;
}


// main :: IO ()
int main(void) {
    
    return 0;
}
