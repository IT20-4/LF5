#include <stdio.h>

extern int i;
extern int x,y;

void stepcounter() {
  // Schrittzähler 1
  if (i==0) {
    x++;
//    printf ("x-Schritte: %d\n\n",x); //für Testzwecke
  // Schrittzähler 2
  } else if (i==2) {
    y++;
//    printf ("y-Schritte: %d\n\n",y); //für Testzwecke
  };
};
