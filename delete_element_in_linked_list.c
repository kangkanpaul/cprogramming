#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *next;
};

void deleteNode(struct node **head, int key)
{     
     //Write your code here
     if((*head)->data == key){
         //printf("In head if %d\n",(*head)->data);
         struct node *temp = *head;
         *head = (*head) -> next;
         //printf("In if after updating head %d\n",(*head)->data);
         //free(temp);
    }else{
        struct node *curr = *head;
        struct node *temp = curr;
        //printf("In else head %d\n",(*head)->data);
       // printf("In else temp %d\n",temp->data);
        //printf("In else curr %d\n",curr->data);
        while(temp->next!=NULL){
            if(temp->data != key){
                curr = temp;
                temp = temp->next;
                //printf("In else while if temp %d\n",temp->data);
                //printf("In else while  if curr %d\n",curr->data);
            }
            else{
                
                //printf("In else while else temp %d\n",temp->data);
                //printf("In else while else curr %d\n",curr->data);
                //free(temp);
                //printf("In else while else temp %d\n",temp->data);
                curr->next = curr->next->next;
                break;
                
            }
        }
        if(temp->next==NULL){
            if(temp->data==key){
                curr->next = curr->next->next;
            }
        }
    }

}

//Don't change the below code
void addLast(struct node **head, int val)
{   
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if(*head == NULL)
         *head = newNode;
    else
    {   
        struct node *lastNode = *head;

        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
    }

}

void printList(struct node *head)
{
    struct node *temp = head;
    //printf("updated List\n");

    while(temp != NULL)
    {
         
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;

    addLast(&head,10);
    addLast(&head,20);
    addLast(&head,30);
    addLast(&head,40);
    addLast(&head,50);
    addLast(&head,60);

    int key = 70;
    // scanf("%d",&key);

    deleteNode(&head, key);

    printList(head);

    return 0;
}
