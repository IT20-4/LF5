#include <stdio.h>

void main () {

  long int x;
  long int y;

  printf("2 ist eine Primzahl\n");

  for (x=3; x<1000000; x=x+2) {
    for (y=3; y<=x; y++) {
      if (x%y==0 && x!=y) {
        break;
      };
      if (x==y) {
        printf("%ld\n", x);
      };
    };
  };
};
