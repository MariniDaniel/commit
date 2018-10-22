#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define TAM 1

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;


typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    eFecha fecha;

} eEmpleado;



void mostrarEmpleados(eEmpleado* pEmployeed);

void cargarEmpleados(eEmpleado* pEmployeed);

int main()
{


    eEmpleado empleados;

    cargarEmpleados(&empleados);

    mostrarEmpleados(&empleados);


    return 0;
}



void cargarEmpleados(eEmpleado* pEmployeed)
{
    char auxNombre[20];


    //for(int i=0; i<TAM ; i++ )
    //{


        printf("\nIngrese su legajo: ");
        scanf("%d",&pEmployeed->legajo);

        printf("\nIngrese su nombre: ");
        scanf("%s",auxNombre);
        strcpy(pEmployeed->nombre+1,auxNombre);

        printf("\nIngrese su sueldo: ");
        scanf("%f",&pEmployeed->sueldo);

        printf("\nIngrese el dia: ");
        scanf("%d",&pEmployeed->fecha.dia);


        printf("\nIngrese el mes: ");
        scanf("%d",&pEmployeed->fecha.mes);

        printf("\nIngrese el anio: ");
        scanf("%d",&pEmployeed->fecha.anio);

        system("cls");

  //  }

}



void mostrarEmpleados(eEmpleado* pEmployeed)
{

   // for(int i=0; i<TAM ; i++ )
    //{
        printf("\nEstos son los datos del empleado: %s",pEmployeed->nombre);
        printf("\nEl legajo del empleado es : %d",pEmployeed->legajo);
        printf("\nEl sueldo del empleado es : %.2f",pEmployeed->sueldo);
        printf("\nSu fecha es es : %d / %d / %d",pEmployeed->fecha.dia,pEmployeed->fecha.mes,pEmployeed->fecha.anio);


    //}
}

