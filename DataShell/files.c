//  Created by Eder GarcÃ­a Lastiri.
//
/**
* Our sample program.
* @copyright 2021 by TDA
* @author Eder GarcÃ­a Lastiri
* @version 2021-10-7
*/

#include "dataShell.h"

//FunciÃ³n que obtiene las filas del archivo CSV
int getFilas(FILE *fp){
  int i=0;
  char linea[SIZE];
  fseek(fp,0,SEEK_SET);
  while (fgets(linea, SIZE, fp))  //Leer linea por linea
    i++; //Aumentar contador de columnas
  fseek(fp,0,SEEK_SET);
  return i; //Retornar numero de filas
}

//Funcion que obtiene las columnas del archivo CSV
int getColumnas(FILE *fp){
  int i=0;
  char linea[SIZE];
  fseek(fp,0,SEEK_SET);
  if (fgets(linea, SIZE, fp)){ //Leer linea por linea
      i=(strlen(linea)/2); //Dividir entre 2, ya que tambiÃ©n cuenta comas y salto de lÃ­nea
  }
  else{
      fseek(fp,0,SEEK_SET);
      exit(1);
  }
  fseek(fp,0,SEEK_SET);
  return i; //Retornar numero de columnas
}
