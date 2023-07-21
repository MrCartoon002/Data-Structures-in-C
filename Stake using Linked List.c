#include<stdio.h>
#include<stdlib.h>
void push();
/*void pop();*/
void display();

struct ak
{
    int taurus;
    struct ak *next;
}*head, *temp, *newnode, *nextnode, *tail;

struct ak *head = NULL;

int main()
{
    int choice;
    while(1)
    {
        printf("\n\n STACK AK \n\n");
        printf("\n 1. Push \n");
        printf("\n 2. Pop \n");
        printf("\n 3. Display \n");
        printf("\n 4. Exit \n");
        printf("\n Enter Choice (1,2,3,4): \n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        /*case 2:
            pop();
            break;*/
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
        break;
        }
    }
}
        /*void push()
        {
            if(top==NULL)
            {
                top=newnode;
            }
            else
            {
                newnode->next=top;
            }
            }*/


            void push(int val)
        {
            struct ak *newnode = malloc(sizeof(struct ak));
            scanf("%d",&newnode->taurus);
            newnode->taurus = val;
            newnode->next = head;
            head = newnode;
        }


        void display()
{
    struct ak *temp = head;
    while(temp != NULL)
    {
         printf("%d->", head->taurus);
         temp = temp->next;
    }
    printf("NULL \n");
}
