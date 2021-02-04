
# include "BusquedaRuta.h"


 void Busqueda_por_fila_Columna(int grafo[][filas]){
	 int a=0;			/*!a  		Auxiliar para almaenar los datos ingresados por el usuario   */
	 int NInicio;		/*!NInicio  Nodo inicio   */
	 int NFinal;		/*!NFinal   Nodo destino   */
	 	printf("Nodo inicio: \t");
		scanf("%d", &a);	fflush(stdin);	
		NInicio=a-1;
		a=0;
		printf("Nodo destino: \t");
		scanf("%d", &a);	fflush(stdin);
		NFinal= a-1;
		if(grafo[NInicio][NFinal]==1){
			printf("Existe al menos un camino para legar del nodo %d al nodo %d\n", NInicio+1,NFinal+1);
			
		}else{
			printf("No existe un camino desde el nodo %d al nodo %d\n", NInicio+1,NFinal+1);}
 }

 void ciclo_Completar_Matriz(int grafo[][filas]){
	 for(int i=0; i<filas; i++){
		  llenar_matriz(grafo, i);
	 } 
 }
 

 void llenar_matriz(int grafo[][filas],int NodoBusq){
	int pI_a=0; 	/*!pI_a  Numero de nodo (correspondiente a columnas)que se esta evaluando   */
	int	pI_b=0;		/*!pI_b  Numero de nodo (correspondiente a filas)que se esta evaluando   */
	 int a;			/*!a 	 Valor que retorna la funcion Buscar_nodo_apuntado(grafo, pI_a, NodoBusq) */
	 int b;			/*!b 	 Valor que retorna la funcion Buscar_nodo_apuntador(grafo, pI_b, NodoBusq) */
	 for (int i=0; i<filas; i++){
		a= Buscar_nodo_apuntado(grafo, pI_a, NodoBusq);
		if(a== 222){continue;}
		for (int i=0; i<filas; i++){
			b= Buscar_nodo_apuntador(grafo, pI_b, NodoBusq);
			if(b== 222){break;}
			if( a!= 222 && b != 222){
				grafo[b][a]=1;
			}else{}
			pI_b= b+1;
		}
		pI_a= a+1;
		pI_b=0;
	}
 }

 

 int Buscar_nodo_apuntador(int grafo[][filas],int param_Inicio, int NodoBusq){
	 for(int i=param_Inicio; i<filas; i++){
		if(grafo[i][NodoBusq]== 1){	
			return i; //Devuelve el nodo que apunta a NodoBusq
			break;
		}
	}
	return 222;
 }
 
 
int Buscar_nodo_apuntado(int grafo[][filas],int param_Inicio, int NodoBusq){
	 for(int i=param_Inicio; i<filas; i++){
		if(grafo[NodoBusq][i]== 1){
			return i; 
			break;
		}
	}
	return 222;
 }

 
 void imprimirGrafo(int grafo[][filas]){
		for(int i=0; i<filas;i++){
			for(int j=0; j<filas;j++){
				printf("[%d][%d]=%d    ",i+1,j+1,grafo[i][j]);
		}
		printf("\n");
	}
}

 void matriz_Adyacencias(int grafo[][filas]){
	 int Ady=0;   /*! Ady  Numero de nodos adyacentes a un grafo   */
	 int NAdy=0;  /*! NAdy Grafos adyacentes al nodo (a los que se puede llegar).  */
	for(int i=0; i<filas;i++){
		for(int j=0; j<filas;j++){
			grafo[i][j]=0;
		}
	}
	
	for(int i=0; i<filas;i++){
		printf("Numero de nodos adyecentes al grafo %d:  ",i+1);
		scanf("%d", &Ady);	fflush(stdin);
	if(Ady==0){continue;}
		printf("Ingresa los nodos adyecentes\n");
		for(int j=0; j<Ady; j++){
			printf(">>>  ");
			scanf("%d", &NAdy);	fflush(stdin);
			grafo[i][NAdy-1]=1;
		}
	}
}
