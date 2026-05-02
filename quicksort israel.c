/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void intercambiar(int* a, int* b) {
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

int particion(int arreglo[], int bajo, int alto) {
    int pivote = arreglo[alto]; // pivote es el elemento final
    int i = (bajo - 1); //para el mas bajo
    
    for (int j = bajo; j <= alto - 1; j++) {
        if (arreglo[j] <= pivote) {
            i++;
            intercambiar(&arreglo[i], &arreglo[j]);
        }
}
intercambiar(&arreglo[i + 1], &arreglo[alto]);
    return (i + 1);
}
void quickSort(int arreglo[], int bajo, int alto) {
    if (bajo < alto) {
        // pi es el índice de partición, arreglo[pi] ya está en su lugar
        int pi = particion(arreglo, bajo, alto);

        // Ordenamos los elementos por separado antes y después de la partición
        quickSort(arreglo, bajo, pi - 1);
        quickSort(arreglo, pi + 1, alto);
    }
}

void imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++)
        printf("%d ", arreglo[i]);
    printf("\n");
}

int main() {
    int datos[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(datos) / sizeof(datos[0]);
    
    printf("Arreglo original: \n");
    imprimirArreglo(datos, n);

    quickSort(datos, 0, n - 1);

    printf("Arreglo ordenado: \n");
    imprimirArreglo(datos, n);
    return 0;
}