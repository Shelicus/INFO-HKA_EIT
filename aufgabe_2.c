#include <stdio.h>

int main() {

    //Aufgabe 2.1
    printf("\nAufgabe 2.1\n\n");
    int zahlen_liste[5];
    int position = 0;

    position = 0;
    for (position = 0; position <= (sizeof(zahlen_liste) / 4 - 1); position++) {
        zahlen_liste[position] = 0;
    }

    position = 0;
    for (position = 0; position <= (sizeof(zahlen_liste) / 4 - 1); position++) {
        printf("Die Initalisierte Stelle %i ist %d \n", position + 1, zahlen_liste[position]);
    }

    position = 0;
    for (position = 0; position <= (sizeof(zahlen_liste) / 4 - 1); position++) {
        printf("Geben Sie die Zahl %i ein: ", position + 1);
        rewind(stdin);
        scanf_s("%d", &zahlen_liste[position]);
    }

    position = 0;
    for (position = 0; position <= (sizeof(zahlen_liste) / 4 - 1); position++) {
        printf("Die Zahl an der Stelle %d ist: %d \n", position + 1, zahlen_liste[position]);
    }



    //Aufgabe 2.2
    printf("\nAufgabe 2.2\n\n");
    position = 0;
    for (position = (sizeof(zahlen_liste) / 4) - 1; position > -1; position--) {
        printf("Die Verdopplung ist: %d \n", zahlen_liste[position] * 2);
    }

    //Aufgabe 2.3
    printf("\nAufgabe 2.3\n\n");
    position = 0;
    int zahl_high = zahlen_liste[0];
    int zahl_low = zahlen_liste[0];

    for (position = 0; position <= (sizeof(zahlen_liste) / 4 - 1); position++) {
        if (zahlen_liste[position] > zahl_high) {
            zahl_high = zahlen_liste[position];
        }
        if (zahlen_liste[position] < zahl_low) {
            zahl_low = zahlen_liste[position];
        }
    }

    printf("Größte Zahl ist: %d \n", zahl_high);
    printf("Kleine Zahl ist: %d \n", zahl_low);


    //Aufgabe 2.4
    printf("\nAufgabe 2.4\n\n");

    float summe_zahlen = 0;

    position = 0;
    for (position = 0; position <= (sizeof(zahlen_liste) / 4 - 1); position++) {
        summe_zahlen = summe_zahlen + zahlen_liste[position];
    }
    printf("Die Summe aller Zahlen ist: %.3f \n", summe_zahlen);
    printf("Der Mittelwert der Liste ist: %.3f\n\n", summe_zahlen / (sizeof(zahlen_liste) / 4));


    //Aufgabe 2.5
    printf("\nAufgabe 2.5\n\n");
        int matrix[3][3];
        int matrix_zwei[3][3];
        int matrix_drei[3][3];
        int zahlen_addition_1 = 1;
        int zahlen_addition_2 = 20;

        int position_2 = 0;
        position = 0;
        for (position = 0; position < 3; position++) {
            for (position_2 = 0; position_2 < 3; position_2++) {
                matrix[position_2][position] = zahlen_addition_1;
                zahlen_addition_1 = zahlen_addition_1 * 2;

                matrix_zwei[position_2][position] = zahlen_addition_2;
                zahlen_addition_2 = zahlen_addition_2 - 2;

                matrix_drei[position_2][position] = matrix_zwei[position_2][position] + matrix[position_2][position];

                printf("%d \t", matrix_drei[position_2][position]);
            }
            printf("\n");

        }

    {
        //Primzahlen
        printf("\n\nPrimzahlen\n\n");
        int zahl = 458;
        if (zahl == 3 || zahl == 2 || zahl == 1 || zahl == 0) printf("Eine Primzahl\n");
        else if (zahl % 2 == 0 || zahl % 3 == 0) printf("Keine Primzahl\n");
        else printf("Eine Primzahl\n");
    }


}
