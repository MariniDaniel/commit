#include <stdio.h>
#include <stdlib.h>
#define TAM 8

void mostrarCharArray(char vec[] , int tam);
void ordenarCharArray(char array[], int tam,int criterio);



int main()
{
    char letras[]={'H','o','l','a','g','h','D','e'};

    mostrarCharArray(letras,TAM);

    ordenarCharArray(letras,TAM,0);

    mostrarCharArray(letras,TAM);


    return 0;
}

void mostrarCharArray(char vec[],int tam)
{
    int i;

    for( i=0 ;i<tam ;i++  )
    {
        printf("%c ",vec[i]);

    }

    printf("\n\n");
}

void ordenarCharArray(char vec[], int tam,int criterio)
{
    char aux;

    for(int i=0;i<tam-1;i++)
    {
        for(int j = i+1; j<tam ; j++)
        {
            if(vec[i]> vec[j]&&criterio==0)
            {
                aux=vec[i];

                vec[i]=vec[j];

                vec[j]=aux;
            }
            else if(vec[i]< vec[j]&& criterio==1)
            {
                aux=vec[i];

                vec[i]=vec[j];

                vec[j]=aux;
            }

        }
    }



}


