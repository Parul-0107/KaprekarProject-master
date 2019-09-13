#include<stdlib.h>
#include<stdio.h>

#include "kaprekarUtils.h"

int main(int argc, char **argv) {

  if(argc  != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[1]);
    exit(1);
  }

  int n = atoi(argv[2]);

  if(isKaprekar(n)) {
    fprintf("%d is a Kaprekar Number!\n", n);
  } 
 else {
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
