#include <stdio.h>
#include <stdlib.h>

/*Me da error en la linea 35*/

const int TAM=50;
void Lectura(int *, int);
void Frecuencia (int, int, int, int);
void Impresion(int *, int);
void Mayor(int *, int);
void main (void)
{
    int CAL[TAM], FRE[6] = {0};
    Lectura(CAL, TAM);
    Frecuencia(CAL, TAM, FRE, 6);
    printf("\nFrecuencia de calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
}

void Lectura(int VEC[], int T)
{
    int I;
    for(I=0; I<T; I++)
    {
        printf("Ingrese la calificacion -0:5- del alumno %d: ", I+1);
    }
}

void Impresion(int VEC[], int T)
{
    int I;
    for(I=0; I<T; I++)
        printf("\nVEC[%d]: %d", I, VEC[I]);
}

void Frecuencia(int A[], int P, int B[], int T)
{
    int I;
    for(I=0; I<p; I++)
        if ((A[I] >= 0) && (A[I] < 6))
    B[A[I]]++;
}

void Mayor(int *X, int T)
{
    int I, MFRE=0, MVAL=X[0];
    for(I=1; I<T; I++)
        if(MVAL < X[I])
    {
        MFRE = I;
        MVAL = X[I];
    }
    printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL);
}
