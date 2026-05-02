
#include <stdio.h>

// funciones antes del main
void mostrarmenu();
float area_cuadrado();
float area_rectangulo();
float area_circulo();
float area_triangulo();

float pi=3.1416;
int salir=0;

int main(){
    mostrarmenu();

    return 0;
}


// funcion del menu
void mostrarmenu(){
    do{
    int eleccion, salir=1;
    printf("Bienvenido al programa para calcular area de figuras\n\n1)Cuadrado\n2)Rectagulo\n3)Circulo\n4)Triangulo\n\n");
    scanf("%d", &eleccion);
    
    switch(eleccion){
        
        case 1:
        area_cuadrado();
        break;
        
        case 2:
        area_rectangulo();
        break;
        
        case 3: 
        area_circulo();
        break;
        
        case 4:
        area_triangulo();
        break;
        
        case 5:
        salir = 2;
        printf("Saliste del programa");
        break;
        

    }
    }while(salir ==2);
}

// funciones ya definidas
float area_cuadrado(){
    int lado;
    printf("\n\nIngresa la longitud de la longitud: ");
    scanf("%d", &lado);
        printf("\n\nEl area es: %d", lado*lado);

    
}

float area_rectangulo(){
     int base, altura;
    printf("\n\nIngresa la longitud de la base: ");
    scanf("%d", &base);
    printf("\nIngresa la longitud de la altura: ");
    scanf("%d", &altura);
        printf("\nEl area es: %d", base*altura);
}

float area_circulo(){
     float radio;
    printf("\n\nIngresa el radio: ");
    scanf("%f", &radio);
        printf("\n\nEl area es: %f", pi*(radio*radio));
        return 0;
}

float area_triangulo(){
     float base, altura;
    printf("\n\nIngresa la longitud de la base: ");
    scanf("%f", &base);
    printf("\nIngresa la longitud de la altura: ");
    scanf("%f", &altura);
        printf("\nEl area es: %f", (base*altura)/2);
}

