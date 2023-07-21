#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front,*rear;

void enqueue(int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if(front == NULL)
    {
        front = new_node;
        rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
}

void dequeue()
{
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        front = front->next;
    }
}

void display()
{
    struct node *temp = front;
    if(front == NULL)
    {
        printf("\n");
        return;
    }
    printf("Elements in list:\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
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
