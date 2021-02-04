
# include "BusquedaRuta.h"

int main(){
	int NBusqueda=1;   /*! NBusqueda  Valor para realizar nueva busqueda de camino*/

		printf("\n\t\t[Ruta mas corta]\n");
	printf("¿Cuantos nodos tiene el grafo?\t");
	scanf("%d", &filas);		fflush(stdin);
	int grafo[filas][filas];
	
	matriz_Adyacencias(grafo);
	ciclo_Completar_Matriz(grafo);
	printf("Matriz de rutas \n");
	imprimirGrafo(grafo);
	printf("\n\n");
	while(NBusqueda!=0){
		Busqueda_por_fila_Columna(grafo);
		printf("Ingresa 1 para hacer una nueva busqueda, o 0 para terminar. \t");
		scanf("%d", &NBusqueda);	fflush(stdin);
	}
	return 0;
 }
