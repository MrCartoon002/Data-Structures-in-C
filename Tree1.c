#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left,*right;
}*root,*new,*temp;

struct node* create();
void preorder(struct node* root);
void inorder(struct node* root);
void postorder(struct node* root);

void main()
{
root=create();
temp=root;
inorder(temp);
}

struct node* create()
{
    int x;
    new=(struct node*)malloc(sizeof(struct node));
    printf("-1 for no node :\n ");

    scanf("%d",&x);

    if(x==-1)
    {
        return 0;
    }
    new->data=x;
    printf("enter left chid:\n");
    scanf("%d",&x);
    new->left=create();
    printf("enter right child :\n");
    scanf("%d",&x);
    new->right=create();
    return new;

}


void inorder(struct node* temp)
{
    if(temp==0)
    {
        return ;
    }
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);

}

void preorder(struct node* root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}
void postorder(struct node* root)
{
    if(root==0)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);

}
}
