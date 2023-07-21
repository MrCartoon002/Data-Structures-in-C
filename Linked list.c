#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp;
int main()
{
    int a=1;
    while(a!=0)
    {
    struct node * newnode;
    head=NULL;
    newnode=(struct node *)(malloc(sizeof(struct node)));
    printf("Enter data ");
    scanf("%d \t",&newnode->data);
    newnode->next=NULL;
    printf("%d \t",newnode->data);
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter the a(0,2) ");
    scanf("%d \t",&a);
    }
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
}
struct node * newnode;
    head=NULL;
    newnode=(struct node *)(malloc(sizeof(struct node)));
    printf("Enter data ");
    scanf("%d \t",&newnode->data);
void insert_at_begin()
            {
                newnode->next=head;
                head=newnode;
            }
void insert_at_end()
            {
                newnode->next=NULL;
                temp=head;
            }
void insert_at_middle()

void deletion()

}


