#include <stdio.h>
#include <stdlib.h>

/*ERROR EN LA LINEA 12*/

char * inverso(char *);
void main(void)
{
    char fra[50], aux[50];
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    strcpy(aux, inverso(fra));
    printf("\nEscribe la linea de texto en forma inversa: ");
    puts(aux);
}

char * inversa(char *cadena)
{
    int i=0, j, lon;
    char cad;
    lon=strlen(cadena);
    j=lon -1;
    while(i<((lon-1) /2))
    {
        cad= cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=cad;
        i++;
        j--;
    }
    return(cadena);
}
