#include <stdio.h>


int print_bit(int dezimal_zahl, char *ergebnis, int zaehler) {

    int rest = 0;
    int zaehler_2 = 0;
    int zaehler_3 = 0;
    int counter_leerstellen = 0;
    int vorzeichen = dezimal_zahl;
    char variable;
    if (dezimal_zahl < 0) dezimal_zahl = -dezimal_zahl;

    while (dezimal_zahl >= 0) {
        rest = dezimal_zahl % 2;
        dezimal_zahl = dezimal_zahl / 2;

        if (rest == 1) ergebnis[zaehler] = '1';
        else if (rest == 0) ergebnis[zaehler] = '0';


        if (dezimal_zahl == 0) break;
        zaehler++;
        counter_leerstellen = 0;

        if ((zaehler - counter_leerstellen) % 4 == 0) {
            ergebnis[zaehler] = ' ';
            zaehler++;
            counter_leerstellen += 1;
        }

    }

    //VZ
    zaehler++;
    if (vorzeichen < 0){
        ergebnis[zaehler] = '1';
    }
    else if(vorzeichen > 0){
        ergebnis[zaehler] = '0';
    }

    zaehler_2 = zaehler;
    zaehler_3 = zaehler +2;
    for (int x = 0; x <= zaehler/2; x++) {
        variable = ergebnis[zaehler_2];
        ergebnis[zaehler_2] = ergebnis[x];
        ergebnis[x] = variable;
        zaehler_2--;
    }
    return zaehler_3;

}


void dezimal_zahl(char binaere_zahl[18], int ergebnis_dezimal){
    int x;
    int zweier_potenz = 1;
    int variable;
    int ergebnis_dezimal_var = 0;
    int vz;


    for (x = 0; binaere_zahl[x] != '\0'; x++);

    if (binaere_zahl[0] == '1') {
        vz = -1;
    }
    else {
        vz = 0;
    }
        int d;
        int vor_dezimal_zahl = 0;

    for (d = x - 2; d >= 1; d--) {
        if (binaere_zahl[d] == '1') variable = 1;
        else if (binaere_zahl[d] == '0') variable = 0;

        ergebnis_dezimal_var = ergebnis_dezimal_var + variable * zweier_potenz;
        zweier_potenz = zweier_potenz * 2;
    }
    vor_dezimal_zahl = vz * zweier_potenz;
    ergebnis_dezimal = ergebnis_dezimal_var + vor_dezimal_zahl;

    printf("%i", ergebnis_dezimal);


}

//Aufgabe 5
int is_event_modulo(int eingabe_zahl_2){
    if (eingabe_zahl_2 % 2 == 0) return 1;
    else return 0;
}

int is_event_logische_operation_2(int eingabe_zahl_2){
    if((eingabe_zahl_2 & 1) == 0) return 1;
    return 0;
}


int is_event_bi(int eingabe_zahl_2){
    char ergebnis_binaerzahl[200] = { 0 };
    int zaehler = 0;
    zaehler = print_bit(eingabe_zahl_2, ergebnis_binaerzahl, zaehler);
    if (ergebnis_binaerzahl[zaehler-2] == '0') return  1;
    else return 0;
}


int is_event_logische_operation(int eingabe_zahl_2){
    for (int x = 0; x <= eingabe_zahl_2; x= x+2){
        if (x == eingabe_zahl_2) return 1;
    }
    return 0;
}

//#####################################################################################################################

//Funktion der Aufgabe:
//Aufgabe 6

//#####################################################################################################################

int teilbarkeit(int eingabe_zahl_3){
    for (int x = 6; x <= eingabe_zahl_3; x= x+6){
        if (x == eingabe_zahl_3) return 1;
    }
    return 0;
}



int main() {

//######################################################################################################################

//Aufgabe 4.1
    printf("Aufgabe 4.1\n");
//######################################################################################################################


    int eingabe_zahl = 0;


    printf("Geben Sie eine Zahl ein: ");
    scanf(" %d", &eingabe_zahl);

    printf("Als Dezimalzahl: %d, als Oktalwert: %o, als Hexadezimalwert: %x \n", eingabe_zahl, eingabe_zahl, eingabe_zahl);

//######################################################################################################################

//Aufgabe 4.2
    printf("\n\n Aufgabe 4.2\n");
//######################################################################################################################


    int zaehler = 0;
    char ergebnis[200] = { 0 };

    print_bit(eingabe_zahl, ergebnis, zaehler);

/**
 * // Ist das selbe wie in der Funktion -> macht eine Lücke nach dem 4 Bit
    printf("Die Binär zahl lautet: ");
    for (int x = 0; ergebnis[x] != '\0'; x++) {
        printf("%c", ergebnis[x]);
        counter_four += 1;
        if (counter_four == 4){
            printf(" ");
            counter_four = 0;
        };
    };
**/
    printf("Das Ergebnis lautet: %s", ergebnis);


//######################################################################################################################

//Aufgabe 4.3
    printf("\n\n Aufgabe 4.3\n");
//######################################################################################################################

    char binaere_zahl[18] = {0};
    int ergebnis_dezimal = 0;


    printf("Geben Sie eine Binär Zahl ein:");
    rewind(stdin);
    fgets(binaere_zahl, 18, stdin); //bzw.16 + Ende + VZ
    dezimal_zahl(binaere_zahl, ergebnis_dezimal);

//######################################################################################################################

//Aufgabe 4.4
    printf("\n\n Aufgabe 4.4\n");
//######################################################################################################################


    int eingabe_zahl_neu;
    int einser_counter = 0;
    int zaehler_aufgabe_vier = 0;
    char ergebnis_neu[200] = { 0 };

    printf("Geben Sie eine Zahl ein um die anzahl der Einsen zu zählen: ");
    scanf("%i", &eingabe_zahl_neu);
    print_bit(eingabe_zahl_neu, ergebnis_neu, zaehler_aufgabe_vier);

    for (int x = 0; x <= sizeof(ergebnis_neu); x++){
        if (ergebnis_neu[x] == '1'){
            einser_counter++;
        }
    }
    printf("%d", einser_counter);

//######################################################################################################################

//Aufgabe 4.5
    printf("\n\n Aufgabe 4.5\n");
//######################################################################################################################


    int eingabe_zahl_2;

    printf("Geben Sie eine Zahl ein, um auf gerade oder ungerade zu Prüfen: ");
    scanf("%i", &eingabe_zahl_2);
    printf("\n\n%d",is_event_logische_operation_2(eingabe_zahl_2));

//######################################################################################################################

//Aufgabe 4.6
    printf("\n\n Aufgabe 4.6\n");
//######################################################################################################################


    int eingabe_zahl_3;

    printf("Geben Sie eine Zahl ein, um auf 6 Teilbarkeit zu prüfen: ");
    scanf("%i", &eingabe_zahl_3);
    printf("\n\n%d\n",teilbarkeit(eingabe_zahl_3));

}
