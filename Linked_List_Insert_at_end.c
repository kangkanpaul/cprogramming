// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *next;
};

struct node *head = NULL;

void addLast(int val)
{
    struct node *last_node = malloc(sizeof(struct node));
    last_node -> data = val;
    last_node -> next = NULL;
    struct node *node1;
    node1 = head;
    if(head == NULL){
        head = last_node;
    }
    else{
        while(node1 -> next != NULL){
            node1 = node1 -> next;
        }
        node1 -> next = last_node;
    }
	
}

//Don't change the below code
void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
     addLast(10);
     addLast(20);
     addLast(30);
     addLast(40);
     addLast(50);
     addLast(60);

     printList();

     return 0;
}
