#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtTheEnd(int value)
{
    
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(head == NULL)
    {
        head = newNode;
    } 
    else
    {
        struct Node *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode; 
    }
}


void printLinkedList()
{
    struct Node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}


void insertAtTheBegining(int value)
{

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTheMiddle(int place, int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    struct Node *temp = head;

    for(int i=2;i<place;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


int main()
{
    insertAtTheEnd(10);
    insertAtTheEnd(20);
    insertAtTheEnd(30);
    insertAtTheEnd(40);
    insertAtTheEnd(50);
    insertAtTheEnd(60);
    insertAtTheBegining(5);
    insertAtTheBegining(1);
    insertAtTheMiddle(4,15);
    printf("LinkedList: ");
    printLinkedList();
}
