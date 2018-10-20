#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargarEmpleados(eEmpleado* empleado);

typedef struct
{
    int fecha;
    int mes;
    int anio;
}eFecha;


typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    eFecha fecha;

}eEmpleado;

int main()
{
    eEmpleado empleado;





   /* int vec[5];


    for(int i=0;i<5  ;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", vec + i);

    }

    for(int i=0;i<5  ;i++)//esta es la forma que hace pro
    {
        printf("\nSu numero es %d", *(vec + i));


    }
        */

    return 0;
}



void cargarEmpleados(eEmpleado* pEmployeed)
{
    char auxNombre[20];

    printf("\nIngrese su legajo: ");
    scanf("%d",&pEmployeed->legajo);

    printf("\nIngrese su nombre: ")
    strcpy(pEmployeed->nombre);






}
