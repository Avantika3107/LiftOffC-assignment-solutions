#include <stdio.h>
int main()
 {

  int i, n;

  
  int fterm = 0, sterm = 1;

  
  int nextTerm = fterm + sterm;

  
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  
  printf("Fibonacci Series: %d, %d, ", fterm,sterm);

  
  for (i = 3; i <= n; ++i)
   {
    printf("%d, ", nextTerm);
    fterm = sterm;
    sterm = nextTerm;
    nextTerm = fterm + sterm;
  }

  return 0;
}

