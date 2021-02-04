
# ifndef _Graficar_H_
# define _Graficar_H_

#include <stdio.h>
#include <stdlib.h>

/**
  *\fn 		void entrada_de_datos(int *m, int *b,int *rango1,int *rango2);
  *\brief	Ingreso de datos por el usuario  
  *\details A partir de la cabecera stdio.h se obtienen las constantes para ejecutar el programa
  *\param m	Puntero de tipo entero. Referente a la constante m de la ecuacion
  *\param b Puntero de tipo entero.  Referente a la constante b de la ecuacion
  *\param rango1 Puntero de tipo entero. Referente al primer dijito del rango a gaficar
  *\param rango2 Puntero de tipo entero. Referente al segundo dijito del rango a graficar
  *\return void
  */
void entrada_de_datos(int *m, int *b,int *rango1,int *rango2);

/**
  *\fn 		void Mostrar_Grafico(double* xData, double* yData, int m, int b,int r1, int r2,int cant)
  *\brief	Grafica las coordenadas del archivo temData
  *\details Crea el archivo temData y abre el programa gnuplot.exe para despues pasarle los puntos a graficar
  *\param xData Puntero de tipo double Contiene los valores para el eje x
  *\param yData Puntero de tipo double. Contiene los valores para el eje y
  *\param m Variable tipo entero. Referente a la constante m de la ecuacion
  *\param b Variable de tipo entero.  Referente a la constante b de la ecuacion
  *\param r1 Variable de tipo entero. Referente al primer nuemro del rango
  *\param r2 Variable de tipo entero. Referente al segundo numero del rango
  *\param cant Variable de tipo entero referente a la cantidad de filas existentes en el archivo tempData
  *\return void
  */

void Mostrar_Grafico(double* xData, double* yData, int m, int b,int r1, int r2,int cant);

#endif





