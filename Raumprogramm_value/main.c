#include <stdio.h>
#include <string.h>

void Rueckweg(int y, int x);

void main () {
    int i; // Zähler für Umdrehungen
    int x, y; // Schrittzähler
    char wand[5]; // Eingabe Nutzer
    char ja[] = "Ja"; // Vergleich für Eingabe
    char nein[] = "Nein"; // Vergleich für Eingabe

    i = 0;
    x = 0;
    y = 0;

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
            // Schrittzähler 1
            if (i==0) {
                x++;
            // Schrittzähler 2
            } else if (i==2) {
                y++;
            };
        // Anwort: Alles andere...
        } else {
            printf ("Dies ist keine gültige Antwort!\n\n");
        };
    };
    Rueckweg(y, x);
};
