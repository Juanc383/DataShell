#include "dataShell.h"

//Funcion para leer los datos del archivo csv
int datosCsv(char *file){
  //variables
  FILE *fp;
  char *nums;
  char linea[SIZE];
  int i,j;
  //If para liberar si es que ya cuenta con algo
  if (datos != NULL)
      freeData();
  //Abrir el archivo
  fp=fopen(file,"rt");
  //Validacion para abrir el archivo
  if(fp == NULL){
      printf("Archivo no encontrado\n");
      exit(1);
  }
  else
  {
      //Determina el tamaño de la matriz
      filas = getFilas(fp);
      columnas = getColumnas(fp);
      array = filas*columnas;
      asignarEspacio(array);
      //Leer los datos
      for(i=0;i<filas;i++){
          j=0;
          if(fgets(linea,SIZE,fp))
          {
              nums=strtok(linea,",");//Para saber los números antes de la ,
              while(nums!=NULL){
                  datos[i*columnas+j]=atoi(nums);//Guarda los caracteres en la matriz
                  j++;
                  nums = strtok(NULL,",");//Lee matriz y caracteres
              }
          }
      }
      fclose(fp);//cierra el archivo
  }
  return 1;
}


void mostrarDatos() {//Muestra los datos en la terminal
  int i,j;
  for (i=0;i<filas;i++){
      for (j=0;j<columnas;j++)
      {
          printf("| %f |",datos[i*columnas+j]);  // Imprime los dtaos del csv
      }
      printf("\n");
  }
}
