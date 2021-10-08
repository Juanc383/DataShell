#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 256


float* datos;
int array;
int filas;
int columnas;


int getFilas(FILE *fp);
int getColumnas(FILE *fp);
int asignarEspacio(int array);
void freeData();
int datosCsv(char *file);
void mostrarDatos();
