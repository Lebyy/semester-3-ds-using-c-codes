// WAP to sort an array using selection sort.

#include <stdio.h>

int main() {
  int a[100], n, i, j, temp, min;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
    }

    if (min != i) {
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
  printf("The sorted array is: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
