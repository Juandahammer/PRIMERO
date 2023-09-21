#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    float PAG, SPA = 0;
    printf("Ingrese el primer pago: ");
    scanf("%f", &PAG);
    do
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago -0 para terminar: ");
        scanf("%f", &PAG);
    }
    while (PAG);
    printf("El total del pago del mes es: %.2f", SPA);
}
