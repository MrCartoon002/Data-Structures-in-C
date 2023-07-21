#include<stdio.h>
#include<stdlib.h>

int size = 10;
int queue[10];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if(rear == size-1)
    {
        printf("Queue is full\n");
    }
    else if(front == -1)
    {
        front++;
        rear++;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if(rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i = 0;i < rear;i++)
        {
            queue[i] = queue[i+1];
        }
        rear--;
    }
}
void display()
{
    if(rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Elements in list:\n");
        for(int i = 0;i <= rear;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}
void main()
{
    int choice;
    int data;
    while(1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Please enter valid choice\n");
        }
    }
}
