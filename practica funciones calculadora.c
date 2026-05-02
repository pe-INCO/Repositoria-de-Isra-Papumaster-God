/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


//funciones
float suma();
float resta();
float division();
float multiplicacion();

// variables globales
float num1, num2;

//funcion principal
int main()
{
    char op;
    int salir = 2;
    float resultado;
    
    do{
    printf("Ingresa el primer numero, el signo de la operacion y el segundo numero\n\n+)Suma\n-)Resta\n/)Division\n*)Multiplicacion\ns)Salir\n\n");
    scanf("%f", &num1);
    scanf(" %c", &op);
    scanf("%f", &num2);
    if (num1 >0 || num2>0){ // Para verificar numero mayor a 0
    switch (op){
        
        case '+':
        resultado = suma();
        break;
        
        case '-':
        resultado = resta();
        break;
        
        case '/':
        resultado = division();
        break;
        
        case '*':
        resultado = multiplicacion();
        break;
        
        case 's':
        salir = 1;
        break;
        
        
        }
        printf("\n\nEl resultado es: %.2f\n", resultado);
    }else{
            printf("Solo numeros mayor a 0\n\n");
        
        }
        
    }while(salir == 1);
    return 0;
}

// declaracion de funciones

float suma(){
    return num1 + num2;
}
float resta(){
    return num1 - num2;
}
float division(){
    return num1 / num2;
}
float multiplicacion(){
    return num1 * num2;
}
