#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
    //Write your code here
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp-> data = val;
    
    if(head == NULL){
        //temp -> prev = NULL;
        //temp -> next = NULL;
        head = temp;
        //free(temp);
    }
    else{
        //temp -> prev = NULL;
        temp -> next = head;
        head -> prev = temp;
        head = temp;
        //free(temp);
    }
    
}

void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    addFirst(10);
    addFirst(20);
    addFirst(30);
    
    printList();
}
