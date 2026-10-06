#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void create(int n)
{
    struct Node *newNode, *temp;
    int i, data;
    for (i = 1; i <= n; i++)
        {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;
        } 
        else 
        {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
}
void display() 
{
    struct Node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insertBeginning() 
{
    struct Node *newNode;
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}
void insertEnd() 
{
    struct Node *newNode, *temp;
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
void insertPosition()
{
    struct Node *newNode, *temp;
    int data, pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &data);
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (pos == 1) 
    {
        newNode->prev = NULL;
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }
    temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL)
    {
        printf("Invalid position\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    temp->next = newNode;
}
int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    create(n);
    printf("\nOriginal List:\n");
    display();
    printf("\nInsertion at beginning:\n");
    insertBeginning();
    display();
    printf("\nInsertion at end:\n");
    insertEnd();
    display();
    printf("\nInsertion at specific position:\n");
    insertPosition();
    display();
    return 0;
}
