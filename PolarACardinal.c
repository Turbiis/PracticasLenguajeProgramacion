#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	const double pi = 3.14159265358979323846;
	float x,y,c,angulo,conversion;
	printf("Introduzca el valor del radio vector y el angulo de la apertura\n");
	scanf("%f %f", &c, &angulo);
	conversion=(angulo*pi)/180;
	x=c*cos(conversion);
	y=c*sin(conversion);
	printf("Los valores rectangulares para el vector %f%c%f%c es:\n x=%f \n y=%f \n",c,192,angulo,248,x,y);
	system("pause");

    return 0;
}
