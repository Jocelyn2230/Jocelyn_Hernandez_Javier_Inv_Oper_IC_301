
# include "Graficar.h"

void entrada_de_datos(int* m, int* b,int *rango1,int *rango2){
	int aux;  	/*variabl para almacenar    */
	printf("\n\t\t[Graficacion de una ecuacion lineal]\n");
	printf(" Ingresa los valores de:\n");
	printf("m: "); scanf("%d",&aux); fflush(stdin);
	*m= aux;
	aux=0;
	printf("m: "); scanf("%d",&aux); fflush(stdin);
	*b=aux;
	printf("Rango inicial: \n"); scanf("%d",&aux); fflush(stdin);
	*rango1= aux;
	aux=0;
	printf("Rango final: \n"); scanf("%d",&aux); fflush(stdin); 
	*rango2= aux;
	aux=0;
}
void Mostrar_Grafico(double* Datax, double* Datay,int m, int b,int r1,int r2,int cant) {

	FILE *gnuplotPipe;	/*gnuplotPipe Objeto para la apertura del programa gnuplot   */
	FILE *tempDataFile;  /* tempDataFile Ejeuta la funcion fopen() para escribir sobre el archivo tempData */
	char *tempDataFileName;  /*tempDataFileName Almacena el nombre del achivo tempData (En donde se encuetran almacenadas las coordenadas)  */
	double x; 
	double y;
	int i;

	tempDataFileName = "tempData";
	gnuplotPipe = popen("gnuplot.exe","w");
	if (gnuplotPipe) {
		fprintf(gnuplotPipe,"set xlabel 'y= %d x + %d'\n",m,b);
	
		fprintf(gnuplotPipe,"set mytics 3\n");
		fprintf(gnuplotPipe,"set mxtics 3\n");
		fprintf(gnuplotPipe,"set xrange [%d:%d]\n", r1,r2);
		fprintf(gnuplotPipe,"set grid xtics mxtics ytics mytics\n");
		fprintf(gnuplotPipe,"plot \"%s\" with lines\n",tempDataFileName);
		fflush(gnuplotPipe);
		tempDataFile = fopen(tempDataFileName,"w");
		for (i=0; i < cant; i++) {
			x = Datax[i];
			y = Datay[i];
			fprintf(tempDataFile,"%lf %lf\n",x,y);
		}
		fclose(tempDataFile);
		printf("Presiona cualquier tecla para cerrar");
		getchar();
		remove(tempDataFileName);
		fprintf(gnuplotPipe,"salir \n");
	} 
	else {
		printf("Programa no encontrado...");
	}
}
