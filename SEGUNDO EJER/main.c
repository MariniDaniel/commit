#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20]="dAnIel Juli";
    char apellido[20]="luDeNa";
    char nombreCompleto[40];

    strcpy(nombreCompleto,nombre);
    strcat(nombreCompleto," ");
    strcat(nombreCompleto,apellido);
    strlwr(nombreCompleto);
    nombreCompleto[0]=toupper(nombreCompleto[0]);

    int cant =strlen(nombreCompleto);

    for(int i=0;i<cant;i++)
    {
        if(nombreCompleto[i]==' ')
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
        }
    }


    printf("%s",nombreCompleto);


    return 0;
}
