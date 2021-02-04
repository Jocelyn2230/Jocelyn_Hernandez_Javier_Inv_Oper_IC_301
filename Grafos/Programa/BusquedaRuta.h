

# ifndef _BusquedaRuta_
# define _BusquedaRuta_

# include <stdio.h>

int filas;		/*!<Dimension de la matriz bidimensional  */	
    /**
  * \fn 		void Busqueda_por_fila_Columna(int grafo[][filas])
  * \brief		Realiza la busqueda del valor 1 en la matriz 		
  * \param grafo[][filas]	matriz bidimensional de tipo entero	
  */
void Busqueda_por_fila_Columna(int grafo[][filas]);
  /**
  * \fn 		void llenar_matriz(int grafo[][filas],int NodoBusq)
  * \brief		Agrega en la matriz el valor 1 si existe un camino entre lo nodos		
  * \param grafo[][filas]	matriz bidimensional de tipo entero	
  * \param NodoBusq			Nodo de busqueda o nodo origen 
  */
void llenar_matriz(int grafo[][filas],int NodoBusq);
 /**
  * \file 		BusquedaRuta.c
  * \fn 		void matriz_Adyacencias(int grafo[][filas])
  * \brief		Guarda en la matriz \p grafo las adyacencias 
  *				que ingrese el usuario.
  * \param grafo[][filas] matriz bidimensional de tipo entero	
  * 
  */
void matriz_Adyacencias(int grafo[][filas]);
  /**
  * \fn 		int Buscar_nodo_apuntador(int grafo[][filas],int param_Inicio, int NodoBusq)
  * \brief		Busca en las filas de la matriz \p grafo. 
  *				
  * \param grafo[][filas]	Matriz bidimensional de tipo entero	
  * \param param_Inicio 	Variable de tipo entero. Almacena el numero a partir del cual se evaluaran los nodos
  * \param NodoBusq		Variable de tipo entero.Almacena el nodo de busqueda o nodo origen 
  * \return 			Numero de fila o 222 en caso de no encontrar un nodo
  */
 
int Buscar_nodo_apuntador(int grafo[][filas],int param_Inicio, int NodoBusq);
/**
  * \fn 		int Buscar_nodo_apuntado(int grafo[][filas],int param_Inicio, int NodoBusq)
  * \brief		Busca en las columnas del grafo aquel que contenga el valor 1
  *				
  * \param grafo[][filas]	matriz bidimensional de tipo entero	
  * \param param_Inicio 	Numero a partir del cual se evaluaran los nodos
  * \param NodoBusq		Nodo de busqueda o nodo origen 
  * \return			Numero de columna o 222 en caso de no encontrar un nodo 
  */
int Buscar_nodo_apuntado(int grafo[][filas],int param_Inicio, int NodoBusq);
 /**
  * \file 		BusquedaRuta.c
  * \fn 		void imprimirGrafo(int grafo[][filas])
  * \brief		Muestra en pantalla los valores guardados en la matriz grafo
  * \param grafo[][filas] matriz bidimensional de tipo entero	
  */
void imprimirGrafo(int grafo[][filas]);
     /**
  * \fn 		void ciclo_Completar_Matriz(int grafo[][filas])
  * \brief		Envia como parametro a la funcion  llenar_matriz() el nodo que se esta 
  *				evaluando para determinar a que nodos se puede llegar a partir de este.
  * \param grafo[][filas]	matriz bidimensional de tipo entero	
  */
void ciclo_Completar_Matriz(int grafo[][filas]);

# endif
 
