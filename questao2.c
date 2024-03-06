#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int * fibonacci(int n) {
  int i = 0, j = 1, k, t;
  int * result = (int *) malloc(n * sizeof(int));
  
  for (k = 0; k < n; k++) {
    result[k] = i;
    t = i + j;
    i = j;
    j = t;
  }
  return result;
}

int isFibonnaci(int n) {
  int newNumber = n;

  if(n < 10) {
    n = 10;
  }

  if(n > 100) {
    n = 100;
  }
  
  int * fib = fibonacci(n);

  int i = 0;

  for(i = 0; i < n; i++) {
    if(fib[i] == newNumber) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int fib;
  scanf("%d", &fib);
  
  if(isFibonnaci(fib)) {
    printf("pertence");
  } else {
    printf("nao pertence");
  }
  
  return 0;
}