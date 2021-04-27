#include <stdio.h>
#include <string.h>

void navigation(char ja[], char nein[], char wand[], int *i, int *x, int *y) {
    //Antwort Ja - Linksdrehung
    if (strcmp(ja, wand) == 0) {
      (*i)++;
    //Anwort: Nein - Schritt vorwärts
    } else if (strcmp(nein, wand) == 0) {
        // Schrittzähler 1
        if ((*i)==0) {
            (*x)++;
            // printf ("x-Schritte: %d\n\n",x); // Debug
        // Schrittzähler 2
        } else if ((*i)==2) {
            (*y)++;
            // printf ("y-Schritte: %d\n\n",y); // Debug
        };
    };
};
