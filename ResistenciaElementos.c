#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double p, L, A, Raluminio, Rcobre, Rconstatan;

int main() {
    system("COLOR 8D");
    printf("Inserta la longitud (m)\n");
    scanf("%lf", &L);
    system("cls");
    printf("Inserta el area (mm)\n");
    scanf("%lf", &A);
    system("cls");
    
    Raluminio = 0.028 * L / A;
    Rcobre = 0.0172 * L / A;
    Rconstatan = 0.489 * L / A;

    printf("La resistencia por cada material es de:\n");
    printf("Resistencia del material de Aluminio: %0.9lf ohms\n", Raluminio);
    printf("Resistencia del material de Cobre: %0.9lf ohms\n", Rcobre);
    printf("Resistencia del material de Constatan: %0.9lf ohms\n", Rconstatan);
    system("pause");

    return 0;
}