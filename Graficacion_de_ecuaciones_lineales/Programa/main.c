
# include "Graficar.h"

int main() {
	int m=0,b=0,rango1=-5,rango2=5,continuar=1;
	double* Datax = (double*) malloc((30+1)*sizeof(double));
	double* Datay = (double*) malloc((30+1)*sizeof(double));
		
	while(continuar !=0){
		entrada_de_datos(&m, &b,&rango1, &rango2);
		int x=0;
		for (int i = rango1; i <= rango2; i++){
			Datax[x]=i;
			Datay[x]= (m*i)+b;
			x++;
		}
		Mostrar_Grafico(Datax,Datay,m,b,rango1,rango2,x);
		printf("Ingresa 1 para ingresar otra funcion o 0 para terminar"); 
		scanf("%d",&continuar); 
		fflush(stdin);
	}
	return 0;
}
