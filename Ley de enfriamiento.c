#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

float x, y, z, tF;
const float e = 2.7128 ;
const float k = 0.00267 ;

int main() {
    system("COLOR E3");
    system("cls");
    printf("Cuanto tiempo estuvo el material en el vaso de agua? (minutos):\n");
    scanf("%d", &x);
    system("cls");
    printf("A que temperatura se encuentra el agua del vaso?:\n");
    scanf("%d", &y);
    system("cls");
    printf("A que temperatura se encontraba el material?:\n");
    scanf("%d", &z);
    system("cls");

    printf("Espere mientras se hace el calculo...");
    Sleep(2000);

    tF = ((z - y) * pow(e, -k * x)) + y;

    printf("La temperatura final del material fue de %d C%c", tF, 248);
    system("pause");

    return 0;
}