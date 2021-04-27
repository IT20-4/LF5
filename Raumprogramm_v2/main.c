#include <stdio.h>

void frage(char wand[]);
void navigation(char ja[], char nein[], char wand[], int *i, int *x, int *y);
void antwort(char ja[], char nein[], char wand[]);
void rueckweg(int z, int x, int y);

void main() {
    int i; // Zähler für Linksdrehungen
    int x, y; // Zähler für Schritt auf Achsen
    int z; //Ergebnis für den Rückweg
    char wand[5];
    char ja[] = "Ja";
    char nein[] = "Nein";

    i = 0;
    x = 0;
    y = 0;
    z = 0;

    while (i<4) {
        frage(wand);
        // printf ("Deine Antwort: %s\n",wand); // Debug
        navigation(ja, nein, wand, &i, &x, &y);
        antwort(ja, nein, wand);
    };

    rueckweg(z, x, y);
};
