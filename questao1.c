#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {

  int i = 13, SOMA = 0, K = 0;
  while (K < i)
  {
    K = K + 1;
    SOMA = SOMA + K;
  }

  printf("SOMA = %d\n", SOMA);
  
  return 0;
}

//RESPOSTA: SOMA = 91