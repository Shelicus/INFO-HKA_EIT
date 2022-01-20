//
// Created by Shelicus on 20.01.2022.
//

#include <stdio.h>

int main(){
    int a = 5;
    int b = 5;
    int c = 6;

    /** Operatoren:
     * gleich -> ==
     * ungleich -> !=
     * größer/kleiner = < oder >
     * gleich größer/kleiner = >= oder <=
     * und zwei bedingungen -> [] && []
     * oder zwei bedingungen -> [] || []
    **/


    //IF-Statement:

    /**
     * if (Bedingung){Code}
     * else if (Bedingung) {Code}
     * else {Code}
     */

    if (!(a || b)){
        printf("Code 1 \n\n");
    }
    else if (a == b){               //Unendlich viele können eingebaut werden
        printf("Code 2 \n\n");
    }
    else{
        printf("Code 3 \n\n");
    }


    //FOR-Schleife:

    /**
     * for (anfang, Ende, Erhöhung){Code};
     * Achtung: Erhöhung erst nach durchlauf der Schleife
     * Bei Initialisierung der Variable in der For-Schleife -> nur innerhalb der Schleife gültig
     */
     b = 10;
    for(a = 0; a < b; a++){
        printf("Schleifendurchgang: %d\n", a + 1);
    }

    printf("\n\n");

    //While-Schleife

    /**
     * while(Bedingung){Code}
     * Achtung ohne abbruchbedingung kein Ende!
     */
     a = 0;
    while(a < 10){
        printf("Schleifendurchgang: %d\n", a++ + 1);
    }

    printf("\n\n");

    //Do-While-Schleife

    /**
     * do{code
     * }while(Bedingung);
     * Achtung ohne abbruchbedingung kein Ende!
     * Wird immer 1 mal ausgeführt
     */
    a = 0;
    do{
        printf("Schleifendurchgang: %d\n", a++ + 1);
    }while(a < 10);

    printf("\n\n");

    //Switch cases:

    /**
     * Swicht()
     *
     * case(1):
     * Code;
     * break;  --> wird benötigt weil sonst der Rest auch ausgegeben wird
     *
     * case(2):
     * Code;
     * break;
     *
     * case(3):
     * Code;
     * break;
     *
     * default:
     * Code;
     * 
     * Achtung Break nicht vergessen!
     */
     a = 5;

    switch (a) {
        case(1):
            printf("Code 1");
            break;

        case(2):
            printf("Code 2");
            break;

        case(3):
            printf("Code 3");
            break;

        default:
            printf("Nicht von dem!");


    }

}
