//
// Created by Shelicus on 20.01.2022.
//

#include <stdio.h>


/** Allgemein (Funktionen):
 *
 * Funktionen sind dafür da Code auszulagern, den man im Code öfters benötigt
 * -> Funktionen können überall im Code aufgerufen werden, wenn diese sich über halb befindet
 * -> Eine Funktion kann eine andere Funktion aufrufen
 * -> Funktionen können mit verschiedenen Parameter aufgerufen werden
 * -> Angelegte Variablen sind nur im gültigkeitsbereich der Funktion gültig
 *
 * Allgemein (Pointers):
 *
 * Zeigen auf die Speicheradresse, wo diese Anfängt und beinhalten nicht ihren Inhalt
 */

/**
 * datentyp rückgabe der funktion | Name der Funktion (Bezeichnung der Variablen mit dem erwarteten Datentyp){
 * Code
 * }
 *
 *
 * @return
 */

int funktion_eins(int a, int b){
    int c;         //Die Variable C ist nur in der funktion gültig und kann nicht im Main abgefragt werden
    c = a + b;
    return c; //Wird am Ende Übergeben
}

void funktion_zusammenfuehren(char const* vorname, char const* nachname, char *ergebnis){ //Const heißt, bleibt unverändert
    //Variable ergebnis wird als pointer übergeben, um auf die Speicherstelle zu schreiben
    int i;

    for(i = 0; vorname[i] != '\0' ; i++){
        ergebnis[i] = vorname[i];
    }
    ergebnis[i++] = ' ';

    for(int a = 0; nachname[a] != '\0'; a++){
        ergebnis[i] = nachname[a];
        i++;
    }
    ergebnis[i] = '\0';
    //Keine Rückgabe, weil Speicherposition schon bekannt
}

char *funktion_zwei(char *vorname, char *nachname){
    static char ergebnis[200] = {0}; //Lösung a: Ergebnis wird als Static festgelegt, das heißt es wird nicht gelöscht
                                        // nach dem Aufruf der Funktion -> Achtung wird bei wiederholten aufruf
                                        //überschrieben -> deshalb direkt inhalt nach aufrufen in eine neue Variable
                                        //schreiben -> wurde hier nicht gemacht! -> weil Pointer

    printf("Die Speicheradresse von vorname ist: %x \n", &vorname);
    printf("Die Speicheradresse von nachnamen ist: %x\n", &nachname);

    printf("Der Inhalt von vorname ist: %s \n", vorname);
    printf("Die Inhalt von nachnamen ist: %s\n", nachname);

    funktion_zusammenfuehren(vorname, nachname, ergebnis); //Lösung b: Ergebnis wird mitgegeben und vorher angelegt
                                                        //In der Funktion wird dann auf die Speicherstelle geschrieben

    printf("Das Ergebnis lautet: %s\n", ergebnis); //Inhalt der Speicherposition wird ausgegeben

    return ergebnis; //Ergebnis wird für Lösung a zurückgeben
}

int main(){
    //Funktionen:

    //Integer funktion
    int a = 5;
    int b = 15;
    int ergebnis;

    ergebnis = funktion_eins(a, b); //Aufruf der Funktion -> kann beliebig oft im Code gemacht werden
                                    //Ergebnis wird direkt auf die Variable ergebnis geschrieben
    printf("Das Ergebnis lautet: %d\n\n", ergebnis);


    //Char funktion
    char *vorname = "Max";
    char *nachname = "Musterman";

    char *ergebnis_zwei = funktion_zwei(vorname, nachname); //Rückgabe von Char ist schwieriger, weil diese nach dem
                                                            //Aufruf gelöscht werden -> Es gibt zwei Lösungen

    printf("Das Ergebnis aus der Funktion lautet: %s\n\n", ergebnis_zwei);



   // Pointer(Zeiger):

   //Integer:
   // Je nachdem Variable oder Pointer muss entweder * oder & genommen werden
   int variable_eins = 34;
   int *pointer_auf_variable;

   pointer_auf_variable = &variable_eins;
   printf("Ergebnis: %i, Adresse: %x \n",*pointer_auf_variable, pointer_auf_variable);
   printf("Ergebnis: %i, Adresse: %x \n",variable_eins, &variable_eins);


   //Null Pointer:
   int *variable_null = NULL; //Wenn keine Adresse vorhanden ist
   printf("Adresse: %x \n", variable_null);


   //char Pointer
    char variable_zwei[12] = "Hallo World"; //Normaler String
    char variable_fu[12] = "Hallo World"; //Normaler String -> Ausgabe als Array
    char var_vier[6] = {'H','a','l','l','o','\0'}; //Normales Array -> ausgabe als String
    char *variable_zwei_pointer = "Hallo World" ;    //Pointer String
    char var_dr[] = "Hallo World";                  //Auch eine Art Pointer

    printf("Ergebnis: %s, Adresse: %x \n", var_vier, &var_vier);
    printf("Ergebnis: %s, Adresse: %x \n",var_dr, var_dr);
    printf("Ergebnis: %s, Adresse: %x \n",variable_zwei_pointer, &variable_zwei_pointer);
    printf("Ergebnis: %s, Adresse: %x \n",variable_zwei, &variable_zwei);
    printf("Ergebnis: %c, Adresse: %x \n",variable_fu[2], &variable_fu);

}
