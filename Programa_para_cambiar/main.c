#include <stdio.h>
#include <stdlib.h>
/*PROGRAMA QUE TE INTERMCAMBIA LETRAS MAYUSCULAS POR MINUSCULAS
Y VICEVERSA*/


int main ()
{
    char str[60];
    int i;

    printf("\nIngresa una cadena de texto: ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '0'; i++)
    {
        if (str[i]>= 'A' && str[i]<= 'Z')
        {
            str[i] = str[i]+32;
        }
        else if (str[i]>='a' && str[i]<= 'z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("\nLa cadena con letras intercambiadas es: %s\n", str);

    return 0;
}
