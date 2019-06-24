#include <stdio.h>
#include <stdlib.h>

int *b;
int iteraciones2 = 0;

int InsertionSort(int n, int a[n]){
    int j, temporal;
    int iteraciones = 0;
    int i = 1;
    while (i < n){
        iteraciones++;
        j = i;
        while (a[j] < a[j-1] && j-1 >= 0){
            temporal = a[j-1];
            a[j-1] = a[j];
            a[j] = temporal;
            j--;
            iteraciones++;
        }
        i++;
    }
    return iteraciones;
}
int TamanoArchivo(char nombreArchivo[100000]){
    int dato;
    FILE *arch;
    if (fopen(nombreArchivo, "r") != NULL){
        arch = fopen(nombreArchivo, "r");
    }else{
        //printf("El archivo no existe!");
        return 0;
    }
    fscanf(arch,"%d", &dato);
    fclose(arch);
    return dato;
}

void LlenarArreglo(char nombreArchivo[100000],int n, int a[n]){
    int dato;
    int i = 0;
    FILE *arch;
    if (fopen(nombreArchivo, "r") != NULL){
        arch = fopen(nombreArchivo, "r");
    }else{
        printf("El archivo no existe!");
        printf("\nEl programa se cerrara...\n\n");
        system("pause");
        exit(1);
        return;
    }
    fscanf(arch,"%i", &dato);
    do{
        fscanf(arch, "%i", &a[i]);
        i++;
    }while(fgetc(arch) != EOF);
    fclose(arch);
}

void imprimeArreglo(int n, int a[n]){
    int i = 0;
    while(i<n){
        printf("%i  ",a[i]);
        i++;
    }
}
int j = 0;
void quickSort2(int ini, int fin, int n, int b[n]){
    int posPiv = 0;


    if(ini < fin){
        posPiv = particion(ini, fin, n, b);
        j++;
        quickSort2(ini, posPiv - 1, n, b);
        quickSort2(posPiv + 1, fin, n, b);
    }
}

int particion(int ini, int fin, int n, int b[n]){
    int posUltMenor, k;
    int temporal, pivote;
    pivote = b[ini];
    posUltMenor = ini;
    k = ini + 1;
    while(k <= fin){
        if(b[k] < pivote){
            posUltMenor++;
            temporal = b[posUltMenor];
            b[posUltMenor] = b[k];
            b[k] = temporal;
        }
        iteraciones2++;
        k++;
    }
        temporal = b[ini];
        b[ini] = b[posUltMenor];
        b[posUltMenor] = temporal;

    return posUltMenor;
}
