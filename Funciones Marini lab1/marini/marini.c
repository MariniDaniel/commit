#include <stdio.h>
#include <stdlib.h>
#include <string.h>



float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

int getIntReintentos(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
    {
        int ret;
        int num;
        while(reintentos>0)
        {
            printf(mensaje);
            if(scanf("%d",&num)==1)
            {
                if(num<=maximo && num>=minimo)
                    break;
            }
            fflush(stdin); //EN LINUX UTILIZAR __fpurge(stdin)
            reintentos--;
            printf(mensajeError);
        }
        if(reintentos==0)
        {
            ret=-1;
        }
        else
        {
            ret=0;
            *pResultado = num;
        }
        return ret;
    }
}



