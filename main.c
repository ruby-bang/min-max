#include <stdio.h>

void min_max(const int arr[], int count, int *min, int *max) {
  *max = arr[0];
  for (int i = 0; i < count; i++)
    if (arr[i] >= *max)
      *max = arr[i];

  *min = arr[0];
  for (int i = 0; i < count; i++)
    if (arr[i] <= *min)
      *min = arr[i];
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int count = 5;
  int min = 0;
  int max = 0;
  int *minptr = &min;
  int *maxptr = &max;
  min_max(arr, count, minptr, maxptr);
  printf("min: %d, max: %d\n", min, max);
  return 0;
}
