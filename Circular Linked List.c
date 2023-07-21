#include<stdio.h>
#include<stdlib.h>
void create();
void display();

/*void intsertend();
void insertfront();
void insertmid();

void deletefront();
void deleteend();
void deletemid();

void count();
void search();*/

struct ak
{
    int taurus;
    struct ak *next, *prev;
}*head, *temp, *newnode, *nextnode, *tail;

int main()
{
    int choice;
    while(1)
    {
        printf("\n\n CIRCULAR LINKED LIST \n\n");
        printf("\n 1. Create \n");
        printf("\n 2. Display \n");
        printf("\n 3. Insert At Begin \n");
        printf("\n 4. Insert At Middle \n");
        printf("\n 5. Insert At End \n");
        printf("\n 6. Delete At Begin \n");
        printf("\n 7. Delete At Middle \n");
        printf("\n 8. Delete At End \n");
        printf("\n 9. Search \n");
        printf("\n 10. Count \n");
        printf("\n 11. Exit \n");
        printf("\n Enter Choice (1,2,3,4,5,6,7,8,9): \n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        /*case 3:
            insertfront();
            break;
        case 4:
            insertatmid();
            break;
        case 5:
            insertatmid();
            break;
        case 6:
            deletefront();
            break;
        case 7:
            deleteatmid();
            break;
        case 8:
            deleteend();
            break;
        case 9:
            search();
            break;
        case 10:
            count();
            break;*/
        default:
        break;
        }
    }
}
        void create()
        {
            int n;
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
            newnode= (struct ak*)(malloc(sizeof(struct ak)));
            scanf("%d",&newnode->taurus);
            newnode->next=NULL;

            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
                newnode->next=head;
                tail=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
                tail=newnode;
                tail->next=head;
            }
            }
            }


            void display()
        {
            temp=head;
            while(temp->next!=head)
            {
                printf("%d ",temp->taurus); //to print elements except last element
                temp=temp->next;
         }
         printf("%d ",temp->taurus); //to print the last element
        }
