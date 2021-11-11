#include <stdio.h>

int main() {
	//Vereinbarunsteil
	//
	float celsius, fahrenheit;
	int art;

	//Anweisungsteil

	printf(
		"Geben Sie 1 für die Ausgabe der Tabelle ein: \n"
		"Geben Sie 2 für die Ausgabe des Speicherort ein: \n"
		"Geben Sie 3 für Fahrenheit in Celsisus ein: \n"
		"Geben Sie 4 für Celsius in Fahrenheit ein: \n"
		"Geben Sie 5 für die größen der einzelenen Speichertypen ein: \n"
		"Geben Sie 6 für das Testen von Überlaufverhalten von Ganzzahl- und Fließkomma-Variablen ein:"

	);

	rewind(stdin); // Um zu verhindern das eine Ausgabe als Eingabe gesehen wird
	scanf_s("%i", &art);				//Strings benötigen ein & vor der Variable

	if (art == 1) {
		printf(
			"Familienname \t Vorname \t Telefon \n"
			"Mustername \t Peter \t\t 012345/44333 \n"						//Doppelt \t\t -> 2 Tabs
			"Niemand \t Norbert \t 09876/5423 \n"
		);
		return 0;
	}

	else if (art == 2) {
		printf("D:\\Daten\\Alle_Daten.dat"); // Doppeltstriche verhindern das ausführen hinter einm "\"
	}

	else if (art == 3) {

		printf("Bitte Wert fr fahrenheit eingeben: ");
		rewind(stdin);
		scanf_s("%f", &fahrenheit);

		celsius = (fahrenheit - 32) * (5.0 / 9); // 5.0 „ndert die Zahl zu Float, 
												 //ohne 5.0 und ohne Klammer gibt es ein Fehler,
												 // sonst ohne Klammer am Ende weil es dann auf float berechnet wird
		printf("%f øF sind %f.2 øC. \n ", fahrenheit, celsius);
		return 0;
	}
	else if (art == 4) {
		printf("Bitte Wert fr Celsius eingeben: ");
		rewind(stdin);
		scanf_s("%f", &celsius);

		fahrenheit = (celsius * 9 / 5) + 32; // 5.0 „ndert die Zahl zu Float, 
											 //ohne 5.0 und ohne Klammer gibt es ein Fehler,
											 // sonst ohne Klammer am Ende weil es dann auf float berechnet wird
		printf("%f øC sind %f.2 øF. \n ", celsius, fahrenheit);
		return 0;
	}

	else if (art == 5) {							//KAnn nicht in Flaot angegen werden weil es 64 Bit lang ist und somit nicht die richtige Zahl angeben werden kann
		printf("%d Bit\n", sizeof(float));				//4	
		printf("%d Bit\n", sizeof(double));			//8
		printf("%d Bit\n", sizeof(long double));		//8
		printf("%d Bit\n", sizeof(long float));		//8
		printf("%d Bit\n", sizeof(short int));			//2
		printf("%d Bit\n", sizeof(long int));			//4		
		return 0;
	}

	else if (art == 6) {
		{
			unsigned char uc1, uc2, uergebnis;
			char c1, c2, ergebnis;

			c1 = 100;
			c2 = 80;
			uc1 = c1;
			uc2 = c2;

			uergebnis = uc1 + uc2;
			ergebnis = c1 + c2;

			printf("%d \n", uergebnis); // Von bereich 0 bis 255
			printf("%d", ergebnis); // Von Bereich -127 bis 127

		}

	}

	else {
		printf("Das war eine Falsche Eingabe, Programm beendet");
		return 0;
	};

}
