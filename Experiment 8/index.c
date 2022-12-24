// WAP to perform insert and delete operations on linear queue using array.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void insert();
void delete ();
void display();

void main() {
  int choice;
  while (1) {
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        insert();
        break;
      case 2:
        delete ();
        break;
      case 3:
        display();
        break;
      case 4:
        exit(0);
    }
  }
}

void insert() {
  int item;
  if (rear == MAX - 1)
    printf("\nQueue is full");
  else {
    if (front == -1) front = 0;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &item);
    rear = rear + 1;
    queue[rear] = item;
  }
}

void delete () {
  if (front == -1 || front > rear)
    printf("\nQueue is empty");
  else {
    printf("\nDeleted element is %d", queue[front]);
    front = front + 1;
  }
}

void display() {
  int i;
  if (front == -1)
    printf("\nQueue is empty");
  else {
    printf("\nQueue is: ");
    for (i = front; i <= rear; i++) printf("%d ", queue[i]);
  }
}
