/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arreglo[]= {50, 26, 7, 9, 15, 27}, j, temp, n, i;
    
    n = sizeof(arreglo)/sizeof(arreglo[0]);
    
        for(i=0; i - n-1;i++){
            for (j = i+1; j < n; j++){
            if (arreglo[i]>arreglo[j]){
                temp=arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }    
            }
            
        }
for(i=0; i < n;i++){
printf("%d, ", arreglo[i]);
    
}
    return 0;
}