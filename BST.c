#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*root;
void display(struct node*root);
void insert();
void search(struct node *newnode,struct node *root);
    struct node* minNode(struct node *root) ;
    struct node* deleteNode(struct node *root, int value);


int main()
{
int i,j,x;
    int value;
insert();
printf("enter the value to be deleted");

scanf("%d",&value);



minNode(root) ;

 deleteNode(root, value);
 display(root);

}
void insert()
{
    int choice=1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        newnode->left=0;
        newnode->right=0;
        printf("Enter the data");
        scanf("%d",&newnode->data);
        if(root==0)
        {
            root=newnode;
        }
        else
        {
            search(newnode,root);
        }
        printf("Choice ");
        scanf("%d",&choice);
    }
}
void search(struct node *newnode,struct node *root)
{
    if((newnode->data)<(root->data)&&root->left==0)
    {
        root->left=newnode;
    }
    if((newnode->data)>(root->data)&&root->right==0)
    {
        root->right=newnode;
    }
    if((newnode->data)<(root->data)&&root->left!=0)
    {
        search(newnode,root->left);
    }
    if((newnode->data)>(root->data)&&root->right!=0)
    {
        search(newnode,root->right);
    }
}
void display(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        display(root->left);
        printf("%d ",root->data);
        display(root->right);
}
}
