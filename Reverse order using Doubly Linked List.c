#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
}*head,*temp,*tail,*newnode,*temp1,*temp2;

int create()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the element : ");
        scanf("%d",&newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
            tail->next=NULL;
        }
    }
}
int display()
{
    int ch1;
    printf("\n1.FORWARD \n2.REVERSE \n");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 1:
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        break;

    case 2:
        temp=tail;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->prev;
        }
        break;

    default :
        printf("\nEnter valid operation !!!");
        break;
    }
}

int search()
{
    int n,count=1,flag=0;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&n);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==n)
        {
            printf("\nElement found at position %d",count);
            flag++;

        }
        count++;
        temp=temp->next;
    }
    if(flag==0)
    {
        printf("\nELement not found !");
    }
}

int swap()
{
    temp1=head;
    temp2=tail;
    int c;
    while((temp1->prev!=temp2)&&(temp1!=temp2))
    {
        c=temp1->data;
        temp1->data=temp2->data;
        temp2->data=c;
        temp1=temp1->next;
        temp2=temp2->prev;
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.CREATE \n2.DISPLAY \n3.SEARCH \n4.SWAP \n5.EXIT \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            swap();
            break;
        case 5:
            exit(1);
            break;
        default :
            printf("Enter correct choice !!!");
        }
    }
}
