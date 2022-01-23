//
// Created by Shelicus on 19.01.2022.
//

#include <stdio.h>

int main() {

    //Allgemein gilt (Steht auf dem Blatt):
    //                                     char = 1 byte           8 Bits
    //                                     int/short  = 2 bytes    16 Bits
    //                                     float/long = 4 bytes    32 Bits
    //                                     long long = 8 bytes     64 Bits

    // int variable["anzahl" * sizeof(int)] = [1,2,3,4];

    //Anzahl immer Datentype mal länge und beim String (Zeichenkette) +1 Byte, wegen der Enderkennung
    //String ist eine Zeichenkette und Array eine Liste mit Zeichen
    //Außerdem:
    //          String = %s
    //          array/einzelne Buchstaben oder Zahlen von 0-9 = %c
    //          Integer = %d oder %i


    //Char:

    //String (Zeichenkette): Deshalb 4 reservierte Stellen -> Ende: "\0"
    char a[4] = {"ABC"};
    printf("Output bei String: %s \n", a);
    printf("Die Größe des gesamten String: %d \n\n", sizeof(a));

    //Funktioniert nicht, weil es versucht den ASCII-Code auszugeben -> ABC ist aber zusammen zu hoch
                                                            // 'A' allein würde gehen weil im ASCII-Code inhalten
    // char b[4] = {'ABC'};
    // printf("Output bei String: %s \n", b);
    // printf("Die Größe des gesamten String: %d \n\n", sizeof(b));

    //Einzelne Buchstaben: Nur 3 deshalb auch nur 3 reservierte Stellen
    char c[3] = {'A', 'B', 'C'};          // '' -> Speichern den ASCII-Code -> die Zahl für bsp. A
                                                    // Achtung 'AB' geht nicht nicht im ASCII-Code
    printf("Output bei Char: %c \n", c[0]);
    printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(c[0]));
    printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(c));

    //Einzelne Buchstaben:
    // char d[3] = {"A", "B", "C"};          // "" -> kann nicht mehrere Zeichenketten abspeichern auch nicht bei
                                                                                            // anzahl Positionen 6
    // printf("Output bei String: %s \n", d[0]);
    // printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(d[0]));
    // printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(d));

    //String (Zeichenkette): Deshalb 4 reservierte Stellen -> Ende: "\0"
    char e[4] = {"123"};                        //Zahlen als Zeichenkette -> keine Umwandlung in ASCII-Code
    printf("Output bei String: %s \n", e);
    printf("Die Größe des gesamten String: %d \n\n", sizeof(e));

    //Funktioniert nicht, weil es versucht den ASCII-Code auszugeben -> 123 ist aber zusammen zu hoch, bzw nicht
                                                                                    // definiert, '1' allein würde gehen
    // char f[4] = {'123'};
    // printf("Output bei String: %s \n", f);
    // printf("Die Größe des gesamten String: %d \n\n", sizeof(f));

    //Einzelne Zahlen: Nur 3 deshalb auch nur 3 reservierte Stellen
    char g[3] = {'1', '2', '3'};          // '' -> Speichern den ASCII-Code -> die Zahl für bsp. 1
                                                                // Achtung geht aber nur von 0 bis 9 -> ASCII-Tabelle
    printf("Output bei Char: %c \n", g[0]);
    printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(g[0]));
    printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(g));

    //Einzelne Zahlen:
    // char h[3] = {"1", "2", "3"};          // "" -> kann nicht mehrere Zeichenketten abspeichern auch nicht bei
                                                                                                // anzahl Positionen 6
    // printf("Output bei String: %s \n", h[0]);
    // printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(h[0]));
    // printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(h));



//######################################################################################################################


//Integer:

    //Integer (Zeichenkette): Gibt es nicht
    // int i[4] = {"123"};
    // printf("Output bei String: %s \n", i);
    // printf("Die Größe des gesamten String: %d \n\n", sizeof(i));

    //Gibt es auch nicht
     // int j[4] = {'123'};
     // printf("Output bei String: %s \n", j);
    // printf("Die Größe des gesamten String: %d \n\n", sizeof(j));

    //Einzelne Zahlen: Nur 3 deshalb auch nur 3 reservierte Stellen
    int k[3] = {'1', '2', '3'};          // '' -> Speichern den ASCII-Code -> die Zahl für bsp. A
                                                    // Achtung 'AB' geht nicht -> 0 bis 9 oder das ABC
    printf("Output bei Char: %c \n", k[0]);
    printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(k[0]));
    printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(k));

    //Einzelne Zahlen:
    // int l[3] = {"1", "2", "3"};          // "" -> kann keine Zeichenketten abspeichern
    // printf("Output bei String: %s \n", l[0]);
    // printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(l[0]));
    // printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(l));

    //Integer(Zeichenkette): Gibts nicht
    //int m[4] = {"ABC"};
   // printf("Output bei String: %s \n", m);
  //  printf("Die Größe des gesamten String: %d \n\n", sizeof(m));

    //Gibt es auch nicht
    // int n[4] = {'ABC'};
    // printf("Output bei String: %i \n", n);
    // printf("Die Größe des gesamten String: %d \n\n", sizeof(n));

    //Einzelne Buchstaben: Nur 3 deshalb auch nur 3 reservierte Stellen
    int o[3] = {'A', 'B', 'C'};          // '' -> Speichern den ASCII-Code -> die Zahl für bsp. A
                                                    // Achtung 'AB' geht nicht aber 0 bis 9 oder das ABC -> einzeln
    printf("Output bei Char: %c \n", o[0]);
    printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(o[0]));
    printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(o));

    //Einzelne Buchstaben: Gibt es nicht
    // int p[3] = {"A", "B", "C"};                                  // Kann keine Strings Speichern
    // printf("Output bei String: %c \n", p[0]);
    // printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(p[0]));
    // printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(p));

    //Integer (Zeichenkette): Gibt es nicht
     int q[4] = {0};                                                    //Mit {0} wird alles mit Nullern gefüllt -> {1} nur die erste Position 1
     printf("Output bei Array/String: %d \n", q);                       //Gibt bei %s etwas aus dem ASCII-Code aus -> nur so lange ASCII Tabelle
                                                                        // bei %d/%i -> geht nicht, weil kein String
     printf("Die Größe des gesamten Array: %d \n\n", sizeof(q));


    //Einzelne Zahlen: Nur 3 deshalb auch nur 3 reservierte Stellen
    int r[3] = {18, 2342, 3};          
    printf("Output bei Array: %d \n", r[0]);
    printf("Die Größe eines Einzelnen Typs: %d \n", sizeof(r[0]));
    printf("Die Größe des gesamten Arrays: %d \n\n", sizeof(r));
}
