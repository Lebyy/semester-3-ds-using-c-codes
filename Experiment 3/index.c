// WAP to search data using binary search.

#include <stdio.h>

int main() {
  int n, i, j, temp, search, first, last, middle;
  printf("Enter number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d integers: ", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // sort the array
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\nEnter value to find: ");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last) {
    if (arr[middle] < search) {
      first = middle + 1;
    } else if (arr[middle] == search) {
      printf("%d found at location %d.\n", search, middle + 1);
      break;
    } else {
      last = middle - 1;
    }
    middle = (first + last) / 2;
  }
  if (first > last) {
    printf("Not found! %d is not present in the list.\n", search);
  }
  return 0;
}
