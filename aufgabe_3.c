#include <stdio.h>
#define SIZE 10



int main() {

    //Aufgabe 3.1
    printf("\t Aufgbae 3.1 \n\n");
    char buchstaben_variable;
    int counter = 0;

    char buchstaben_liste[SIZE] = { 0 };
    while (counter < SIZE) {
    	printf("\nGeben Sie einen Buchstaben ein:");
    	scanf_s(" %c", &buchstaben_variable, 1);



    	if (buchstaben_variable > 96 && buchstaben_variable < 123) {
    		buchstaben_liste[counter] = buchstaben_variable;
    		counter++;
    	}
    	else {
    		printf("Falsch Eingabe, bitte einen klein Buchstaben eingeben! \n");
    	}

    }



    for (int i = 0; i < SIZE; i++) {
    	printf("%c \n", buchstaben_liste[i]);
    }

    //Aufgabe 3.2
    printf("\n\n\t Aufgbae 3.2 \n\n");

    int i;

    for (i = 0; i < sizeof(buchstaben_liste); i++) {
    	printf("Der Buchstabe %c hat den ASCII-Wert von %i und ist als Großbuchstabe %c.\n", buchstaben_liste[i], buchstaben_liste[i], buchstaben_liste[i]-32);
    }

    //Aufgabe 3.3
    printf("\n\n\t Aufgbae 3.3 \n\n");


    char wort_eingabe[200] = { 0 };
    char liste_string_rumgedreht[200] = { 0 };
    int position_liste = 0;
    int rueckwerts_ausgabe_position = 0;
    int leange_string = 0;
	int varibale;


    printf("Geben Sie ein Wort ein: ");
    rewind(stdin);
    fgets(wort_eingabe, 200, stdin);


    for (int i = 0; i < 200; i++){
        if (wort_eingabe[position_liste] == '\0'){
            leange_string = i;
            rueckwerts_ausgabe_position = i - 1;
            break;
        }
        position_liste++;
    }


    for (int position = 0; position < leange_string/2; position++) {
			varibale = wort_eingabe[rueckwerts_ausgabe_position];
			wort_eingabe[rueckwerts_ausgabe_position] = wort_eingabe[position];
			wort_eingabe[position] = varibale;
          rueckwerts_ausgabe_position--;

      }

      printf("\n Ausgabe des rumgedrehten String: %s  \n", wort_eingabe);




      //Aufgabe 3.4
      printf("\n\n\t Aufgbae 3.4 \n\n");
      char listen_string1[] = "wndg";
      char listen_string2[] = "wiwi";
      char output[sizeof(listen_string1)+sizeof(listen_string2)];
      int position = 0;
      int position2 = 0;


      while (listen_string1[position] != '\0') {
          output[position] = listen_string1[position];
          position++;
      }

      while (listen_string2[position2] != '\0') {
          output[position2+position] = listen_string2[position2];
          position2++;
      }
      output[position+position2] = '\0';

      printf("%s",output);




      //Aufgabe 3.5
      printf("\n\n\t Aufgbae 3.5 \n\n");

      char unsortierter_string[] = "shdgfbnjsk";
      char sortierter_string[sizeof(unsortierter_string)];
      int p = 0;


      for (int i = 0; i < 24; i++) {
          for (int d = 0; d < sizeof(unsortierter_string); d++) {
              if (unsortierter_string[d] == i + 97) {
                  sortierter_string[p] = unsortierter_string[d];
                  p++;
              }

          }
      }
      sortierter_string[p] = '\0';

      printf("Sortierter String: %s", sortierter_string);

}
