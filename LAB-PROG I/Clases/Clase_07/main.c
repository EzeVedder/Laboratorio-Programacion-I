#include <stdio.h>
#include <stdlib.h>
#define tam 3

float calcularPromedio(int,int);

int main()
{
    int legajo[3];//2 + el \0
    char nombre[3][30];//matriz de 3x30 29+\0
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;

    for(i=0;i<3; i++)
    {
        printf("\nIngrese el legajo: ");
        scanf("%d",&legajo[i]);

        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombre[i]);
        //scanf("%s",nombre[i]);

        printf("Ingrese la primer nota: ");
        scanf("%d",&nota1[i]);

        printf("Ingrese la segunda nota: ");
        scanf("%d",&nota2[i]);

        promedio[i] = calcularPromedio(nota1[i],nota2[i]);
        printf("El promedio del alumno %s, es: %.2f",nombre[i],promedio[i]);

    }


    return 0;
}


float calcularPromedio(nota1,nota2)
{
    float promedio;
    promedio = (float)(nota1 + nota2)/2;
    return promedio;
}
