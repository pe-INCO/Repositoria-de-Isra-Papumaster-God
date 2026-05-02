/******************************************************************************

holi  profe

*******************************************************************************/
#include <stdio.h>

int main()
{
    int calificaciones[3][4];
    int estudiante, eleccion, materia, cal_ins;
do{
    printf("Menu de calificaciones de cualtos oh yea\n\n1) Insertar\n2) Ver matriz\n3) Promedio\n4) Promedio por materia\n5) Nota mas alta \n6) Insertar solo 1\n7) Salir \n\n");
    scanf("%d", &eleccion);
    switch(eleccion){
        case 1:
        for (int i=0; i<3; i++){
                if (i == 0){
                    for (int j=0; j<4; j++){
                    printf("Ingresa calificaicon de Juan (%d)", j);
                    scanf("%d", &calificaciones[i][j]);
                }
                }
                if (i == 1){
                    for (int j=0; j<4; j++){
                    printf("Ingresa calificaicon de Pedro (%d)", j);
                    scanf("%d", &calificaciones[i][j]);
                }
                }
                
                if (i == 2){
                    for (int j=0; j<4; j++){
                    printf("Ingresa calificaicon de Lucasito (%d)", j);
                    scanf("%d", &calificaciones[i][j]);
                }
                }
        }
        break;
        
        
        case 2: 
            for (int i=0; i<4; i++){
                if (i == 0){
                    printf("\nJuan:   ");
                }
                if (i == 1){
                    printf("\nPedrito:   ");
                }
                if (i == 2){
                    printf("\nLucasito:   ");
                }
                
                for(int j=0; j<4; j++){
                    printf("%d, ", calificaciones[i][j]);
                    
                }
                  if (i == 3){
                break;
                  }
                
        case 6:
        
        printf("\n0) Juan\n1) Pedro \n2) Lucas\nIngresa el numero del estudiante: ");
        scanf("%d", &estudiante);
        printf("\n0) Calculo\n1) Mecanica \n2) Matematicas Discretas\n3)Cultura de paz\nIngrese la materia: ");
        scanf("%d", &materia);
        printf("\n Ingrese la calificacion que desee darle:  ");
        scanf("%d", &cal_ins);
        
        calificaciones[estudiante][materia] = cal_ins;
        break; 
            }
        
        
        
        
        
        
        
    }

}while(eleccion != 7);

    return 0;
}