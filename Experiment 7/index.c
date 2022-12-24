// WAP to perform push and pop operations on stack. 

#include <stdio.h>

int main() {
  int stack[100], choice, n, top = -1, x, i;
  printf("Enter the size of stack ");
  scanf("%d", &n);
  printf("1.Push\n2.Pop\n3.Display\n4.Exit");
  do {
    printf("\nEnter the choice ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        if (top >= n - 1) {
          printf("Stack overflow ");
        } else {
          printf("Enter a value to be pushed ");
          scanf("%d", &x);
          top++;
          stack[top] = x;
        }
        break;
      case 2:
        if (top <= -1) {
          printf("Stack underflow ");
        } else {
          printf("The popped element is %d", stack[top]);
          top--;
        }
        break;
      case 3:
        if (top >= 0) {
          printf("The elements in stack are ");
          for (i = top; i >= 0; i--) printf("%d ", stack[i]);
          printf("\nPress Next Choice");
        } else
          printf("The stack is empty ");
        break;
      case 4:
        printf("Exit Point ");
        break;
      default:
        printf("Please Enter a Valid Choice(1/2/3/4)");
    }
  } while (choice != 4);
  return 0;
}
