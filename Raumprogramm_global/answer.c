#include <stdio.h>
#include <string.h>

void stepcounter();

extern int i;
extern char wand[5];

void answer() {
  char ja[] = "Ja"; // Vergleich für Eingabe
  char nein[] = "Nein"; // Vergleich für Eingabe

  //Anwort: Ja
  if (strcmp(ja, wand) == 0) {
      printf (" \n");
      printf ("Linksdrehung!\n\n");
      i++;
      //Anwort: Nein
    } else if (strcmp(nein, wand) == 0) {
      printf (" \n");
      printf ("Schritt vorwärts!\n\n");
      stepcounter();
      // Anwort: Alles andere...
    } else {
      printf ("Dies ist keine gültige Antwort!\n\n");
    };
};
