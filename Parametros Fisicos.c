#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

float d,t,m,V,a,F,FT,P;

int main() {
	system("COLOR B2");
	printf("Introduce la distancia, tiempo y masa del objeto (Separados asi como viene en orden)\n");
	scanf("%f %f %f", &d, &t, &m);
	
	system("cls");
	printf("Espere mientras se hace el calculo\n");
	Sleep(2000);

	V=d/t;
	a=((2 * d) / (t * t));
	F=(((2 * d) / t * t) * m);
	FT=((((2 * d) / t * t) * m) * d);
	P=(((((2 * d) / t * t) * m) * d) / t);

	printf("Los valores con los que se hizo este calculo fueron\n Distancia: %0.0fm\n Tiempo: %0.0fs\nMasa: %0.0fkg\n", d,t,m);
	printf("Los resultados son los siguientes:\n");
	printf("Velocidad: %0.2fm/s\n", V);
	printf("Aceleracion: %0.2fm/s%c\n", a,253);
	printf("Fuerza: %0.2f N\n", F);
	printf("Trabajo: %0.2f J\n", FT);
	printf("Potencia: %0.2f W\n", P);

	system("pause");
	return 0;
}

