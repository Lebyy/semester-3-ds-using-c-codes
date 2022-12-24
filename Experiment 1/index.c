// Write a program to perform insert, delete and display operations on an array using switch case.

#include <stdio.h>

int main() {
  int arr[100], n, i, j, pos, ele, choice;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the choice: ");
  scanf("%d", &choice);
  switch (choice) {
    case 1:
      printf("Enter the position and element to be inserted: ");
      scanf("%d %d", &pos, &ele);
      for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
      }
      arr[pos - 1] = ele;
      n++;
      printf("The array after insertion is: ");
      for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
      }
      break;
    case 2:
      printf("Enter the position of the element to be deleted: ");
      scanf("%d", &pos);
      for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
      }
      n--;
      printf("The array after deletion is: ");
      for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
      }
      break;
    case 3:
      printf("The array is: ");
      for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
      }
      break;
    default:
      printf("Invalid choice");
  }
  return 0;
}
