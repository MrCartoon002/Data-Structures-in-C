#include<stdio.h>
#include<stdlib.h>

void create();
void display();

void intsertend();
void insertfront();
void insertmid();

void deletefront();
void deleteend();
void deletemid();

void count();
void search();

struct ak
{
    int taurus;
    struct ak *next;
}*head, *temp, *newnode, *nextnode, *prev;

int main()
{
    int choice;
    while(1)
    {
        printf("\n\n SINGLY LINKED LIST \n\n");
    }
}
