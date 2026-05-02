#include <stdio.h>



//delarar función

int sumar(int a, int b);

int numeroMagico();

void mostrarEdad(int edad);

void mensaje();



//función principal

int main()

{

    int resultado;



    //llamar a la función

    resultado=sumar(56,78);

    mensaje();

    

    printf("el resultado es: %d\n", resultado);

    printf("El numero magico es: %d\n",numeroMagico());

    mostrarEdad(18);

    mostrarEdad(56);

    mostrarEdad(14);



    return 0;

}



//función con parámetros y con retorno

int sumar(int a, int b){

    int suma;

    suma=a+b;

    return suma;

}



//Con parámetros y sin retorno Lalo void

void mostrarEdad(int edad){

    printf("Tu edad es: %d años\n", edad);

}



//Sin parámetros y con retorno Jorge int float 

int numeroMagico(){

    int numero = 67;

    return numero;

}

//Sin parámetros y sin retorno Iván void

void mensaje()

{

    printf("\nNo copie y pegue\n");

    

}