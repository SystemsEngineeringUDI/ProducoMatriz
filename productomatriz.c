#include <stdio.h>
/*
@autor:
 * César Villalobos
 * Estudiante: Ing.Sistemas UDI
*/
/*
Leer las matrices A y B escribir un programa en C que calcule AxB
Dada una matriz de nxn, donde n se da, imprimirla en espiral hacia adentro
*/
int main(){
	int n,m,l,k,s,o,i,j,d;
	printf("Ingrese las filas de A: ");
	scanf("%d",&n);
	printf("Ingrese las columnas de A: ");
	scanf("%d",&m);
	printf("Ingrese las filas de B ");
	scanf("%d",&l);
	printf("Ingrese las columnas de B ");
	scanf("%d",&k);
	int A[n][m];
	int B[l][k];
	int C[n][k];
	if(m==l){ //Se comprueba que columnas de la primera sea igual a las filas de la segunda
		for(i=1;i<=n;i++){
			for (j=1;j<=m;j++){//Se llena la matriz
				printf("Ingrese la posición %d %d de A: ",i,j);
				scanf("%d",&A[i][j]);
				
			}
		}
		for(i=1;i<=l;i++){ //Se llena la matriz
			for (j=1;j<=k;j++){
				printf("Ingrese la posición %d %d de B: ",i,j);
				scanf("%d",&B[i][j]);
				
			}
		}
		for(i=1;i<=n;i++){//Recorre filas
      		for(j=1;j<=k;j++){//Recorre columnas
			  C[i][j]=0;//Se reinicia contador
          		for(d=1;d<=m;d++){//Recorre sumandos de cada coeficiente
              		C[i][j]=(C[i][j]+(A[i][d]*B[d][j]));
          }
      }
  }
  		for(i=1;i<=n;i++){//Imprime la matriz resultante
  			for(j=1;j<=k;j++){
  				printf("La componente %d %d es %d \n",i,j,C[i][j]);
			  }
		  }
	}
	else{
		printf("Dimensiones de las matrices invalidas");
	}
}
