#include "funciones.h"

int main(){
    char scan[100000];
    int n;
    int iteraciones = 0;
    printf("Nombre de Archivo (con extension .txt): ");
    gets(scan);
    n = TamanoArchivo(scan);
    int a[n];
    int b[n];
    LlenarArreglo(scan, n, a);
    LlenarArreglo(scan, n, b);
    printf("\nINSERCION:\n");
    printf("Original: ");
    imprimeArreglo(n, a);
    iteraciones = InsertionSort(n, a);
    printf("\nOrdenado: ");
    imprimeArreglo(n, a);
    printf("\nNumero de Iteraciones: %d\n\n", iteraciones);
    printf("QUICKSORT:\n");
    printf("Original: ");
    imprimeArreglo(n, b);
    quickSort2(0, n-1, n, b);
    printf("\nOrdenado: ");
    imprimeArreglo(n, b);
    printf("\nNumero de iteraciones: %d", iteraciones2);
    return 0;
}
