//
// Created by Shelicus on 20.01.2022.
//

#include <stdio.h>

/** Allgemein gilt:
 *                  - Die Variablen a und b müssen einmal Initialisiert werden
 *                  - a und b werden immer auf die alten Werte zurückgesetzt
 *                  - Die Variable Ergebnis wird immer überschrieben, deshalb auch keine zurücksetzung erforderlich
 *
 * Berechnung Integer und Floate, sowie anzeigen:
 *                  - Mit %f wird immer eine floate Zahl mit Nullen hinter dem Komma dargestellt,
 *                      auch obwohl die variable ergebnis ein Integer ist
 *                  - Je nachdem ob das Ergebnis auch eine floate Zahl sein kann, muss die Variable Ergebnis float sein
 *                  - Außerdem muss bei der Division drauf geachtet werden das eine Variable ein Float sein muss, wenn
 *                     das Ergebnis eine Komma Zahl enthalten soll
 *
 *Aufpassen allgemein: Bei falscher verwendung von Datentype ist manchmal nur das Ergebnis falsch aber kein Fehler vom
 *                      Programm
 * @return
 */


int main() {

    //Integer Werte: -> ganzzahlig von
    int a = 5;
    int b = 8;
    int ergebnis;

    //Floate Werte: -> Komma zahlen von
    float ergebnis2;
    float c = 3.45;
    float d = 8;


    //Operatoren zum Rechnen

    //Addition:
    ergebnis = a + b;
    printf("Das Ergebnis aus a + b lautet: %d \n\n", ergebnis);

    //Subtraktion:
    a = 5;
    b = 8;
    ergebnis = a - b;
    printf("Das Ergebnis aus a - b lautet: %d \n\n", ergebnis);

    //Multiplikation:
    a = 5;
    b = 8;
    ergebnis = a * b;
    printf("Das Ergebnis aus a * b lautet: %d \n\n", ergebnis);

    //Division:

    //Integer:
    a = 5;
    b = 8;
    ergebnis = a / b;               //Achtung nur ganz zahlige Ergebnisse, ab Komma abgeschnitten
    printf("Das Ergebnis aus a / b lautet: %d \n\n", ergebnis);

    //Float:
    a = 5;
    b = 8;
    ergebnis2 = d / a;               //Achtung eine Zahl muss float sein und ergebnis (sonst kein ergebnis) muss auch float sein
    printf("Das Ergebnis aus d / a lautet: %f \n\n", ergebnis2); //Ergebnis muss floate sein, sonst wird es nicht
                                                                        // angezeigt

    //Modulo:
    a = 5;
    b = 8;
    ergebnis = a % b;               //Es wird nur der Rest ausgegeben
    printf("Das Ergebnis aus a % b lautet: %d \n\n", ergebnis);

    //Erhöhung um 1:
    a = 2;
    ergebnis = ++a; //Muss vor verwendung um 1 erhöht werden -> danach wäre a++ -> verringern ist --

    printf("Das Ergebnis aus ergebnis + 1 lautet: %d \n\n\n\n", ergebnis);


    //#################################################################################################################

    //Vergleich Operator:
    /**Allgemein gilt:
     *              - Alle Positiven Zahlen entsprechen True, außer 0 entspricht False
     *
     */


    //UND Operator, beides muss True sein:
    a = 5;
    b = 5;
    ergebnis = a && b;
    printf("Das Ergebnis aus a && b lautet: %d \n\n", ergebnis);

    //ODER Operator eines der beiden muss True sein:
    a = 1;
    b = 0;
    ergebnis = a || b;
    printf("Das Ergebnis aus a || b lautet: %d \n\n", ergebnis);

    
    //Bit vergleicher:

    // AND:
    a = 5;                                                              // 5  00101
    b = 20;                                                            //  20 10100
                                                                        // 4  00100 -> nur wenn bei beiden 1
    ergebnis = a & b;
    printf("Das Ergebnis aus a & b lautet: %d \n\n", ergebnis); //Ergebnis wo bei beiden 1

    // OR:
    a = 5;                                                              // 5  00101
    b = 20;                                                            //  20 10100
                                                                        // 21  10101 -> wenn bei einem der beiden 1
    ergebnis = a | b;
    printf("Das Ergebnis aus a | b lautet: %d \n\n", ergebnis); //Ergebnis wo bei beiden 1

    // ^:
    a = 5;                                                              // 5  00101
    b = 20;                                                            //  20 10100
                                                                        // 17  10001 -> nur wenn bei einem von beidem
    ergebnis = a  ^ b;
    printf("Das Ergebnis aus a ^ b lautet: %d \n\n", ergebnis); //Ergebnis wo bei beiden 1

    // ~:
    a = 5;                                                              // 5  0101
                                                                        // -6   -> Negativ + 1
    ergebnis = ~a;
    printf("Das Ergebnis aus ~a lautet: %d \n\n", ergebnis); //Ergebnis wo bei beiden 1

    //Bit verschieber:
    a = 5;
    b = a >> 1;
    ergebnis = b << 1;
    printf("Das Ergebnis aus >> lautet: %d \n\n\n\n", ergebnis); //Wird Verschoben nach rechts und links um eins und wird
                                                                        // Null aufgefüllt


    //#################################################################################################################

    //Kurzschreibweisen von Operatoren

    //Erhöhung um Variable A und wird gespeichert auf Ergebnis
    a = 5;
    b = 7;
    ergebnis = 6;

    ergebnis += a;
    printf("Das Ergebnis von += lautet: %d \n\n", ergebnis);


    //Verringerung um Variable A und wird gespeichert auf Ergebnis
    a = 5;
    b = 7;
    ergebnis = 6;

    ergebnis -= a;
    printf("Das Ergebnis von -= lautet: %d\n\n", ergebnis);


    //Multiplikation mit Variable A und wird gespeichert auf Ergebnis
    a = 5;
    b = 7;
    ergebnis = 6;

    ergebnis *= a;
    printf("Das Ergebnis von *= lautet: %d\n\n", ergebnis);


    //Division mit Variable A und wird gespeichert auf Ergebnis
    a = 5;
    b = 7;
    ergebnis = 15;

    ergebnis /= a;
    printf("Das Ergebnis von /= lautet: %d\n\n", ergebnis);


    //Modulo mit Variable A und wird gespeichert auf Ergebnis
    a = 5;
    b = 7;
    ergebnis = 7;

    ergebnis %= a;
    printf("Das Ergebnis von %= lautet: %d\n\n", ergebnis);


    //verschiebung um Variable A und wird gespeichert auf Ergebnis (In Binär)
    a = 5;
    b = 7;
    ergebnis = 6;

    ergebnis <<= a; //Geht in beide Richtungen
    printf("Das Ergebnis von <<= lautet: %d\n\n", ergebnis);


    //Vergleichen das Ergebnis mit Variable und speicherung auf Ergebnis
    a = 5;
    b = 7;
    ergebnis = 6;

    ergebnis &= a; //Das geht mit &,^,|
    printf("Das Ergebnis von &= lautet: %d\n\n", ergebnis);

}
