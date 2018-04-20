#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 200

int main()
{

    char alumno[];
    int opcion;

    printf("\tGestion de Alumnos\n");
    do
    {
        printf("\n1.ALTA\n2.MOSTRAR\n3.BAJA\n4.ORDENAR\n5.SALIR\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);

        switch(opcion);
        {
            case 1:
            printf("Ingrese el nombre del alumno: ");
            fflush(stdin);
            gets(alumno);


            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

        }


    }while(opcion<=6);







    return 0;
}
