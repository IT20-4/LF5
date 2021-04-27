#include <stdio.h>
#include <string.h>

void antwort(char ja[], char nein[], char wand[]) {
    //Antowrt Ja
    if (strcmp(ja, wand) == 0) {
        printf (" \n");
        printf ("Linksdrehung!\n\n");
    //Anwort: Nein
    } else if (strcmp(nein, wand) == 0) {
        printf (" \n");
        printf ("Schritt vorwärts!\n\n");
    // Anwort: Alles andere...
    } else {
        printf ("Dies ist keine gültige Antwort!\n\n");
    };
};
