#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5


/*
nombre puede ser una array de palbra nombre[][50]
DEFINO no esta en memoria

*/

void mostrarAlumno(char[][50],int[],int[],float[],int[],int);
void cargarAlumno(char[][50],int[],int[],float[],int[],int);

int main()
{
    char nombre[TAMANIO][50]={"juan","Maria","Alfredo","Jose","Lili"};
    int notasUno[TAMANIO]={};
    int notasDos[TAMANIO]={};
    float promedios[TAMANIO]={};
    int legajo[TAMANIO]={};
    cargarAlumno(nombre,notasUno,notasDos,promedios,legajo,TAMANIO);

    mostrarAlumno(nombre,notasUno,notasDos,promedios,legajo,TAMANIO);


    return 0;
}


void mostrarAlumno(char nombres[][50],int primeraNota[],int segundaNota[],float promedio[],int legajos[],int largo)
{
    int i;
    for(i=0;i<largo;i++)
    {
        printf("\nL:%d, N:%s,N1:%d,N2:%d,P:%.2f",legajos[i],nombres[i],primeraNota[i],segundaNota[i],promedio[i]);
    }
}
void cargarAlumno(char nombres[][50],int primeraNota[],int segundaNota[],float promedio[],int legajos[],int largo)
{
    legajos[1]=666;
}
