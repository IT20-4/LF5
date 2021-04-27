#include <stdio.h>

void stepcounter(int *i, int *x, int *y) {
  // Schrittzähler 1
  if ((*i)==0) {
    (*x)++;
  // Schrittzähler 2
  } else if ((*i)==2) {
    (*y)++;
  };
};
