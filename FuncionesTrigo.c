#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,d,e,f,angulo,conversion;
	printf("Programa que obtiene las funciones trigonom%ctricas de un angulo dado\n",130);
	printf("Introduzca el valor del angulo\n");
	scanf("%f", &angulo);
	conversion=(angulo * 3.1416)/180;
	a=sin(conversion);
	b=cos(conversion);
	c=tan(conversion);
    d=pow(a, -1);
    e=pow(b, -1);
    f=pow(c, -1);
	printf("	Angulo		    seno		    coseno		    tangente    \n");
	printf("	%0.3f		    %0.4f		    %0.4f		    %0.4f   \n",angulo,a,b,c);
	printf("	                    secante                 cosecante               cotangente\n");
	printf("	    		    %0.4f		    %0.4f		    %0.4f   \n",angulo,d,e,f);
	
	printf("\n");
	printf("\n");
	printf("\n");
	system("pause");

    return 0;
}