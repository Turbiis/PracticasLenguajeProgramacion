#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

// Definición de la constante de Coulomb (en N*m^2/C^2)
const double K = 8.987551787e9;

double q1, q2, r, F;

// Función para calcular la fuerza electrostática según la ley de Coulomb
double calcularFuerzaCoulomb(double q1, double q2, double r) {
    return (K * q1 * q2) / pow(r, 2);
}

int main() {
    printf("Inserta la magnitud de la primera carga (Coulombs, acepta notacion cientifica):\n");
    scanf("%lf", &q1);
    printf("Inserta la magnitud de la segunda carga carga (Coulombs, acepta notacion cientifica):\n");
    scanf("%lf", &q2);
    printf("Inserta la magnitud de las distancias (Metros):\n");
    scanf("%lf", &r);

    q1=q1*1.0;
    q2=q2*1.0;
    r=r*1.0;
    F=calcularFuerzaCoulomb(q1, q2, r);

    system("cls");

    printf("La fuerza electrostática es %lf N\n", F);
    system("pause");

    return 0;
}