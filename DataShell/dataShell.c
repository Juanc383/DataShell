//  Created by Juan Carlos Rosales Alvarez.
//             Jazmin Villegas
//             Eder Garci­a Lastiri
//
/**
* Our sample program.
* @copyright 2021 by TDA
* @author Juan Carlos Rosales ALvarez
* @version 2021-10-7
*/
#include "dataShell.h"

int main(void) {
  char nombre[50];
  printf("Ingresa el nombre del archivo csv: \n");
  scanf("%s",nombre);

  datosCsv(nombre);// Leer datos csv
  mostrarDatos();// Muestra los datos csv leÃ­dos
  freeData(); //Libera el espacio de memoria
  return 1;
}
