#include "question/q1.h"
#include "question/q2.h"
#include "question/q3.h"
#include <stdio.h>

int main() {

  // --- Question 1 --- //
  printf("\n--- Question 1 ---\n");
  int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n1 = sizeof(A) / sizeof(A[0]);

  int result = maxSubarray(A, 0, n1 - 1);
  printf("Maximum Subarray Sum = %d\n", result);

  // --- Question 2 --- //
  printf("\n--- Question 2 ---\n");
  int B[] = {0, 1, 4, 6, 10, 12};
  int n2 = 6;

  int idx = findAi2i(B, 0, n2);

  if (idx != -1)
    printf("Found: A[%d] = %d = 2*%d\n", idx, B[idx], idx);
  else
    printf("No such index exists.\n");

  // --- Question 3 --- //
  printf("\n--- Question 3 ---\n");
  int value[] = {60, 100, 120};
  int weight[] = {10, 20, 30};
  int W = 50;
  int n3 = sizeof(value) / sizeof(value[0]);

  int maxValue = knapsack(W, weight, value, n3);
  printf("Maximum value (Knapsack) = %d\n", maxValue);

  return 0;
}
