#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main() {
	//Aufagabe 1.1
	printf("Aufgabe 1.1 \n");
	{
		short i = 1;
		while (i > 0) {
			i++;
		}
		printf("%d \n", i);
		printf("Die Range eines Shorts geht von -34768 bis 32767  \n \n");
	}

	//Aufgabe 1.2
	printf("Aufgabe 1.2 \n");
	{
		float i;
		float r;
		float pi = M_PI;

		for (i = 0; i <= 20; i++) {
			r = 2 * pi * (20 + i);
			printf("%.2f \n \n", r);
		}
	}

	//Aufgabe 1.3
	printf("Aufgabe 1.3 \n");
	{
		int eingabe, summe, i;


		printf("Geben Sie eine Zahl ein:");
		scanf_s("%i", &eingabe);


		summe = 0;
		i = 0;
		do {
			summe = summe + i;
			i++;

		} while (i <= eingabe);

		printf("Das Ergebnis ist: %i \n \n", summe);
	}

	//Aufgabe 1.4
	printf("Aufgabe 1.4 \n");
	{
		float eingabe_zahl = 0, i;
		float ausgabe_zahl = 1;
		float ausgabe_zahl_2 = 1;


		printf("Geben Sie eine Zahl ein:");
		scanf_s("%f", &eingabe_zahl);

		for (i = eingabe_zahl; i >= 1; i--) {


			ausgabe_zahl = ausgabe_zahl * i;

		}
		printf("Das Ergebnis ist %f \n", ausgabe_zahl);


		i = eingabe_zahl;
		while (i >= 1) {
			ausgabe_zahl_2 = ausgabe_zahl_2 * i;
			i--;
		}
		printf("Das Ergebnis ist %f \n \n", ausgabe_zahl_2);
	}

	//Aufgabe 1.5 
	printf("Aufgabe 1.5 \n");
	{
		float eingabe_zahl, eingabe_zahl_2;

		printf("Geben Sie eine Zahl ein: ");
		scanf_s("%f", &eingabe_zahl);
		printf("Geben Sie eine zweite Zahl ein ");
		scanf_s("%f", &eingabe_zahl_2);

		if (eingabe_zahl > eingabe_zahl_2) {
			printf("%.3f ist die größere von beiden\n \n", eingabe_zahl);

		}
		else if (eingabe_zahl_2 > eingabe_zahl) {
			printf("%.3f ist die größere von beiden\n \n", eingabe_zahl_2);
		}
		else {
			printf("Beide Zahlen sind gleich groß, %.3f\n \n", eingabe_zahl);
		}
	}

	//Aufgabe 1.6
	printf("Aufgabe 1.6 \n");
	{
		float zahl_1, zahl_2;
		int rechenoperation;

		printf("Erste Zahl die berechnet werden soll:");
		scanf_s("%f", &zahl_1);
		printf("Zweite Zahl die berechnet werden soll:");
		scanf_s("%f", &zahl_2);
		printf("Rechenoperation die VErwendet werden soll 1-4:");
		scanf_s("%i", &rechenoperation);

		switch (rechenoperation) {
			case 1:
				printf("\n%.3f\n", zahl_1 + zahl_2);
				break;
			case 2:
				printf("\n%.3f\n", zahl_1 - zahl_2);
				break;
			case 3:
				printf("\n%.3f\n", zahl_1 * zahl_2);
				break;
			case 4:
				if (zahl_2 == 0) {
					printf("\nFalsche Eingabe \n");
					break;
				}
				printf("\n%.3f\n", zahl_1 / zahl_2);
				break;
			default:
				printf("\nFalsche Eingabe\n");
				break;
			}
	}

}
