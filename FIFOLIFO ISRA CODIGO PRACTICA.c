/******************************************************************************
Isra codigo

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sucesion[4] = {};
    int eleccion, quitar;
     
    do{
   
     printf("1) Encolar\n2) Desencolar\n3) Mostrar FIFO\n4)Mostrar LIFO \n  ");
     scanf("%d", &eleccion);
    switch(eleccion){
        case 1: // para encolar
        for (int i=0;i<=4;i++){
            if(sucesion[i]<1){
            printf("Ingresa el numero de %d: ", i);
            scanf("%d", &sucesion[i]);
            }
        }
        break;
        case 2: //desencolar
            printf("Ingresa el numero que quieres desencolar: ");
            scanf("%d", &quitar);
            sucesion[quitar] = 0;
            break;
        case 3: //mostrar FIFO
        for (int i=0;i<=4;i++){
        printf("  %d", sucesion[i]);
        }
        printf("\n");
        break;
        
        case 4:
        //mostrar LIFO
        for (int i=4;i> 0;i--){
        printf("  %d", sucesion[i]);
        }
        printf("\n");
        break;
        
    }
    
    }while(eleccion!=5);
    printf("Saliste");
    return 0;
}