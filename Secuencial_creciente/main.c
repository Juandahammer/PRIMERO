#include <stdio.h>
#include <stdlib.h>

/*me da error con la linea 27*/
const int MAX=100;
void Lectura(int, int);
int Busca(int *, int, int);
void main (void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama;o del arreglo ");
        scanf("%d", &TAM);
    }
    while(TAM > MAX || TAM < 1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar:");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);
    if (RES)
        printf("\nEl elemento de encuentra en la posicion: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T)
{
    int I;
    for(I=0;I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int E)
{
    int RES, I=0, BAN=0;
    while ((T < T) && (E >= A[I]) && !BAN)
        if (A[I] == E)
        BAN++;
    else I++;
    RES = BAN;
    return (RES);
}
