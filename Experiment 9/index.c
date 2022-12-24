// WAP to perform insert and delete operations on circular queue using array.

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
  if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
    printf("\nQueue Overflow");
    return;
  }
  printf("\nEnter the element to be inserted: ");
  scanf("%d", &item);
  if (front == -1) {
    front = 0;
    rear = 0;
  } else {
    if (rear == MAX - 1)
      rear = 0;
    else
      rear = rear + 1;
  }
  queue[rear] = item;
}

void delete () {
  if (front == -1) {
    printf("\nQueue Underflow");
    return;
  }
  printf("\nElement deleted from queue is: %d", queue[front]);
  if (front == rear) {
    front = -1;
    rear = -1;
  } else {
    if (front == MAX - 1)
      front = 0;
    else
      front = front + 1;
  }
}

void display() {
  int front_pos = front, rear_pos = rear;
  if (front == -1) {
    printf("\nQueue is empty");
    return;
  }
  printf("\nQueue elements: ");
  if (front_pos <= rear_pos)
    while (front_pos <= rear_pos) {
      printf("%d ", queue[front_pos]);
      front_pos++;
    }
  else {
    while (front_pos <= MAX - 1) {
      printf("%d ", queue[front_pos]);
      front_pos++;
    }
    front_pos = 0;
    while (front_pos <= rear_pos) {
      printf("%d ", queue[front_pos]);
      front_pos++;
    }
  }
  printf("\n");
}
