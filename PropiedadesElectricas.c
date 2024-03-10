#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float IT, RT, PT, IR1, IR2, IR3;
int R1, R2, R3, BAT1;

main() {
    printf("Inserta el valor de la fuente de alimentacion:\n");
    scanf("%d", &BAT1);
    system("cls");
    printf("El voltaje de la fuente es: %dv\n", BAT1);
    printf("Inserta el valor de las 3 resistencias diferentes\n");
    scanf("%d %d %d", &R1,&R2,&R3);
    system("cls");

    RT=1 / ((1.0 / R1) + (1.0 / R2) + ( 1.0 / R3));
    IT=BAT1/RT;
    PT=(BAT1 * BAT1) / RT;
    IR1=(1.0 * BAT1) / R1;
    IR2=(1.0 * BAT1) / R2;
    IR3=(1.0 * BAT1) / R3;


    printf("Los valores de cada parametro son los siguientes:\n");
    printf("Voltaje Total: %dv\n", BAT1);
    printf("Resistencia Total: %f%c\n", RT, 244);
    printf("Corriente Total: %fA\n", IT);
    printf("Potencia Total: %fw\n", PT);
    printf("Corriente R1: %fA\n", IR1);
    printf("Corriente R2: %fA\n", IR2);
    printf("Corriente R3: %fA\n", IR3);
    system("pause");
}