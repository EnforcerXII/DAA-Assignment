#include "q2.h"

int findAi2i(int A[], int i, int n) {
  if (i == n)
    return -1;

  if (A[i] == 2 * i)
    return i;

  return findAi2i(A, i + 1, n);
}
