#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int rear = -1, front = -1;
int Q[SIZE];
void enqueue();
void dequeue();
void isEmpty();
void isFull();

int main()
{
    int choice, k;
    do
    {
        printf("\nPerform operations on the queue:\n");
        printf("\n1. Enqueue\n 2. Dequeue \n 3. isFull \n4. isEmpty \n 5. Exit\n");
        printf("\n\nEnter the choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            isFull();
            break;

        case 4:
            isEmpty();
            break;

        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;

            printf("Enter 1 to continue: ");
            scanf("%d", &k);
        }
    } while (k == 1);
    return 0;
}
void enqueue()
{
    int x;
    printf("enter an element");
    scanf("%d", &x);

    if (rear == SIZE - 1)
    {
        printf("overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    Q[rear] = x;
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("underflow");
    }
    else
    {
        printf("%d", Q[front]);
    }
}
void isFull()
{
    if (rear == SIZE - 1)
    {
        printf("queue is full");
    }
    else
    {
        printf("queue is not full");
    }
}
void isEmpty()
{
    if (front == -1 || front > rear)
    {
        printf(" queue is empty");
    }
    else
    {
        printf("queue is not empty");
    }
}
