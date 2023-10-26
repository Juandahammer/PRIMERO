#include <stdio.h>
#include <stdlib.h>

/*ERROR EN LA LINEA 35*/

int longitud(char cad);
void main(void)
{
    int i, n, l=-1, p, t;
    char cad[50], FRA[20][50];
    printf("\nOngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Ingrese el numero de filas del arreglo: ", i+1);
        fflush(stdin);
        gets(FRA[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        strcpy(cad, FRA[i]);
        t=longitud(cad);
        if(t>1)
        {
            l=t;
            p=i;
        }
    }
    printf("\nLa cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("\nLongitud: %d", l);
}

int longitud(char *cadena)
{
    int cue=0;
    while(!cadena[cue]== '\0')
        cue++;
    return(cue);
}
