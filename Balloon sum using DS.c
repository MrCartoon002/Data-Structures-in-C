#include<stdio.h>

struct node
{
    char *data;
    struct node *next;
}*newnode,*head,*tail,*temp;

void create(char s[]);
void split(char str[]);
void display();

void main()
{
    int t;
    scanf("%d",&t);
    char str[100];
    for(int i=0;i<t;i++)
    {

        scanf("%s",&str);
        //printf("%d",strlen(str));
        split(str);

    }

}

void split(char str[])
{

    for(int i=0;i<strlen(str);i++)
    {
        char s=str[i];
        create(s);
    }
}

void create(char s[])
{

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=s;
    newnode->next=NULL;
    if(head==NULL)
    {

        head=newnode;
        tail=newnode;

    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}

void display()
{
  temp=head;
  while(temp!=NULL)
  {
      printf("%s ",temp->data);
      temp=temp->next;
  }
}
