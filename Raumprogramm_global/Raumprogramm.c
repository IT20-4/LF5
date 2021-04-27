#include <stdio.h>

void answer();

int i; // Zähler für Umdrehungn
int x,y; // Schrittzähler
char wand[5]; // Eingabe Nutzer

void main () {
    int z; // doch kein float :(

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
        answer();
    };
    z = y-x;
    printf ("%d Schritte vorwärts!\n\n",z);
};
