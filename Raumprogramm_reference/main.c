#include <stdio.h>
#include <string.h>

void stepcounter(int *i, int *x, int *y);

void main () {
    int i; // Zähler für Umdrehungen
    int x, y; // Schrittzähler
    int z; // doch kein float :(
    char wand[5]; // Eingabe Nutzer
    char ja[] = "Ja"; // Vergleich für Eingabe
    char nein[] = "Nein"; // Vergleich für Eingabe

    i = 0;
    x = 0;
    y = 0;
    z = 0;

    while (i<4) {
        // Info
        printf ("--------------------------------\n");
        printf ("Bitte antworte mit Ja oder Nein:\n");
        printf ("Stehe ich vor einer Wand?\n\n");
        scanf ("%s",wand);
        // Antwort: Ja
        if (strcmp(ja, wand) == 0) {
            printf (" \n");
            printf ("Linksdrehung!\n\n");
            i++;
        // Anwort: Nein
        } else if (strcmp(nein, wand) == 0) {
            printf (" \n");
            printf ("Schritt vorwärts!\n\n");
            stepcounter(&i, &x, &y);
        // Anwort: Alles andere...
        } else {
            printf ("Dies ist keine gültige Antwort!\n\n");
        };
    };
    z = y-x;
    printf ("%d Schritte vorwärts!\n\n",z);
};
