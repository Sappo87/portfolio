/* VECTOR DE ESTRUCTURAS */ 
/* ORDENAMIENTO  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  TIPO GLOBAL  */
struct ALUMNO {
		int LEG ;
		char SEX ;
		float PROM ;
} ;

#define  NUM  10

void CARGAR ( struct ALUMNO [] , int );
void MIRAR ( struct ALUMNO [] , int );
void ORDENAR ( struct ALUMNO [] , int );


int main()
{
		struct ALUMNO VEC[NUM] ;
		
		CARGAR ( VEC , NUM ) ;
		MIRAR ( VEC , NUM ) ;
		
		ORDENAR ( VEC , NUM ) ;
		MIRAR ( VEC , NUM ) ;
												
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


void CARGAR ( struct ALUMNO V[] , int N )
{
		int I ;
					
		for ( I = 0 ; I < N ; I++ ) {
			V[I].LEG = 10000 + rand()%90000 ;
			V[I].SEX = rand()%2 ? 'M' : 'F' ;
			V[I].PROM = 2 + (rand()%801)/100.0  ;
		}		
}

void MIRAR ( struct ALUMNO V[] , int N )
{
		int I ;
		printf("\n\n\n    IMPRESION DE LOS DATOS \n\n");
		printf ("\n\n\t %10s %10s %12s\n\n" ,"LEGAJO","SEXO","PROMEDIO" ) ;
		for ( I = 0 ; I < N ; I++ ) 
			printf ("\n\n\t %10d %10c %12.2f" , 
			V[I].LEG  , V[I].SEX , V[I].PROM ) ;
		getchar();
}



void ORDENAR ( struct ALUMNO V[] , int N )
{
		int I , J ;		
		struct ALUMNO AUX ;
		
		for ( I = 0 ; I < N-1 ; I++ )
				for ( J = 0 ; J < N-I-1 ; J++ )
						if ( V[J].PROM < V[J+1].PROM ) {
								/*  SWAPPING  */
								AUX    = V[J];
								V[J]   = V[J+1];
								V[J+1] = AUX ;						
						}
}
		
