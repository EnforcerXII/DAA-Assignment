#include "question/q1.h"
#include <stdio.h>

int main() {
  int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = sizeof(A) / sizeof(A[0]);

  // --- Question 1 --- //
  int result = maxSubarray(A, 0, n - 1);

  printf("Maximum Subarray Sum = %d\n", result);

  // --- Question 2 --- //

  // --- Question 3 --- //
  return 0;
}
