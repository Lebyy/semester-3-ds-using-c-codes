// WAP to search data using linear search.

#include <stdio.h>

int main() {
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter array elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int data;
  printf("Enter data to search: ");
  scanf("%d", &data);

  int index = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == data) {
      index = i;
      break;
    }
  }

  printf("Index of data: %d", index);
}
