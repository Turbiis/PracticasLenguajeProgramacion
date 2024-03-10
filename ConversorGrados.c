#include <stdlib.h>
#include <stdio.h>

float c,f,k,r;

main() {
	system("COLOR ")
    printf("Inserta los grados C%c a convertir\n",248);
    scanf("%f", &c);
    system("cls");

    f=((c*1.8)+32);
    k=((c+273.15));
    r=((c*1.8)+491.67);

    printf("Estos son los valores de cada conversion:\nFahrenheit: %0.2f \nKelvin: %0.2f\nRankine: %0.2f\n", f,k,r);
    system("pause");
}
