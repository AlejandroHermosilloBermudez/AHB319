#include<stdio.h>

int main()
{
	float porcentajex, porcentajey, porcentajeanchoelemento, porcentajealtoelemento;
	int coordenadax1, coordenaday1, coordenadax2, coordenaday2;
	int ancho, alto;


	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &porcentajex);
	scanf_s("%f", &porcentajey);
	scanf_s("%f", &porcentajeanchoelemento);
	scanf_s("%f", &porcentajealtoelemento);


	coordenadax1 = ancho * porcentajex;
	coordenaday1 = alto * porcentajey;

	coordenadax2 = (ancho * porcentajeanchoelemento) + coordenadax1 ;
	coordenaday2 = (alto * porcentajealtoelemento) + coordenaday1;


	printf("%i ", ancho);
	printf("%i ", alto);
	printf("%5.2f ", porcentajex);
	printf("%5.2f ", porcentajey);
	printf("%5.2f ", porcentajeanchoelemento);
	printf("%5.2f", porcentajealtoelemento);
	printf(" %i %i %i %i", coordenadax1, coordenaday1, coordenadax2, coordenaday2);

}