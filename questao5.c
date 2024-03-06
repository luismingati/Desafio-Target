#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * invertedString(char * str) {
  int i, j;
  int size = strlen(str);
  char * inverted = (char *) malloc(size * sizeof(char));

  for(i = size - 1, j = 0; i >= 0; i--, j++) {
    inverted[j] = str[i];
  }
  return inverted;
}

int main() {
  char str[100];
  scanf("%s", str);

  printf("%s\n", invertedString(str));
  
  return 0;
}