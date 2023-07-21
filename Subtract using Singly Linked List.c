#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head,*temp,*newnode;

struct node1{
int data1;
struct node1 *next1;
}*head1,*temp1,*newnode1;

int create()
{
    int n;
    printf("\nEnter the nummber of elements : ");
    scanf("%d",&n);
    while(n--)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
}

int create1()
{
    int n;
    printf("\nEnter the nummber of elements : ");
    scanf("%d",&n);
    while(n--)
    {
        newnode1=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode1->data1);
        newnode1->next1=NULL;
        if(head1==NULL)
        {
            head1=newnode1;
            temp1=newnode1;
        }
        else
        {
            temp1->next1=newnode1;
            temp1=temp1->next1;
        }
    }
}

int display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
}
int display1()
{
    temp1=head1;
    while(temp1!=NULL)
    {
        printf(" %d",temp1->data1);
        temp1=temp1->next1;
    }
}
int difference()
{
    int a=0,b=0;
    temp=head;
    while(temp!=NULL)
    {
        a=((a*10)+temp->data);
        temp=temp->next;
    }
    temp1=head1;
    while(temp1!=NULL)
    {
        b=((b*10)+temp1->data1);
        temp1=temp1->next1;
    }
    printf("\nThe difference is %d",(a-b));
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.CREATE 1\n2.CREATE 2\n3.DISPLAY 1\n4.DISPLAY 2\n5.DIFFERENCE\n6.EXIT");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            create1();
            break;
        case 3:
            display();
            break;
        case 4:
            display1();
            break;
        case 5:
            difference();
            break;
        case 6:
            exit(1);
        }
    }
}
