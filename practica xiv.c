#include <stdio.h>

int main()
{
	int numero[10], numposicion, opcion;
	int posicion = 0, numerocambio=0; //variables, una para la posicion y otro para cambiar el numero

	do {
		printf("Programa de arreglo para num aleatorio!\nPrimero se Generaran 5 numeros.\n\n 1) Inicializar\n 2) Mostrar\n3) Agregar\n4) Insertar\n5) Eliminar\n6) Salir\n");
		scanf("%d", &opcion);


		for (int a=0; a >= 4; a++) {
			numero[a] = 1+1;
		}


		switch(opcion) {


		case 1:

			for (int i=5; i <= 10; i++) {
				numposicion = i;
				printf("\nIntroduce numero de la posicion %d:  ", numposicion);
				scanf("%d", &numero[i]);
			}
            break;
            
        case 2:
        for (int i=0; i <= 10; i++) {
				numposicion = i;
				printf("\nNumero %d:  %d", numposicion, numero[i]);
        }
        break;
    
        case 3:
        for (int i=0; i <= 10; i++) {
				if (numero[i]==0){
				printf("\nLa posicion %d es 0, cambiala:", i);
				scanf("%d", &numero[i]);
				}
        }
        break;
        
        case 4:
        
        printf("\nIngresa la posicion: "); 
        scanf("%d", &posicion);
        printf("\nIngresa el numero para cambiarlo: "); 
        scanf("%d", &numerocambio);
        numero[posicion] = numerocambio;
        break;
        
        case 5:
        int posicion = 0; //variables, una para la posicion y otro para cambiar el numero
        printf("\nIngresa la posicion para eliminar: ");
        numero[posicion] = 0;
        break;
        
        case 6:
        printf("Saliste papu");
		}
		
	} while (opcion != 6);
	return 0;
}


