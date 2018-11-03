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
} Athleta;

// main :: IO ()
int main(void) {
    
    
    return 0;
}

// GENERIC ----------------------------------------------------------------
