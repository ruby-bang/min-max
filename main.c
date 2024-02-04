#include <stdio.h>
#include <stdlib.h>

// funtion to find min and max number in array
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

/*size of array*/
#define SIZE 5

int main() {
  /*array you can change size and value*/
  int arr[SIZE] = {1, 2, 3, 4, 5};

  int *min = malloc(4 * sizeof(int));
  int *max = malloc(4 * sizeof(int));
  min_max(arr, SIZE, min, max);
  printf("min: %d, max: %d\n", *min, *max);
  return 0;
}
