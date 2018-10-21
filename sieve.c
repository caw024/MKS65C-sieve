#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){
  int k =  targetPrime * (int) (1.25 * log(targetPrime)) + 20;
  int arr[k];
  
  arr[0] = 0;
  arr[1] = 0;

  int i = 2;
  //setup array
  while (i < k){
    arr[i] = i;
    i++;
  }

  
  int j = 2;
  int m;
  //sieve of eratosthenes
  for (j; j <= sqrt(k); j++){
    if (arr[j] != 0){
      m = 2*j; //next multiple of j;
      for (m; m < k; m+=j){
	 arr[m] = 0;	
      }
    }
  }

  int ctr = 0;
  int n = 0;
  //find nonzero values
  for (n; n < k; n++){
    if (arr[n] != 0){
      ctr += 1;
      if (ctr == targetPrime){
	return arr[n];
      }
    }
  }
  
  
  return 0;
}
