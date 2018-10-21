#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"


int sieve(int targetPrime){
  int k =  (int) ( (targetPrime * (int) (1.5 * log(targetPrime)) + 20 )/2);
  int *arr;
  arr = (int*)(calloc(k, sizeof(int)) );
  
  int j = 1;
  int m, o;

  for (j; j <= sqrt(k); j++){
    if (*(arr+j) == 0){
      o = 2*j + 1; //incrementing to get nxt multiple of j
      m = j + o; //next multiple of j;
      for (m; m < k; m+=o){
	*(arr+m) = 1;
      }
    }
  }

  
  int ctr = 0;
  int n = 1;
  //find nonzero values
  for (n; n < k; n++){
    if (*(arr+n) == 0){
      ctr += 1;
      if (ctr == (targetPrime - 1)){
	return 2*n + 1;
      }
    }
  }
  
  
  return 0;

}

