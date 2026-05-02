#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int edad, calificacion, eleccion, correcto=2, i=0;
    char nombre [40];
    do{
    printf("Hola, Bienvenido al menu para validar\n\n1) Validar edad\n2)Validar calificacion\n3)Validar nombre\n4)Salir\n\n");
    scanf("%d", &eleccion);
    correcto=2;
    switch(eleccion){
        
        case 1:
         do{
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    if (edad >=18 && edad<=80){
            printf("Tu edad es correcta\n\n");
            correcto = 1;
            }
            else {printf("Edad incorrecta (18-80)");

            }
    }while(correcto == 2);
    break;
    
    case 2:
    do{
    printf("Ingresa tu calificacion: ");
    scanf("%d", &calificacion);
    if (calificacion >=0 && calificacion<=100){
            printf("Tu calificacion es correcta\n\n");
            correcto = 1;
            }
            else{
            printf("Calificacion incorrecta (0-100)");
            }
    
    }while(correcto == 2);
    break;
    
    case 3:
    do{
        getchar();
    printf("Ingrese un nombre: ");
        fgets(nombre, sizeof(nombre), stdin);
         nombre[strcspn(nombre, "\n")] = '\0';
        correcto = 1;
        printf("Nombre Correcto");
} while(correcto == 2);
break;
}
} while(eleccion != 4);
    return 0;
}
