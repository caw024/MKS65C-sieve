#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){
  int k = (int) (targetPrime * 1.5) + 20;
  int arr[k];
  int i = 2;
  arr[0] = 0;
  arr[1] = 0;
  while (i < k){
    arr[i] = i;
    i++;
  }
  int j = 2;
  int m;
  for (j; j < k; j++){
    m = j;
    if (a[j] != 0){
      for (m; m < sqrt(k); m++){
	if (a[m] % j == 0){
	  a[m] = 0;
	}
      }
    }
  }
  
  
  return 0;
}
