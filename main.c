#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"
#include <time.h>
//CITATIONS: I found how time.h works from geeksforgeeks.org

int main(int argc, char * argv[]){
  clock_t t;
  double cpu_time;
  int iterations = 1;
  int target = 149000;
  
  if(argc > 1){
    target = atoi(argv[1]);
  }
  if(argc > 2){
    iterations = atoi(argv[2]);
  }


  int ans = 0;
  while(iterations>0){
    t = clock();
    ans=sieve(target);
    t = clock() - t;
    cpu_time = ((double) t)/CLOCKS_PER_SEC;
    printf("iteration %d: took %f seconds\n", iterations, cpu_time);
      
    iterations--;
    printf("The n=%d prime is %d\n", target, ans );

    //this is to modify which prime to
    //potentially avoid CPU caching
    target++;
  }
  return 0;
}
