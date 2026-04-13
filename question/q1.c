#include "q1.h"

int maxSubarray(int A[], int l, int h) {
  if (l == h)
    return A[l];

  int m = (l + h) / 2;

  int left = maxSubarray(A, l, m);
  int right = maxSubarray(A, m + 1, h);

  int sum = 0, left_sum = -1000000;
  for (int i = m; i >= l; i--) {
    sum += A[i];
    if (sum > left_sum)
      left_sum = sum;
  }

  sum = 0;
  int right_sum = -1000000;
  for (int i = m + 1; i <= h; i++) {
    sum += A[i];
    if (sum > right_sum)
      right_sum = sum;
  }

  int cross = left_sum + right_sum;

  if (left >= right && left >= cross)
    return left;
  if (right >= left && right >= cross)
    return right;
  return cross;
}
