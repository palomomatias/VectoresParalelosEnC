#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5


/*
nombre puede ser una array de palbra nombre[][50]
DEFINO no esta en memoria


Objetivo principal ordenamiento de vectores paralelos, sin importar si los datos son hardcodeados
 1) hacer el alta
 2) hacer la baja(todos los valores en 0)
 3) modificar todo menos el legajo


*/

void mostrarAlumno(char[][50],int[],int[],float[],int[],int);
void cargarAlumno(char[][50],int[],int[],float[],int[],int);
void buscarLugar(int,int[]);
float sacarPromedios(int,int);

int main()
{
    char nombre[TAMANIO][50]={"juan","Maria","Alfredo","Jose","Lili"};
    int notasUno[TAMANIO]={4};
    int notasDos[TAMANIO]={4};
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
void cargarAlumno(char nombres[][50],int primeraNota[],int segundaNota[],float promedio[],int legajo[],int largo)
{
    int indice;
    indice=buscarLugar(legajo,largo);

    legajo[indice]=666;


}
void buscarLugar(int legajo[],int largo)
{
    int i;
    int indiceRetornado=-1;
    for(i=0;i<largo;i++)
    {
        if(legajo[i]==0)
        {
            indiceRetornado=i;
            break;
        }
    }
    return indiceRetornado;
}
